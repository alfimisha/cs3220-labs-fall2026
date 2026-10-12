 `include "define.vh" 


module FE_STAGE(
  input wire clk,
  input wire reset,
  input wire [`from_DE_to_FE_WIDTH-1:0] from_DE_to_FE,
  input wire [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,   
  input wire [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,   
  input wire [`from_WB_to_FE_WIDTH-1:0] from_WB_to_FE, 
  output wire [`FE_latch_WIDTH-1:0] FE_latch_out
);

  `UNUSED_VAR (from_MEM_to_FE)
  `UNUSED_VAR (from_WB_to_FE)

  // I-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] imem [`IMEMWORDS-1:0];
 
  initial begin
      $readmemh(`IDMEMINITFILE , imem);
  end

  // Display memory contents with verilator 
  /*
  always @(posedge clk) begin
    for (integer i=0 ; i<`IMEMWORDS ; i=i+1) begin
        $display("%h", imem[i]);
    end
  end
  */

  /* pipeline latch */ 
  reg [`FE_latch_WIDTH-1:0] FE_latch;  // FE latch 
  wire valid_FE;
   
  `UNUSED_VAR(valid_FE)
  reg [`DBITS-1:0] PC_FE_latch; // PC latch in the FE stage   // you could use a part of FE_latch as a PC latch as well 
  
  reg [`DBITS-1:0] inst_count_FE; /* for debugging purpose */ 
  
  wire [`DBITS-1:0] inst_count_AGEX; /* for debugging purpose. resent the instruction counter */ 

  wire [`INSTBITS-1:0] inst_FE;  // instruction value in the FE stage 
  wire [`DBITS-1:0] pcplus_FE;  // pc plus value in the FE stage 
  wire stall_pipe_FE; // signal to indicate when a front-end needs to be stall

  // TODO Task 3: connect BHR and PHT to the pipeline.
  wire [`PHT_BITS-1: 0] pht_idx_fe; // the xor thingy. btw read wants a pred right now. 
  wire pht_prediction_FE; //taken or nah
  wire [`BHR_WIDTH-1:0] bhr_fe;

  

  //stuff we need from agex//
  wire [`PHT_BITS-1:0] pht_idx_agex; //when we write we need the branch pc which was sent in the pipeline to agex
  //gotta use that to update. 
  wire branch_resolved; //has the branch finished do we know the otucome
  wire branch_taken; //was the branch taken or not

  // PHT_USE_BHR 1 = gshare (pc xor history), 0 = plain pc indexed
  assign pht_idx_fe = PC_FE_latch[`PHT_BITS+1:2] ^ (`PHT_USE_BHR ? bhr_fe : 0);

  BHR bhr(
    .clk(clk), 
    .reset(reset), 
    .wr_ena(branch_resolved), 
    .wr_data(branch_taken), 
    .out(bhr_fe)
  );
  // PHT_MODULE picks PHT (2 bit) or PHT_1BIT (task 8), same ports so same wires
  `PHT_MODULE pht(
    .clk(clk), 
    .reset(reset), 
    .rd_sel(pht_idx_fe), //for reading from here 
    .out(pht_prediction_FE), 
    .wr_sel(pht_idx_agex), 
    .wr_data(branch_taken), //this is actually taken or not idk weird signal naming 
    .wr_ena(branch_resolved)
  );
  wire btb_hit;
  wire [`DBITS-1:0] target_btb_pred;
  wire is_btb_valid;
  
  assign btb_hit = is_btb_valid && pht_prediction_FE;

  // the next PC we are guessing for this instr, agex checks it later
  wire [`DBITS-1:0] pred_pc_FE;
  assign pred_pc_FE = btb_hit ? target_btb_pred : pcplus_FE;

  BTB btb(
    .clk(clk), 
    .reset(reset), 
    .rd_ena(1), 
    .rd_sel(PC_FE_latch), 
    .out_data(target_btb_pred), 
    .outs_valid(is_btb_valid), 
    .wr_ena(branch_resolved), 
    .wr_sel(PC_AGEX), 
    .wr_data(btb_target_AGEX)
  );
  
  wire [`FE_latch_WIDTH-1:0] FE_latch_contents;  // the signals that will be FE latch contents 
  
  // reading instruction from imem 
  assign inst_FE = imem[PC_FE_latch[`IMEMADDRBITS-1:`IMEMWORDBITS]];  // this code works. imem is stored 4B together 
  
  // wire to send the FE latch contents to the DE stage 
  assign FE_latch_out = FE_latch; 
 

  // This is the value of "incremented PC", computed in the FE stage
  assign pcplus_FE = PC_FE_latch + `INSTSIZE;
   
   // the order of latch contents should be matched in the decode stage when we extract the contents. 
  assign FE_latch_contents = {
                                valid_FE, 
                                inst_FE, 
                                PC_FE_latch, 
                                pcplus_FE, // please feel free to add more signals such as valid bits etc. 
                                inst_count_FE, 
                                pht_idx_fe, 
                                pht_prediction_FE,
                                pred_pc_FE
                                // if you add more bits here, please increase the width of latch in VX_define.vh 
                                };
                            




  // **TODO: Complete the rest of the pipeline 
  //assign stall_pipe_FE = 1;   // you need
  wire br_mispred_AGEX;  
  wire [`DBITS-1:0] br_target_AGEX;  
  wire [`DBITS-1:0] PC_AGEX;
  wire [`DBITS-1:0] btb_target_AGEX;

  assign {
    stall_pipe_FE
  } = from_DE_to_FE[0]; 

  assign {
    br_mispred_AGEX,
    br_target_AGEX,
    branch_resolved,
    branch_taken,
    pht_idx_agex, 
    PC_AGEX,
    btb_target_AGEX
  } = from_AGEX_to_FE;

  always @ (posedge clk) begin
  // Task 5: select the predicted next PC.
   if (reset) begin 
      PC_FE_latch <= `STARTPC;
      inst_count_FE <= 1;  /* inst_count starts from 1 for easy human reading. 1st fetch instructions can have 1 */ 
      end 
    else if (br_mispred_AGEX)
      PC_FE_latch <= br_target_AGEX;
    else if (stall_pipe_FE) 
      PC_FE_latch <= PC_FE_latch; 
    else if (btb_hit) begin
      PC_FE_latch <= target_btb_pred;
      inst_count_FE <= inst_count_FE + 1; 
    end else begin 
      PC_FE_latch <= pcplus_FE;
      inst_count_FE <= inst_count_FE + 1; 
    end 
  end
  

  always @ (posedge clk) begin
    if (reset) begin 
      FE_latch <= '0; 
    end else begin 
      if (br_mispred_AGEX)
        FE_latch <= '0;
      else if (stall_pipe_FE)
        FE_latch <= FE_latch; 
      else 
        FE_latch <= FE_latch_contents; 
    end  
  end



endmodule

// Task 1: Branch history pattern logic
module BHR (
  input wire clk,
  input wire reset,
  input wire wr_ena,
  input wire [`DBITS-1:0] wr_data,
  output reg [`BHR_WIDTH-1:0] out
);

always @(posedge clk) begin
  if (reset) begin
    out <= {`BHR_WIDTH{1'b0}};
  end else if (wr_ena) begin
    out <= {out[`BHR_WIDTH-2:0], wr_data[0]};
  end
end

endmodule

// Task 2: Prediction History table register pattern
//You should define the counter in each PHT pattern
module PHT (
  input wire clk,
  input wire reset,
  input wire [`PHT_BITS-1:0] rd_sel,
  output wire out,
  input wire [`PHT_BITS-1:0] wr_sel,
  input wire wr_data,
  input wire wr_ena
);

integer i;
reg [1:0] PHT [0:(1 << `PHT_BITS)-1];

always @(posedge clk) begin
  if (reset) begin
    for (i = 0; i < (1 << `PHT_BITS); i = i + 1) begin
      PHT[i] <= 2'b01;
    end
  end else if (wr_ena) begin
    if (wr_data == 1'b1) begin
      if (PHT[wr_sel] != 2'b11) begin
        PHT[wr_sel] <= PHT[wr_sel] + 1'b1;
      end
    end else begin
      if (PHT[wr_sel] != 2'b00) begin
        PHT[wr_sel] <= PHT[wr_sel] - 1'b1;
      end
    end
  end
end


assign out = PHT[rd_sel][1];

endmodule
// Task 4: Branch Target Buffer
//Hint: what is the signal need for BHT update? ya

module BTB (
  input wire clk,
  input wire reset,
  input wire rd_ena,
  input wire [`DBITS-1:0] rd_sel,
  output wire [`DBITS-1:0] out_data,
  output wire outs_valid,
  input wire wr_ena,
  input wire [`DBITS-1:0] wr_sel,
  input wire [`DBITS-1:0] wr_data
); 
//TODO: complete the BTB logic and its update


reg [31:0] btb_target [0:(1 << `BTB_BITS)-1];
reg [`BTB_TAG_BITS-1:0] btb_tag [0:(1 << `BTB_BITS)-1];
reg btb_valid [0:(1 << `BTB_BITS)-1];
wire [`BTB_BITS-1:0]  rd_index = rd_sel[`BTB_BITS+1:2];
wire [`BTB_TAG_BITS-1:0] rd_tag   = rd_sel[31:`BTB_BITS+2];

wire [`BTB_BITS-1:0]  wr_index = wr_sel[`BTB_BITS+1:2];
wire [`BTB_TAG_BITS-1:0] wr_tag   = wr_sel[31:`BTB_BITS+2];

// read is combinational: hit shows up the same cycle rd_sel is driven
assign outs_valid = rd_ena && btb_valid[rd_index] && (btb_tag[rd_index] == rd_tag);
assign out_data   = outs_valid ? btb_target[rd_index] : 0;

always @(posedge clk) begin
  if (reset) begin
    for (int i = 0; i < (1 << `BTB_BITS); i= i + 1) begin
      btb_target[i] <= 0;
      btb_tag[i] <= 0;
      btb_valid[i] <= 0;
    end
  end else begin
    if (wr_ena) begin
      btb_target[wr_index] <= wr_data;
      btb_tag[wr_index] <= wr_tag;
      btb_valid[wr_index]  <= 1;
    end
  end
end

endmodule

// pht with teh one bit saturating counter instead of the 2bit one. 
module PHT_1BIT (
  input wire clk,
  input wire reset,
  input wire [`PHT_BITS-1:0] rd_sel,
  output wire out,
  input wire [`PHT_BITS-1:0] wr_sel,
  input wire wr_data,
  input wire wr_ena
);

integer i;
reg PHT [0:(1 << `PHT_BITS)-1];

always @(posedge clk) begin
  if (reset) begin
    for (i = 0; i < (1 << `PHT_BITS); i = i + 1) begin
      PHT[i] <= 1'b0;
    end
  end else if (wr_ena) begin
    if (wr_data == 1'b1) begin
      if (PHT[wr_sel] != 1'b1) begin
        PHT[wr_sel] <= PHT[wr_sel] + 1'b1;
      end
    end else begin
      if (PHT[wr_sel] != 1'b0) begin
        PHT[wr_sel] <= PHT[wr_sel] - 1'b1;
      end
    end
  end
  
end
assign out = PHT[rd_sel];
endmodule
