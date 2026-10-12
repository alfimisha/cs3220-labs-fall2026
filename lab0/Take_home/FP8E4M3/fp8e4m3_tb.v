`timescale 1ns/1ps

module fp8e4m3_tb;

    reg         i_clk;
    reg         i_rst_n;
    reg  [7:0]  i_data_a;
    reg  [7:0]  i_data_b;
    reg  [1:0]  i_inst;
    reg         i_valid;

    wire [7:0]  o_data;
    wire        o_valid;

    integer pass_count;
    integer fail_count;

    fp8e4m3 dut (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_data_a(i_data_a),
        .i_data_b(i_data_b),
        .i_inst(i_inst),
        .i_valid(i_valid),
        .o_data(o_data),
        .o_valid(o_valid)
    );

    always #5 i_clk = ~i_clk;


    task run_test;
        input [1:0] inst;
        input [7:0] a;
        input [7:0] b;
        input [7:0] expected;
        input [8*40-1:0] name;

        begin
            @(negedge i_clk);

            i_inst   = inst;
            i_data_a = a;
            i_data_b = b;
            i_valid  = 1'b1;

            @(negedge i_clk);
            i_valid = 1'b0;

            @(posedge i_clk);
            #1;

            if (o_data === expected) begin
                $display("PASS %-35s inst=%0d a=%h b=%h result=%h",
                         name, inst, a, b, o_data);
                pass_count = pass_count + 1;
            end
            else begin
                $display("FAIL %-35s inst=%0d a=%h b=%h got=%h expected=%h",
                         name, inst, a, b, o_data, expected);
                fail_count = fail_count + 1;
            end
        end
    endtask


    initial begin

        i_clk       = 0;
        i_rst_n     = 0;
        i_data_a    = 0;
        i_data_b    = 0;
        i_inst      = 0;
        i_valid     = 0;
        pass_count  = 0;
        fail_count  = 0;

        #12;
        i_rst_n = 1;


        // =====================================================
        // BASIC ADD TESTS
        // =====================================================

        run_test(2'd0, 8'h38, 8'h40, 8'h44,
                 "ADD 1.0 + 2.0");

        run_test(2'd0, 8'h3C, 8'h41, 8'h47,
                 "ADD 1.5 + 2.25");

        run_test(2'd0, 8'h4B, 8'hC1, 8'h45,
                 "ADD 5.5 + (-2.25)");

        run_test(2'd0, 8'h44, 8'hC4, 8'h00,
                 "ADD cancellation");

        run_test(2'd0, 8'h38, 8'h30, 8'h3C,
                 "ADD 1.0 + 0.5");

        run_test(2'd0, 8'h00, 8'h38, 8'h38,
                 "ADD zero + 1");


        // =====================================================
        // IMPORTANT ADD ROUNDING / STICKY TESTS
        // =====================================================

        // Exactly halfway:
        // 1.0 + 0.0625 = 1.0625
        // Halfway between 1.0 and 1.125
        // RNE chooses 1.0 because retained LSB is even
        run_test(2'd0, 8'h38, 8'h18, 8'h38,
                 "ADD exact tie -> even DOWN");

        // Slightly ABOVE halfway
        // 1.0 + 0.0703125 = 1.0703125
        // MUST round UP to 1.125
        // Very important sticky-bit test
        run_test(2'd0, 8'h38, 8'h19, 8'h39,
                 "ADD above tie sticky -> UP");

        // Slightly BELOW halfway
        // 1.0 + 0.0546875
        // rounds down to 1.0
        run_test(2'd0, 8'h38, 8'h16, 8'h38,
                 "ADD below tie -> DOWN");

        // Very tiny number should not affect result
        run_test(2'd0, 8'h38, 8'h08, 8'h38,
                 "ADD large exponent difference");

        // Tie where retained result is odd
        // 1.375 + 0.0625 = 1.4375
        // Halfway between 1.375 and 1.5
        // nearest-even should choose 1.5
        run_test(2'd0, 8'h3B, 8'h18, 8'h3C,
                 "ADD exact tie -> even UP");


        // =====================================================
        // ADD SUBTRACTION / RENORMALIZATION
        // =====================================================

        run_test(2'd0, 8'h38, 8'h98, 8'h37,
                 "SUB 1.0 - 0.0625");

        run_test(2'd0, 8'h38, 8'h99, 8'h37,
                 "SUB 1.0 - 0.0703125");

        run_test(2'd0, 8'h38, 8'h96, 8'h37,
                 "SUB 1.0 - 0.0546875");

        run_test(2'd0, 8'h48, 8'hC4, 8'h38,
                 "SUB renormalize 4 - 3");

        run_test(2'd0, 8'h44, 8'hC0, 8'h38,
                 "SUB renormalize 3 - 2");

        run_test(2'd0, 8'h39, 8'hB8, 8'h20,
                 "SUB 1.125 - 1");

        run_test(2'd0, 8'h40, 8'hB9, 8'h36,
                 "SUB 2 - 1.125");


        // =====================================================
        // MULTIPLICATION
        // =====================================================

        run_test(2'd1, 8'h3C, 8'h40, 8'h44,
                 "MUL 1.5 * 2");

        run_test(2'd1, 8'h3A, 8'h3A, 8'h3C,
                 "MUL 1.25 * 1.25");

        run_test(2'd1, 8'h39, 8'h39, 8'h3A,
                 "MUL rounding");

        run_test(2'd1, 8'h3E, 8'h3E, 8'h44,
                 "MUL normalization");

        run_test(2'd1, 8'h00, 8'h30, 8'h00,
                 "MUL zero");

        run_test(2'd1, 8'h3B, 8'h3C, 8'h40,
                 "MUL 1.375 * 1.5 tie");

        run_test(2'd1, 8'h3F, 8'h3F, 8'h46,
                 "MUL 1.875 squared");

        run_test(2'd1, 8'hB9, 8'h3E, 8'hC0,
                 "MUL negative");

        run_test(2'd1, 8'h40, 8'hB8, 8'hC0,
                 "MUL 2 * -1");


        // =====================================================
        // DIVISION BASIC
        // =====================================================

        run_test(2'd2, 8'h38, 8'h44, 8'h2B,
                 "DIV 1 / 3");

        run_test(2'd2, 8'h40, 8'h44, 8'h33,
                 "DIV 2 / 3");

        run_test(2'd2, 8'h4E, 8'h44, 8'h41,
                 "DIV 7 / 3");

        run_test(2'd2, 8'h38, 8'h52, 8'h1D,
                 "DIV 1 / 10");

        run_test(2'd2, 8'h38, 8'h40, 8'h30,
                 "DIV 1 / 2");

        run_test(2'd2, 8'h44, 8'h40, 8'h3C,
                 "DIV 3 / 2");

        run_test(2'd2, 8'h38, 8'h3C, 8'h33,
                 "DIV 1 / 1.5");

        run_test(2'd2, 8'h00, 8'h40, 8'h00,
                 "DIV zero / 2");


        // =====================================================
        // HARDER DIVISION ROUNDING CASES
        // =====================================================

        // 1.25 / 1.5 = 0.833333...
        run_test(2'd2, 8'h3A, 8'h3C, 8'h35,
                 "DIV 1.25 / 1.5");

        // 1.75 / 1.25 = 1.4 -> 1.375
        run_test(2'd2, 8'h3E, 8'h3A, 8'h3B,
                 "DIV 1.75 / 1.25");

        // 2.25 / 1.25 = 1.8 -> 1.75
        run_test(2'd2, 8'h41, 8'h3A, 8'h3E,
                 "DIV 2.25 / 1.25");

        // 1.125 / 1.75
        run_test(2'd2, 8'h39, 8'h3E, 8'h32,
                 "DIV 1.125 / 1.75");

        // 7 / 1.5 = 4.666... -> 4.5
        run_test(2'd2, 8'h4E, 8'h3C, 8'h49,
                 "DIV 7 / 1.5");

        // 10 / 3 = 3.333... -> 3.25
        run_test(2'd2, 8'h52, 8'h44, 8'h45,
                 "DIV 10 / 3");

        // 1 / 7
        run_test(2'd2, 8'h38, 8'h4E, 8'h21,
                 "DIV 1 / 7");

        // 1.5 / 10
        run_test(2'd2, 8'h3C, 8'h52, 8'h22,
                 "DIV 1.5 / 10");

        // Quotient less than 1, normalization + rounding
        run_test(2'd2, 8'h38, 8'h39, 8'h36,
                 "DIV 1 / 1.125");

        // Exact quotient > 1
        run_test(2'd2, 8'h39, 8'h38, 8'h39,
                 "DIV 1.125 / 1");

        // Repeating quotient
        run_test(2'd2, 8'h3F, 8'h39, 8'h3D,
                 "DIV 1.875 / 1.125");


        // =====================================================
        // FINAL RESULTS
        // =====================================================

        $display("");
        $display("======================================");
        $display("TOTAL PASS = %0d", pass_count);
        $display("TOTAL FAIL = %0d", fail_count);
        $display("======================================");

        $finish;

    end

endmodule