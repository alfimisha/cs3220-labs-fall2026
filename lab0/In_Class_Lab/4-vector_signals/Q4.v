`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own
module vector_signals ( 
    input [2:0] a,
    input [2:0] b,
    output reg [2:0] out_or_bitwise,
    output reg out_or_logical,
    output reg [5:0] out_not
);

always @(*) begin
    out_or_bitwise = a | b;
    out_or_logical = a || b;
    out_not = {~b, ~a};
end

endmodule