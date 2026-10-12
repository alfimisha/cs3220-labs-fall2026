`timescale 1 ns/10 ps  // time-unit = 1 ns, precision = 10 ps

// dummy implementation, please replace with your own

module module_hierarchy ( 
    input [31:0] a,
    input [31:0] b,
    output [31:0] sum
);//

wire [15:0] summsb;
wire coutmsb;
wire [15:0] sumlsb;
wire coutlsb;

add16 adderlsb (
    .a(a[15:0]), 
    .b(b[15:0]), 
    .cin(0), 
    .sum(sumlsb),  
    .cout(coutlsb)
);
add16 addermsb (
    .a(a[31:16]), 
    .b(b[31:16]), 
    .cin(coutlsb),
    .sum(summsb), 
    .cout(coutmsb)
);
assign sum = {summsb, sumlsb};

endmodule

module add1 ( input a, input b, input cin,   output sum, output cout );
    assign sum = a ^ b ^ cin;
    assign cout = (a & b) | ( a & cin) | (b & cin);
endmodule