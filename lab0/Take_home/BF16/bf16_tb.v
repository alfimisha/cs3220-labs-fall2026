`timescale 1ns/1ps

module bf16_tb;

    reg         i_clk;
    reg         i_rst_n;
    reg  [15:0] i_data_a;
    reg  [15:0] i_data_b;
    reg  [1:0]  i_inst;
    reg         i_valid;

    wire [15:0] o_data;
    wire        o_valid;

    bf16 dut (
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
        input [1:0]  inst;
        input [15:0] a;
        input [15:0] b;
        input [15:0] expected;

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

            if (o_data === expected)
                $display("PASS  inst=%0d  a=%h  b=%h  result=%h",
                         inst, a, b, o_data);
            else
                $display("FAIL  inst=%0d  a=%h  b=%h  got=%h expected=%h",
                         inst, a, b, o_data, expected);
        end
    endtask


    initial begin

        i_clk    = 0;
        i_rst_n  = 0;
        i_data_a = 0;
        i_data_b = 0;
        i_inst   = 0;
        i_valid  = 0;

        #12;
        i_rst_n = 1;


        // -------------------------
        // ADD
        // -------------------------

        // 1.0 + 2.0 = 3.0
        run_test(2'd0, 16'h3F80, 16'h4000, 16'h4040);

        // 1.5 + 2.25 = 3.75
        run_test(2'd0, 16'h3FC0, 16'h4010, 16'h4070);

        // 5.5 + (-2.25) = 3.25
        run_test(2'd0, 16'h40B0, 16'hC010, 16'h4050);

        // 3.0 + (-3.0) = 0
        run_test(2'd0, 16'h4040, 16'hC040, 16'h0000);


        // -------------------------
        // MUL
        // -------------------------

        // 1.5 * 2.0 = 3.0
        run_test(2'd1, 16'h3FC0, 16'h4000, 16'h4040);

        // 1.25 * 1.25 = 1.5625
        run_test(2'd1, 16'h3FA0, 16'h3FA0, 16'h3FC8);

        // rounding case
        run_test(2'd1, 16'h3F8D, 16'h3F8D, 16'h3F9B);


        // -------------------------
        // DIV
        // -------------------------

        // 1 / 3 ≈ 0.333984375
        run_test(2'd2, 16'h3F80, 16'h4040, 16'h3EAB);

        // 2 / 3 ≈ 0.66796875
        run_test(2'd2, 16'h4000, 16'h4040, 16'h3F2B);

        // 7 / 3 ≈ 2.328125
        run_test(2'd2, 16'h40E0, 16'h4040, 16'h4015);

        // 1 / 10 ≈ 0.10009765625
        run_test(2'd2, 16'h3F80, 16'h4120, 16'h3DCD);


        $finish;
    end

endmodule