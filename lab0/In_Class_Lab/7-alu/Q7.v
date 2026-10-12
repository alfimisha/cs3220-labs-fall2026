module alu #(
    parameter DATA_WIDTH = 32,
    parameter INST_WIDTH = 4
)(
    input                   i_clk,
    input                   i_rst_n,
    input  [DATA_WIDTH-1:0] i_data_a,
    input  [DATA_WIDTH-1:0] i_data_b,
    input  [INST_WIDTH-1:0] i_inst,
    input                   i_valid,
    output  reg [DATA_WIDTH-1:0] o_data,
    output reg               o_overflow,
    output reg                o_valid
);

    // TODO: Implement the ALU module
    reg [DATA_WIDTH:0] calcresult;
    reg calcoverflow = 1'b0;
    integer i;
    always @(*) begin
        case (i_inst)
            4'd0: begin
                calcresult = i_data_a + i_data_b;
                calcoverflow = (~(i_data_a[DATA_WIDTH - 1] ^ i_data_b[DATA_WIDTH - 1]) & (i_data_a[DATA_WIDTH - 1] ^ calcresult[DATA_WIDTH - 1])  );
            end
            4'd1: begin
                calcresult = i_data_a - i_data_b;
                calcoverflow = (i_data_a[DATA_WIDTH-1] ^ i_data_b[DATA_WIDTH-1]) & (i_data_a[DATA_WIDTH-1] ^ calcresult[DATA_WIDTH-1]);
            end
            4'd2: begin
                calcresult = i_data_a * i_data_b;
                calcoverflow = (~(i_data_a[DATA_WIDTH - 1] ^ i_data_b[DATA_WIDTH - 1]) & (i_data_a[DATA_WIDTH - 1] ^ calcresult[DATA_WIDTH - 1]) );
            end
            4'd3: begin
                calcresult = ($signed(i_data_a) > $signed(i_data_b)) ? i_data_a : i_data_b;
                calcoverflow = 1'b0;
            end
            4'd4: begin
                calcresult = ($signed(i_data_a) < $signed(i_data_b)) ? i_data_a : i_data_b;
                calcoverflow = 1'b0;
            end
            4'd5: begin
                calcresult = i_data_a + i_data_b;
                calcoverflow = calcresult[DATA_WIDTH];
            end
            4'd6: begin
                calcresult = i_data_a - i_data_b;
                calcoverflow = (i_data_a < i_data_b);
            end
            4'd7: begin
                calcresult = i_data_a * i_data_b;
                calcoverflow = calcresult[DATA_WIDTH];
            end
            
            4'd8: begin
                calcresult = (i_data_a > i_data_b) ? i_data_a : i_data_b;
                calcoverflow = 1'b0;
            end
            

            4'd9: begin
                calcresult = (i_data_a < i_data_b) ? i_data_a : i_data_b;
                calcoverflow = 1'b0;
            end
            
            4'd10: begin
                calcresult = i_data_a & i_data_b;
                calcoverflow = 1'b0;
            end
            
            4'd11: begin
                calcresult = i_data_a | i_data_b;
                calcoverflow = 1'b0;
            end
            4'd12: begin
                calcresult = i_data_a ^ i_data_b;
                calcoverflow = 1'b0;
            end
            4'd13: begin
                calcresult = ~i_data_a;
                calcoverflow = 1'b0;
            end
            4'd14: begin
                for (i = 0; i < DATA_WIDTH; i = i + 1) begin
                    calcresult[DATA_WIDTH - 1 - i] = i_data_a[i];
                end
                calcoverflow = 1'b0;
            end
        endcase
    end

    always @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            o_data <= 32'b0;;
            o_overflow <= 1'b0;
            o_valid <= 1'b0;
        end else begin
            if (i_valid) begin
                o_data <= calcresult;
                o_overflow <= calcoverflow;
                o_valid <= 1'b1;
            end else begin
                o_valid <= 1'b0;
            end
        end
    end
    

    

endmodule