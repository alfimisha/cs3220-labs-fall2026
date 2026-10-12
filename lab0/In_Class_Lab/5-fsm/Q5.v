`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own
module fsm ( 
    input clk,    // Clocks are used in sequential circuits
    input reset,
    input seq,
    output detected );// seq detector 1101, once detected, output 1 for 1 clock cycle

    parameter S0 = 2'b00;
    parameter S1 = 2'b01;
    parameter S2 = 2'b10;
    parameter S3 = 2'b11;

    reg[1:0] state;
    reg [1:0] next_state;

    always @(*) begin
        case(state) 
            S0: next_state = (seq) ? S1 : S0;
            S1: next_state = (seq) ? S2 : S0;
            S2: next_state = (seq) ? S2 : S3;
            S3: next_state = (seq) ? S1 : S0;
        endcase
    end

    always @(posedge clk) begin
        if (reset) begin
            state <= 2'b0;
        end else begin
            state <= next_state;
        end
    end

    assign detected = (state == S3) && (seq == 1'b1);
    
endmodule