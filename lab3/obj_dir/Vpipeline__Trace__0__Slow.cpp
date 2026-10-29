// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declBus(c+60,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+61,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+66,"DE_latch_out", false,-1, 248,0);
    tracep->declArray(c+74,"AGEX_latch_out", false,-1, 142,0);
    tracep->declArray(c+79,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+291,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+84,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+342,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+343,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+87,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+342,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+88,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+344,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+344,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+343,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+4,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+49,"from_FU_to_DE", false,-1, 34,0);
    tracep->pushNamePrefix("my_AGEX_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declBus(c+344,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+344,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+66,"from_DE_latch", false,-1, 248,0);
    tracep->declArray(c+74,"AGEX_latch_out", false,-1, 142,0);
    tracep->declArray(c+84,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+87,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+74,"AGEX_latch", false,-1, 142,0);
    tracep->declArray(c+90,"AGEX_latch_contents", false,-1, 142,0);
    tracep->declBit(c+95,"valid_AGEX", false,-1);
    tracep->declBus(c+96,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+97,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+98,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+99,"pcnext_AGEX", false,-1, 31,0);
    tracep->declBus(c+100,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+101,"br_cond_AGEX", false,-1);
    tracep->declBit(c+102,"is_br_AGEX", false,-1);
    tracep->declBit(c+103,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+104,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+105,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+106,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+107,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+108,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+109,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+110,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+111,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+112,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+113,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+87,"br_mispred_AGEX", false,-1);
    tracep->declBit(c+114,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+115,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+116,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declArray(c+61,"from_FE_latch", false,-1, 136,0);
    tracep->declBus(c+87,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+342,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+88,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+291,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+49,"from_FU_to_DE", false,-1, 34,0);
    tracep->declArray(c+4,"from_DE_to_FU", false,-1, 70,0);
    tracep->declArray(c+66,"DE_latch_out", false,-1, 248,0);
    tracep->declArray(c+66,"DE_latch", false,-1, 248,0);
    tracep->declBit(c+117,"valid_DE", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,"reg_file", true,(i+0), 31,0);
    }
    tracep->declBus(c+118,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+119,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+120,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+121,"pcnext_DE", false,-1, 31,0);
    tracep->declBus(c+122,"pc_xor_bhr_DE", false,-1, 7,0);
    tracep->declArray(c+51,"DE_latch_contents", false,-1, 248,0);
    tracep->declBus(c+123,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+124,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+125,"op_DE", false,-1, 6,0);
    tracep->declBus(c+126,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+127,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+128,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+129,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBit(c+130,"wr_reg_WB", false,-1);
    tracep->declBus(c+131,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+132,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+291,"pipeline_stall_DE", false,-1);
    tracep->declBus(c+133,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+134,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+135,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+298,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+299,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+136,"is_br_DE", false,-1);
    tracep->declBit(c+137,"is_jmp_DE", false,-1);
    tracep->declBit(c+138,"rd_mem_DE", false,-1);
    tracep->declBit(c+139,"wr_mem_DE", false,-1);
    tracep->declBit(c+140,"wr_reg_DE", false,-1);
    tracep->declBit(c+141,"use_rs1_DE", false,-1);
    tracep->declBit(c+142,"use_rs2_DE", false,-1);
    tracep->declBus(c+300,"OP3_from_FU", false,-1, 31,0);
    tracep->declBus(c+292,"CSR_ALU_OUT_from_FU", false,-1, 2,0);
    tracep->declBus(c+39,"OP1_DE", false,-1, 31,0);
    tracep->declBus(c+40,"OP2_DE", false,-1, 31,0);
    tracep->declBus(c+41,"ALUOP_DE", false,-1, 3,0);
    tracep->declBus(c+42,"CSR_ALU_IN_DE", false,-1, 2,0);
    tracep->declBit(c+143,"is_load_op1_DE", false,-1);
    tracep->declBit(c+144,"is_load_op2_DE", false,-1);
    tracep->declBit(c+145,"is_store_op3_DE", false,-1);
    tracep->declBit(c+301,"alu_stall_DE", false,-1);
    tracep->declBus(c+146,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+147,"has_data_hazards", false,-1);
    tracep->declBit(c+87,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+59,"rs2_val_final_DE", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declBus(c+291,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+84,"from_AGEX_to_FE", false,-1, 74,0);
    tracep->declBus(c+342,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+343,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+61,"FE_latch_out", false,-1, 136,0);
    tracep->declArray(c+61,"FE_latch", false,-1, 136,0);
    tracep->declBit(c+148,"valid_FE", false,-1);
    tracep->declBus(c+149,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+150,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+151,"pcplus_FE", false,-1, 31,0);
    tracep->declBus(c+152,"pcnext_FE", false,-1, 31,0);
    tracep->declBit(c+291,"stall_pipe_FE", false,-1);
    tracep->declArray(c+153,"FE_latch_contents", false,-1, 136,0);
    tracep->declBit(c+87,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+113,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+114,"is_brjmp_AGEX", false,-1);
    tracep->declBit(c+115,"do_brjmp_AGEX", false,-1);
    tracep->declBus(c+116,"pc_xor_bhr_AGEX", false,-1, 7,0);
    tracep->declBus(c+97,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+158,"BHR", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+159+i*1,"BTB_TAG", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+175+i*1,"BTB_VALID", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+191+i*1,"BTB_TARGET", true,(i+0), 31,0);
    }
    tracep->declBus(c+207,"pc_xor_bhr_FE", false,-1, 7,0);
    tracep->declBit(c+208,"pht_pred", false,-1);
    tracep->declBus(c+209,"btb_tag_fetched", false,-1, 25,0);
    tracep->declBit(c+210,"btb_valid_fetched", false,-1);
    tracep->declBus(c+211,"btb_target_fetched", false,-1, 31,0);
    tracep->declBus(c+212,"num_brjmp", false,-1, 31,0);
    tracep->declBus(c+213,"mis_pred", false,-1, 31,0);
    tracep->declBus(c+214,"correct_pred", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+3,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_FU_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declArray(c+4,"from_DE_to_FU", false,-1, 70,0);
    tracep->declQuad(c+49,"from_FU_to_DE", false,-1, 34,0);
    tracep->declBus(c+39,"OP1_FU", false,-1, 31,0);
    tracep->declBus(c+40,"OP2_FU", false,-1, 31,0);
    tracep->declBus(c+41,"ALUOP_FU", false,-1, 3,0);
    tracep->declBus(c+42,"CSR_ALU_IN_FU", false,-1, 2,0);
    tracep->declBus(c+300,"OP3_FU", false,-1, 31,0);
    tracep->declBus(c+292,"CSR_ALU_OUT_FU", false,-1, 2,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"rst", false,-1);
    tracep->declBus(c+39,"OP1", false,-1, 31,0);
    tracep->declBus(c+40,"OP2", false,-1, 31,0);
    tracep->declBus(c+300,"OP3", false,-1, 31,0);
    tracep->declBus(c+41,"ALUOP", false,-1, 3,0);
    tracep->declBus(c+292,"CSR_ALU_OUT", false,-1, 2,0);
    tracep->declBus(c+42,"CSR_ALU_IN", false,-1, 2,0);
    tracep->declBit(c+215,"div_input_a_ack", false,-1);
    tracep->declBit(c+216,"div_input_b_ack", false,-1);
    tracep->declBit(c+217,"mult_input_a_ack", false,-1);
    tracep->declBit(c+218,"mult_input_b_ack", false,-1);
    tracep->declBit(c+43,"div_output_z_ack", false,-1);
    tracep->declBit(c+44,"mult_output_z_ack", false,-1);
    tracep->declBit(c+45,"div_input_a_stb", false,-1);
    tracep->declBit(c+46,"div_input_b_stb", false,-1);
    tracep->declBit(c+47,"mult_input_a_stb", false,-1);
    tracep->declBit(c+48,"mult_input_b_stb", false,-1);
    tracep->declBit(c+219,"div_output_z_stb", false,-1);
    tracep->declBit(c+220,"mult_output_z_stb", false,-1);
    tracep->declBit(c+293,"ALU_ready_1", false,-1);
    tracep->declBit(c+294,"ALU_ready_2", false,-1);
    tracep->declBit(c+295,"ALU_resutls_valid", false,-1);
    tracep->declBus(c+221,"div_output_z", false,-1, 31,0);
    tracep->declBus(c+222,"mult_output_z", false,-1, 31,0);
    tracep->pushNamePrefix("div0 ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"rst", false,-1);
    tracep->declBus(c+39,"input_a", false,-1, 31,0);
    tracep->declBit(c+45,"input_a_stb", false,-1);
    tracep->declBit(c+215,"input_a_ack", false,-1);
    tracep->declBus(c+40,"input_b", false,-1, 31,0);
    tracep->declBit(c+46,"input_b_stb", false,-1);
    tracep->declBit(c+216,"input_b_ack", false,-1);
    tracep->declBus(c+221,"output_z", false,-1, 31,0);
    tracep->declBit(c+219,"output_z_stb", false,-1);
    tracep->declBit(c+43,"output_z_ack", false,-1);
    tracep->declBit(c+219,"s_output_z_stb", false,-1);
    tracep->declBus(c+221,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+215,"s_input_a_ack", false,-1);
    tracep->declBit(c+216,"s_input_b_ack", false,-1);
    tracep->declBus(c+223,"state", false,-1, 3,0);
    tracep->declBus(c+344,"get_a", false,-1, 3,0);
    tracep->declBus(c+345,"get_b", false,-1, 3,0);
    tracep->declBus(c+346,"unpack", false,-1, 3,0);
    tracep->declBus(c+347,"special_cases", false,-1, 3,0);
    tracep->declBus(c+348,"normalise_a", false,-1, 3,0);
    tracep->declBus(c+349,"normalise_b", false,-1, 3,0);
    tracep->declBus(c+350,"divide_0", false,-1, 3,0);
    tracep->declBus(c+351,"divide_1", false,-1, 3,0);
    tracep->declBus(c+352,"divide_2", false,-1, 3,0);
    tracep->declBus(c+353,"divide_3", false,-1, 3,0);
    tracep->declBus(c+354,"normalise_1", false,-1, 3,0);
    tracep->declBus(c+355,"normalise_2", false,-1, 3,0);
    tracep->declBus(c+356,"round", false,-1, 3,0);
    tracep->declBus(c+357,"pack", false,-1, 3,0);
    tracep->declBus(c+358,"put_z", false,-1, 3,0);
    tracep->declBus(c+224,"a", false,-1, 31,0);
    tracep->declBus(c+225,"b", false,-1, 31,0);
    tracep->declBus(c+226,"z", false,-1, 31,0);
    tracep->declBus(c+227,"a_m", false,-1, 23,0);
    tracep->declBus(c+228,"b_m", false,-1, 23,0);
    tracep->declBus(c+229,"z_m", false,-1, 23,0);
    tracep->declBus(c+230,"a_e", false,-1, 9,0);
    tracep->declBus(c+231,"b_e", false,-1, 9,0);
    tracep->declBus(c+232,"z_e", false,-1, 9,0);
    tracep->declBit(c+233,"a_s", false,-1);
    tracep->declBit(c+234,"b_s", false,-1);
    tracep->declBit(c+235,"z_s", false,-1);
    tracep->declBit(c+236,"guard", false,-1);
    tracep->declBit(c+237,"round_bit", false,-1);
    tracep->declBit(c+238,"sticky", false,-1);
    tracep->declQuad(c+239,"quotient", false,-1, 50,0);
    tracep->declQuad(c+241,"divisor", false,-1, 50,0);
    tracep->declQuad(c+243,"dividend", false,-1, 50,0);
    tracep->declQuad(c+245,"remainder", false,-1, 50,0);
    tracep->declBus(c+247,"count", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mult0 ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"rst", false,-1);
    tracep->declBus(c+39,"input_a", false,-1, 31,0);
    tracep->declBit(c+47,"input_a_stb", false,-1);
    tracep->declBit(c+217,"input_a_ack", false,-1);
    tracep->declBus(c+40,"input_b", false,-1, 31,0);
    tracep->declBit(c+48,"input_b_stb", false,-1);
    tracep->declBit(c+218,"input_b_ack", false,-1);
    tracep->declBus(c+222,"output_z", false,-1, 31,0);
    tracep->declBit(c+220,"output_z_stb", false,-1);
    tracep->declBit(c+44,"output_z_ack", false,-1);
    tracep->declBit(c+220,"s_output_z_stb", false,-1);
    tracep->declBus(c+222,"s_output_z", false,-1, 31,0);
    tracep->declBit(c+217,"s_input_a_ack", false,-1);
    tracep->declBit(c+218,"s_input_b_ack", false,-1);
    tracep->declBus(c+248,"state", false,-1, 3,0);
    tracep->declBus(c+344,"get_a", false,-1, 3,0);
    tracep->declBus(c+345,"get_b", false,-1, 3,0);
    tracep->declBus(c+346,"unpack", false,-1, 3,0);
    tracep->declBus(c+347,"special_cases", false,-1, 3,0);
    tracep->declBus(c+348,"normalise_a", false,-1, 3,0);
    tracep->declBus(c+349,"normalise_b", false,-1, 3,0);
    tracep->declBus(c+350,"multiply_0", false,-1, 3,0);
    tracep->declBus(c+351,"multiply_1", false,-1, 3,0);
    tracep->declBus(c+352,"normalise_1", false,-1, 3,0);
    tracep->declBus(c+353,"normalise_2", false,-1, 3,0);
    tracep->declBus(c+354,"round", false,-1, 3,0);
    tracep->declBus(c+355,"pack", false,-1, 3,0);
    tracep->declBus(c+356,"put_z", false,-1, 3,0);
    tracep->declBus(c+249,"a", false,-1, 31,0);
    tracep->declBus(c+250,"b", false,-1, 31,0);
    tracep->declBus(c+251,"z", false,-1, 31,0);
    tracep->declBus(c+252,"a_m", false,-1, 23,0);
    tracep->declBus(c+253,"b_m", false,-1, 23,0);
    tracep->declBus(c+254,"z_m", false,-1, 23,0);
    tracep->declBus(c+255,"a_e", false,-1, 9,0);
    tracep->declBus(c+256,"b_e", false,-1, 9,0);
    tracep->declBus(c+257,"z_e", false,-1, 9,0);
    tracep->declBit(c+258,"a_s", false,-1);
    tracep->declBit(c+259,"b_s", false,-1);
    tracep->declBit(c+260,"z_s", false,-1);
    tracep->declBit(c+261,"guard", false,-1);
    tracep->declBit(c+262,"round_bit", false,-1);
    tracep->declBit(c+263,"sticky", false,-1);
    tracep->declQuad(c+264,"product", false,-1, 47,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declBus(c+343,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+74,"from_AGEX_latch", false,-1, 142,0);
    tracep->declArray(c+79,"MEM_latch_out", false,-1, 140,0);
    tracep->declBus(c+342,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+342,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+344,"from_MEM_to_AGEX", false,-1, 3,0);
    tracep->declArray(c+79,"MEM_latch", false,-1, 140,0);
    tracep->declBit(c+266,"valid_MEM", false,-1);
    tracep->declArray(c+267,"MEM_latch_contents", false,-1, 140,0);
    tracep->declBus(c+272,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+273,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+274,"PC_MEM", false,-1, 31,0);
    tracep->declBus(c+275,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+276,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+277,"aluout_MEM", false,-1, 31,0);
    tracep->declBit(c+278,"wr_mem_MEM", false,-1);
    tracep->declBit(c+279,"rd_mem_MEM", false,-1);
    tracep->declBus(c+280,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+281,"wr_reg_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+296,"clk", false,-1);
    tracep->declBit(c+297,"reset", false,-1);
    tracep->declArray(c+79,"from_MEM_latch", false,-1, 140,0);
    tracep->declBus(c+342,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+88,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+344,"from_WB_to_AGEX", false,-1, 3,0);
    tracep->declBus(c+342,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+282,"valid_WB", false,-1);
    tracep->declBus(c+283,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+284,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+285,"op_I_WB", false,-1, 5,0);
    tracep->declBit(c+286,"wr_reg_WB", false,-1);
    tracep->declBus(c+287,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+288,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+289,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+290,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+302,"[0]", false,-1, 31,0);
    tracep->declBus(c+303,"[1]", false,-1, 31,0);
    tracep->declBus(c+304,"[2]", false,-1, 31,0);
    tracep->declBus(c+305,"[3]", false,-1, 31,0);
    tracep->declBus(c+306,"[4]", false,-1, 31,0);
    tracep->declBus(c+307,"[5]", false,-1, 31,0);
    tracep->declBus(c+308,"[6]", false,-1, 31,0);
    tracep->declBus(c+309,"[7]", false,-1, 31,0);
    tracep->declBus(c+310,"[8]", false,-1, 31,0);
    tracep->declBus(c+311,"[9]", false,-1, 31,0);
    tracep->declBus(c+312,"[10]", false,-1, 31,0);
    tracep->declBus(c+313,"[11]", false,-1, 31,0);
    tracep->declBus(c+314,"[12]", false,-1, 31,0);
    tracep->declBus(c+315,"[13]", false,-1, 31,0);
    tracep->declBus(c+316,"[14]", false,-1, 31,0);
    tracep->declBus(c+317,"[15]", false,-1, 31,0);
    tracep->declBus(c+318,"[16]", false,-1, 31,0);
    tracep->declBus(c+319,"[17]", false,-1, 31,0);
    tracep->declBus(c+320,"[18]", false,-1, 31,0);
    tracep->declBus(c+321,"[19]", false,-1, 31,0);
    tracep->declBus(c+322,"[20]", false,-1, 31,0);
    tracep->declBus(c+323,"[21]", false,-1, 31,0);
    tracep->declBus(c+324,"[22]", false,-1, 31,0);
    tracep->declBus(c+325,"[23]", false,-1, 31,0);
    tracep->declBus(c+326,"[24]", false,-1, 31,0);
    tracep->declBus(c+327,"[25]", false,-1, 31,0);
    tracep->declBus(c+328,"[26]", false,-1, 31,0);
    tracep->declBus(c+329,"[27]", false,-1, 31,0);
    tracep->declBus(c+330,"[28]", false,-1, 31,0);
    tracep->declBus(c+331,"[29]", false,-1, 31,0);
    tracep->declBus(c+332,"[30]", false,-1, 31,0);
    tracep->declBus(c+333,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+334,"[0]", false,-1, 31,0);
    tracep->declBus(c+335,"[1]", false,-1, 31,0);
    tracep->declBus(c+336,"[2]", false,-1, 31,0);
    tracep->declBus(c+337,"[3]", false,-1, 31,0);
    tracep->declBus(c+338,"[4]", false,-1, 31,0);
    tracep->declBus(c+339,"[5]", false,-1, 31,0);
    tracep->declBus(c+340,"[6]", false,-1, 31,0);
    tracep->declBus(c+341,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_top\n"); );
    // Body
    Vpipeline___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("pipeline ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_WB_stage ");
    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipeline___024root__trace_register(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpipeline___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpipeline___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpipeline___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_top_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_ha2403601__0;
    VlWide<3>/*95:0*/ __Vtemp_h20b525a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h05d1d340__0;
    VlWide<8>/*255:0*/ __Vtemp_h046e5368__0;
    VlWide<3>/*95:0*/ __Vtemp_ha364d04a__0;
    VlWide<5>/*159:0*/ __Vtemp_h880d0ce5__0;
    VlWide<5>/*159:0*/ __Vtemp_h858fe03f__0;
    VlWide<5>/*159:0*/ __Vtemp_h83e5661c__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
    __Vtemp_ha2403601__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1_DE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2_DE)))) 
                                 << 7U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE) 
                                            << 3U) 
                                           | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE)));
    __Vtemp_ha2403601__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1_DE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2_DE)))) 
                                 >> 0x19U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1_DE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2_DE))) 
                                                       >> 0x20U)) 
                                              << 7U));
    __Vtemp_ha2403601__0[2U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1_DE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2_DE))) 
                                         >> 0x20U)) 
                                >> 0x19U);
    bufp->fullWData(oldp+4,(__Vtemp_ha2403601__0),71);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+36,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+37,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+39,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1_DE),32);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2_DE),32);
    bufp->fullCData(oldp+41,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE),4);
    bufp->fullCData(oldp+42,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE),3);
    bufp->fullBit(oldp+43,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE)) 
                            & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE))));
    bufp->fullBit(oldp+44,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE)) 
                            & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE))));
    bufp->fullBit(oldp+45,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE)) 
                            & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                               >> 1U))));
    bufp->fullBit(oldp+46,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE)) 
                            & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                               >> 2U))));
    bufp->fullBit(oldp+47,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE)) 
                            & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                               >> 1U))));
    bufp->fullBit(oldp+48,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE)) 
                            & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN_DE) 
                               >> 2U))));
    bufp->fullQData(oldp+49,((((QData)((IData)(((1U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE))
                                                 ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                                 : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z))) 
                               << 3U) | (QData)((IData)(
                                                        (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_2) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_1))))))),35);
    __Vtemp_h20b525a5__0[0U] = ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? (((- (IData)((1U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    >> 7U)))) 
                                     << 0xbU) | (0x7ffU 
                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1cU))))
                                 : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 7U)))) 
                                         << 0xbU) | 
                                        ((0x7e0U & 
                                          (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 4U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0xfU))))
                                     : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 7U)))) 
                                             << 0xcU) 
                                            | ((0x800U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 4U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0xfU)))))
                                         : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (0xfffff000U 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 0x18U) 
                                                   | (0xfff000U 
                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 8U))))
                                             : ((2U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 >> 7U)))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 8U)) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x11U)) 
                                                       | (0x7feU 
                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              << 4U) 
                                                             | (0xeU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU)))))))
                                                 : 0U)))));
    __Vtemp_h20b525a5__0[1U] = (IData)((((QData)((IData)(
                                                         vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                         [
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x17U))])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x1bU 
                                                            == 
                                                            (0x1fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 4U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU))))
                                                            ? 
                                                           ((1U 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE))
                                                             ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                                             : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z)
                                                            : 
                                                           ((0x1aU 
                                                             == 
                                                             (0x1fU 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 4U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x1cU))))
                                                             ? 
                                                            (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid) 
                                                              << 2U) 
                                                             | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_2) 
                                                                 << 1U) 
                                                                | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_1)))
                                                             : 
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                            [
                                                            (0x1fU 
                                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                 << 4U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                   >> 0x1cU)))]))))));
    __Vtemp_h20b525a5__0[2U] = (IData)(((((QData)((IData)(
                                                          vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                          [
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x17U))])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((0x1bU 
                                                             == 
                                                             (0x1fU 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 4U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x1cU))))
                                                             ? 
                                                            ((1U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE))
                                                              ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                                              : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z)
                                                             : 
                                                            ((0x1aU 
                                                              == 
                                                              (0x1fU 
                                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   << 4U) 
                                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x1cU))))
                                                              ? 
                                                             (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid) 
                                                               << 2U) 
                                                              | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_2) 
                                                                  << 1U) 
                                                                 | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_1)))
                                                              : 
                                                             vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                             [
                                                             (0x1fU 
                                                              & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  << 4U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x1cU)))]))))) 
                                        >> 0x20U));
    __Vtemp_h05d1d340__0[0U] = ((__Vtemp_h20b525a5__0[0U] 
                                 << 0x12U) | ((((0x1cU 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                | ((0x1dU 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1eU 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((0x1fU 
                                                          == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x20U 
                                                             == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | (0x21U 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                               << 0x11U) 
                                              | ((((0x19U 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1aU 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | (0x1bU 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x10U) 
                                                 | (((0x17U 
                                                      == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     << 0xfU) 
                                                    | (((0x18U 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                           << 0xdU) 
                                                          | ((0x1f00U 
                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 7U)) 
                                                             | (0xffU 
                                                                & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))))))));
    __Vtemp_h046e5368__0[0U] = __Vtemp_h05d1d340__0[0U];
    __Vtemp_h046e5368__0[1U] = ((__Vtemp_h20b525a5__0[0U] 
                                 >> 0xeU) | (__Vtemp_h20b525a5__0[1U] 
                                             << 0x12U));
    __Vtemp_h046e5368__0[2U] = ((__Vtemp_h20b525a5__0[1U] 
                                 >> 0xeU) | (__Vtemp_h20b525a5__0[2U] 
                                             << 0x12U));
    __Vtemp_h046e5368__0[3U] = ((0xff000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x12U) | (__Vtemp_h20b525a5__0[2U] 
                                                 >> 0xeU)));
    __Vtemp_h046e5368__0[4U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                    >> 0x10U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                     << 0x10U)));
    __Vtemp_h046e5368__0[5U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    >> 0x10U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                     << 0x10U)));
    __Vtemp_h046e5368__0[6U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xff000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_h046e5368__0[7U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               << 0x10U)) 
                                 | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x10U)) | (0x1000000U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x10U)));
    bufp->fullWData(oldp+51,(__Vtemp_h046e5368__0),249);
    bufp->fullIData(oldp+59,(((0x1bU == (0x1fU & ((
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 4U) 
                                                  | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x1cU))))
                               ? ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE))
                                   ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                   : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z)
                               : ((0x1aU == (0x1fU 
                                             & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU))))
                                   ? (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid) 
                                       << 2U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_2) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_1)))
                                   : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                  [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x1cU)))]))),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),137);
    bufp->fullWData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),249);
    bufp->fullWData(oldp+74,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),143);
    bufp->fullWData(oldp+79,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),141);
    __Vtemp_ha364d04a__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                         << 0x29U) 
                                        | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                  << 8U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                    >> 0x18U))))))));
    __Vtemp_ha364d04a__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                 << 0xaU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                                       << 0x29U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                                >> 0x18U))))))) 
                                                     >> 0x20U)));
    __Vtemp_ha364d04a__0[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                                 << 0xaU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                             >> 0x16U));
    bufp->fullWData(oldp+84,(__Vtemp_ha364d04a__0),75);
    bufp->fullBit(oldp+87,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+88,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    __Vtemp_h880d0ce5__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 8U)));
    __Vtemp_h880d0ce5__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h880d0ce5__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 0x16U) | (0x3fc000U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xaU))) 
                                | ((0x3f00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0xaU)) 
                                   | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                               >> 0x20U)) 
                                      >> 0x18U)));
    __Vtemp_h880d0ce5__0[3U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0xaU)) 
                                | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                    << 0x16U) | (0x3fc000U 
                                                 & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    >> 0xaU))));
    __Vtemp_h880d0ce5__0[4U] = ((0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xaU)) 
                                | (0x4000U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 0xaU)));
    bufp->fullWData(oldp+90,(__Vtemp_h880d0ce5__0),143);
    bufp->fullBit(oldp+95,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  >> 0x18U))));
    bufp->fullIData(oldp+96,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+97,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+98,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+99,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x18U))),32);
    bufp->fullCData(oldp+100,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U))),6);
    bufp->fullBit(oldp+101,(((0x1cU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x12U)))
                              ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x12U)) 
                                 == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x12U)))
                              : ((0x1dU == (0x3fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))
                                  ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x12U)) 
                                     != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          << 0xeU) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x12U)))
                                  : ((0x1eU == (0x3fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x12U)))
                                      ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h047d73e2__0)
                                      : ((0x1fU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))
                                          ? VL_GTES_III(32, 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          << 0xeU) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            >> 0x12U)), 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          << 0xeU) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                            >> 0x12U)))
                                          : ((0x20U 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x12U)))
                                              ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_h048118d3__0)
                                              : (IData)(
                                                        ((0x840000U 
                                                          == 
                                                          (0xfc0000U 
                                                           & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                         & (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              << 0xeU) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                >> 0x12U)) 
                                                            >= 
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                              << 0xeU) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                                >> 0x12U))))))))))));
    bufp->fullBit(oldp+102,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+103,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+104,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+105,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+106,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0xdU))));
    bufp->fullCData(oldp+107,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 8U))),5);
    bufp->fullIData(oldp+108,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+109,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+110,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
    bufp->fullBit(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
    bufp->fullCData(oldp+116,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),8);
    bufp->fullBit(oldp+117,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   >> 8U))));
    bufp->fullIData(oldp+118,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+119,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+120,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+121,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+122,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),8);
    bufp->fullCData(oldp+123,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     >> 0x14U))),3);
    bufp->fullCData(oldp+124,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        >> 1U))),7);
    bufp->fullCData(oldp+125,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 8U))),7);
    bufp->fullCData(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+129,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                ? (((- (IData)((1U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 7U)))) 
                                    << 0xbU) | (0x7ffU 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x1cU))))
                                : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 7U)))) 
                                        << 0xbU) | 
                                       ((0x7e0U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 4U)) 
                                        | (0x1fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xfU))))
                                    : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 7U)))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U)) 
                                                 | (0x1eU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0xfU)))))
                                        : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                            ? (0xfffff000U 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0x18U) 
                                                  | (0xfff000U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 8U))))
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 7U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 8U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x11U)) 
                                                         | (0x7feU 
                                                            & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 4U) 
                                                               | (0xeU 
                                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x1cU)))))))
                                                : 0U)))))),32);
    bufp->fullBit(oldp+130,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+131,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+132,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullCData(oldp+133,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x17U))),5);
    bufp->fullCData(oldp+134,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         << 4U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU)))),5);
    bufp->fullCData(oldp+135,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+136,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                             | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                   | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                      | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+137,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                             | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+138,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+139,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullBit(oldp+143,(((IData)(vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgTmp_hdcd90c43__0) 
                             & (0xf0000U == (0xf8000U 
                                             & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])))));
    bufp->fullBit(oldp+144,(((IData)(vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgTmp_hdcd90c43__0) 
                             & (0xf8000U == (0xf8000U 
                                             & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])))));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_store_op3_DE));
    bufp->fullIData(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+147,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                 >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x17U)))) 
                             | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU))))))));
    bufp->fullBit(oldp+148,((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)));
    bufp->fullIData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+151,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE),32);
    __Vtemp_h858fe03f__0[0U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE 
                                 << 8U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
    __Vtemp_h858fe03f__0[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE 
                                 >> 0x18U) | (((IData)(4U) 
                                               + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                              << 8U));
    __Vtemp_h858fe03f__0[2U] = ((((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x18U) | ((IData)(
                                                      (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                              << 8U));
    __Vtemp_h858fe03f__0[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h858fe03f__0[4U] = (((IData)((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    bufp->fullWData(oldp+153,(__Vtemp_h858fe03f__0),137);
    bufp->fullCData(oldp+158,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[0]),26);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[1]),26);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[2]),26);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[3]),26);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[4]),26);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[5]),26);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[6]),26);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[7]),26);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[8]),26);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[9]),26);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[10]),26);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[11]),26);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[12]),26);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[13]),26);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[14]),26);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[15]),26);
    bufp->fullBit(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[0]));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[1]));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[2]));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[3]));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[4]));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[5]));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[6]));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[7]));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[8]));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[9]));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[10]));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[11]));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[12]));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[13]));
    bufp->fullBit(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[14]));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[15]));
    bufp->fullIData(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[0]),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[1]),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[2]),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[3]),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[4]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[5]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[6]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[7]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[8]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[9]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[10]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[11]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[12]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[13]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[14]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[15]),32);
    bufp->fullCData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE),8);
    bufp->fullBit(oldp+208,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                             [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE])));
    bufp->fullIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),26);
    bufp->fullBit(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID
                            [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                      >> 2U))]));
    bufp->fullIData(oldp+211,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred),32);
    bufp->fullIData(oldp+214,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp 
                               - vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred)),32);
    bufp->fullBit(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+217,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z_stb));
    bufp->fullBit(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z_stb));
    bufp->fullIData(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z),32);
    bufp->fullCData(oldp+223,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__state),4);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_m),24);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_m),24);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_m),24);
    bufp->fullSData(oldp+230,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_e),10);
    bufp->fullSData(oldp+231,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_e),10);
    bufp->fullSData(oldp+232,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_e),10);
    bufp->fullBit(oldp+233,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__a_s));
    bufp->fullBit(oldp+234,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__b_s));
    bufp->fullBit(oldp+235,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__z_s));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__guard));
    bufp->fullBit(oldp+237,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__round_bit));
    bufp->fullBit(oldp+238,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__sticky));
    bufp->fullQData(oldp+239,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__quotient),51);
    bufp->fullQData(oldp+241,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__divisor),51);
    bufp->fullQData(oldp+243,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__dividend),51);
    bufp->fullQData(oldp+245,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__remainder),51);
    bufp->fullCData(oldp+247,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__count),6);
    bufp->fullCData(oldp+248,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__state),4);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_m),24);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_m),24);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_m),24);
    bufp->fullSData(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_e),10);
    bufp->fullSData(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_e),10);
    bufp->fullSData(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_e),10);
    bufp->fullBit(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__a_s));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__b_s));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__z_s));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__guard));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__round_bit));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__sticky));
    bufp->fullQData(oldp+264,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__product),48);
    bufp->fullBit(oldp+266,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   >> 0xeU))));
    __Vtemp_h83e5661c__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 << 6U) | (0x3fU & 
                                           vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
    __Vtemp_h83e5661c__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                             >> 0xaU))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h83e5661c__0[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                                  >> 2U))) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                  >> 0xaU))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU));
    __Vtemp_h83e5661c__0[3U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                  >> 2U))));
    __Vtemp_h83e5661c__0[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                          >> 2U)) | 
                                (0x1fc0U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                            >> 2U)));
    bufp->fullWData(oldp+267,(__Vtemp_h83e5661c__0),141);
    bufp->fullCData(oldp+272,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+273,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+274,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+275,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullIData(oldp+277,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullBit(oldp+278,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+279,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullCData(oldp+280,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+281,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+282,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+283,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+284,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 0xcU))),32);
    bufp->fullCData(oldp+285,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                        >> 6U))),6);
    bufp->fullBit(oldp+286,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+287,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+289,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+290,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+291,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    bufp->fullCData(oldp+292,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid) 
                                << 2U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_2) 
                                           << 1U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_1)))),3);
    bufp->fullBit(oldp+293,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_1));
    bufp->fullBit(oldp+294,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_2));
    bufp->fullBit(oldp+295,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid));
    bufp->fullBit(oldp+296,(vlSelf->clk));
    bufp->fullBit(oldp+297,(vlSelf->reset));
    bufp->fullIData(oldp+298,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x17U))]),32);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                              [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 4U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1cU)))]),32);
    bufp->fullIData(oldp+300,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP_DE))
                                ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__div0__DOT__s_output_z
                                : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__mult0__DOT__s_output_z)),32);
    bufp->fullBit(oldp+301,((((~ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_1)) 
                              & ((IData)(vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgTmp_hdcd90c43__0) 
                                 & (0xf0000U == (0xf8000U 
                                                 & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])))) 
                             | (((~ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_ready_2)) 
                                 & ((IData)(vlSymsp->TOP__pipeline.my_DE_stage__DOT____VdfgTmp_hdcd90c43__0) 
                                    & (0xf8000U == 
                                       (0xf8000U & 
                                        vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])))) 
                                | ((~ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__alu__DOT__ALU_resutls_valid)) 
                                   & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_store_op3_DE))))));
    bufp->fullIData(oldp+302,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+318,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+320,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+322,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+326,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+327,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+332,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+333,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+334,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+335,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+336,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+337,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+338,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+339,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+340,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+341,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+342,(0U));
    bufp->fullBit(oldp+343,(0U));
    bufp->fullCData(oldp+344,(0U),4);
    bufp->fullCData(oldp+345,(1U),4);
    bufp->fullCData(oldp+346,(2U),4);
    bufp->fullCData(oldp+347,(3U),4);
    bufp->fullCData(oldp+348,(4U),4);
    bufp->fullCData(oldp+349,(5U),4);
    bufp->fullCData(oldp+350,(6U),4);
    bufp->fullCData(oldp+351,(7U),4);
    bufp->fullCData(oldp+352,(8U),4);
    bufp->fullCData(oldp+353,(9U),4);
    bufp->fullCData(oldp+354,(0xaU),4);
    bufp->fullCData(oldp+355,(0xbU),4);
    bufp->fullCData(oldp+356,(0xcU),4);
    bufp->fullCData(oldp+357,(0xdU),4);
    bufp->fullCData(oldp+358,(0xeU),4);
}
