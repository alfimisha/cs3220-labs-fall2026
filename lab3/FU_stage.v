`include "define.vh" 

module FU_STAGE(
  input wire                              clk,
  input wire                              reset,
  input wire [`from_DE_to_FU_WIDTH-1:0]    from_DE_to_FU,   
  output wire [`from_FU_to_DE_WIDTH-1:0]   from_FU_to_DE
);
  
  // TODO(in-class): Instantiate external_alu and wire the DE↔FU buses.
  //
  // Suggested steps (match field order with de_stage.v; check define.vh widths):
  //   1) Unpack from_DE_to_FU into wires: OP1, OP2, ALUOP, CSR_ALU_IN
  //      (widths: `ALUDATABITS, `ALUOPBITS, `ALUCSRINBITS).
  //   2) Instantiate external_alu (see port list in external_alu_wrapper.v /
  //      the README datasheet). Prefer named ports: .OP1(...), .CSR_ALU_IN(...), etc.
  //      Pass clk and reset through; do NOT edit the ALU itself.
  //   3) Pack the ALU outputs OP3 + CSR_ALU_OUT into from_FU_to_DE
  //      (widths: `ALUDATABITS, `ALUCSROUTBITS).
  //
  // Hint: this file is mostly wiring; the handshake *control* lives in de_stage.v.
  //    input [`ALUDATABITS-1:0] OP1,
    //input [`ALUDATABITS-1:0] OP2,
   //output [`ALUDATABITS-1:0] OP3,
    //input [`ALUOPBITS-1:0] ALUOP,
    //output [`ALUCSROUTBITS-1:0] CSR_ALU_OUT,
    //input [`ALUCSRINBITS-1:0] CSR_ALU_IN
  wire [`ALUDATABITS-1: 0] OP1_FU;
  wire [`ALUDATABITS-1: 0] OP2_FU;
  wire [`ALUOPBITS-1:0] ALUOP_FU;
  wire [`ALUCSRINBITS - 1:0] CSR_ALU_IN_FU;
  wire [`ALUDATABITS - 1:0] OP3_FU;
  wire [`ALUCSROUTBITS - 1:0] CSR_ALU_OUT_FU;

  assign { OP1_FU, 
    OP2_FU, 
    ALUOP_FU, 
    CSR_ALU_IN_FU 
  } = from_DE_to_FU;

  external_alu alu (
    .clk(clk), 
    .rst(reset), 
    .OP1(OP1_FU), 
    .OP2(OP2_FU), 
    .OP3(OP3_FU), 
    .ALUOP(ALUOP_FU), 
    .CSR_ALU_OUT(CSR_ALU_OUT_FU), 
    .CSR_ALU_IN(CSR_ALU_IN_FU)
  );

  assign from_FU_to_DE = {
    OP3_FU, 
    CSR_ALU_OUT_FU
  };
endmodule
