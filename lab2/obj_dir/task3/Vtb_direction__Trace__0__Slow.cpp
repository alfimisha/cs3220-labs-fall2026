// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_direction__Syms.h"


VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+184,"pc", false,-1, 31,0);
    tracep->declBus(c+185,"fetch_inst", false,-1, 31,0);
    tracep->declBus(c+186,"fetch_id", false,-1, 31,0);
    tracep->declBus(c+187,"gp", false,-1, 31,0);
    tracep->declBit(c+188,"redirect", false,-1);
    tracep->declBit(c+189,"stall", false,-1);
    tracep->declBus(c+190,"inst", false,-1, 31,0);
    tracep->declBus(c+191,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+192,"branch_id", false,-1, 31,0);
    tracep->declBus(c+193,"operand1", false,-1, 31,0);
    tracep->declBus(c+194,"operand2", false,-1, 31,0);
    tracep->declBit(c+195,"branch_flag", false,-1);
    tracep->declBus(c+196,"actual_pc", false,-1, 31,0);
    tracep->declBus(c+197,"retired_inst", false,-1, 31,0);
    tracep->declBus(c+198,"history", false,-1, 7,0);
    tracep->declBus(c+199,"fetch_index", false,-1, 7,0);
    tracep->declBus(c+200,"write_index", false,-1, 7,0);
    tracep->declBit(c+201,"prediction", false,-1);
    tracep->declBit(c+202,"bhr_write", false,-1);
    tracep->declBit(c+203,"pht_write", false,-1);
    tracep->declBit(c+204,"pht_data", false,-1);
    tracep->declBus(c+205,"bhr_data", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"fetch_inst", false,-1, 31,0);
    tracep->declBus(c+3,"fetch_id", false,-1, 31,0);
    tracep->declBus(c+206,"gp", false,-1, 31,0);
    tracep->declBit(c+4,"redirect", false,-1);
    tracep->declBit(c+5,"stall", false,-1);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+7,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+8,"branch_id", false,-1, 31,0);
    tracep->declBus(c+9,"operand1", false,-1, 31,0);
    tracep->declBus(c+10,"operand2", false,-1, 31,0);
    tracep->declBit(c+11,"branch_flag", false,-1);
    tracep->declBus(c+12,"actual_pc", false,-1, 31,0);
    tracep->declBus(c+13,"retired_inst", false,-1, 31,0);
    tracep->declBus(c+14,"history", false,-1, 7,0);
    tracep->declBus(c+15,"fetch_index", false,-1, 7,0);
    tracep->declBus(c+16,"write_index", false,-1, 7,0);
    tracep->declBit(c+17,"prediction", false,-1);
    tracep->declBit(c+18,"bhr_write", false,-1);
    tracep->declBit(c+18,"pht_write", false,-1);
    tracep->declBit(c+19,"pht_data", false,-1);
    tracep->declBus(c+20,"bhr_data", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+21,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+22,"FE_latch_out", false,-1, 137,0);
    tracep->declArray(c+27,"DE_latch_out", false,-1, 249,0);
    tracep->declArray(c+35,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+41,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+47,"from_AGEX_to_FE", false,-1, 42,0);
    tracep->declBus(c+249,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+250,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+49,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+249,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+50,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+249,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+250,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+250,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declArray(c+22,"from_FE_latch", false,-1, 137,0);
    tracep->declBus(c+49,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+249,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+50,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+27,"DE_latch_out", false,-1, 249,0);
    tracep->declArray(c+27,"DE_latch", false,-1, 249,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+149+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+52,"valid_DE", false,-1);
    tracep->declBus(c+53,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+54,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+55,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+56,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+139,"DE_latch_contents", false,-1, 249,0);
    tracep->declBus(c+57,"pht_idx_DE", false,-1, 7,0);
    tracep->declBit(c+58,"pht_prediction_DE", false,-1);
    tracep->declBus(c+59,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+60,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+61,"op_DE", false,-1, 6,0);
    tracep->declBus(c+62,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+63,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+64,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+65,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBus(c+66,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+67,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+68,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+147,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+148,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+69,"is_br_DE", false,-1);
    tracep->declBit(c+70,"is_jmp_DE", false,-1);
    tracep->declBit(c+71,"rd_mem_DE", false,-1);
    tracep->declBit(c+72,"wr_mem_DE", false,-1);
    tracep->declBit(c+73,"wr_reg_DE", false,-1);
    tracep->declBit(c+74,"wr_reg_WB", false,-1);
    tracep->declBus(c+75,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+76,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+5,"pipeline_stall_DE", false,-1);
    tracep->declBit(c+77,"use_rs1_DE", false,-1);
    tracep->declBit(c+78,"use_rs2_DE", false,-1);
    tracep->declBus(c+79,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+80,"has_data_hazards", false,-1);
    tracep->declBit(c+49,"br_mispred_AGEX", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+47,"from_AGEX_to_FE", false,-1, 42,0);
    tracep->declBus(c+249,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+250,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+22,"FE_latch_out", false,-1, 137,0);
    tracep->declArray(c+22,"FE_latch", false,-1, 137,0);
    tracep->declBit(c+251,"valid_FE", false,-1);
    tracep->declBus(c+1,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+3,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+252,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+2,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+81,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+5,"stall_pipe_FE", false,-1);
    tracep->declBus(c+15,"pht_idx_fe", false,-1, 7,0);
    tracep->declBit(c+17,"pht_prediction_FE", false,-1);
    tracep->declBus(c+14,"bhr_fe", false,-1, 7,0);
    tracep->declBus(c+16,"pht_idx_agex", false,-1, 7,0);
    tracep->declBit(c+18,"branch_resolved", false,-1);
    tracep->declBit(c+19,"branch_taken", false,-1);
    tracep->declArray(c+82,"FE_latch_contents", false,-1, 137,0);
    tracep->declBit(c+4,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+87,"br_target_AGEX", false,-1, 31,0);
    tracep->pushNamePrefix("bhr ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBit(c+18,"wr_ena", false,-1);
    tracep->declBus(c+20,"wr_data", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 7,0);
    tracep->pushNamePrefix("bhr_probe ");
    tracep->declBus(c+14,"out", false,-1, 7,0);
    tracep->declBit(c+18,"wr_ena", false,-1);
    tracep->declBus(c+20,"wr_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pht ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+15,"rd_sel", false,-1, 7,0);
    tracep->declBit(c+17,"out", false,-1);
    tracep->declBus(c+16,"wr_sel", false,-1, 7,0);
    tracep->declBit(c+19,"wr_data", false,-1);
    tracep->declBit(c+18,"wr_ena", false,-1);
    tracep->declBus(c+88,"i", false,-1, 31,0);
    tracep->pushNamePrefix("pht_probe ");
    tracep->declBus(c+15,"rd_sel", false,-1, 7,0);
    tracep->declBus(c+16,"wr_sel", false,-1, 7,0);
    tracep->declBit(c+17,"out", false,-1);
    tracep->declBit(c+18,"wr_ena", false,-1);
    tracep->declBit(c+19,"wr_data", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+250,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+35,"from_AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+41,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+249,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+249,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+249,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+41,"MEM_latch", false,-1, 172,0);
    tracep->declBit(c+89,"valid_MEM", false,-1);
    tracep->declArray(c+90,"MEM_latch_contents", false,-1, 172,0);
    tracep->declBus(c+96,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+97,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+98,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+99,"PC_MEM", false,-1, 31,0);
    tracep->declBit(c+100,"rd_mem_MEM", false,-1);
    tracep->declBus(c+101,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+102,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+103,"wr_reg_MEM", false,-1);
    tracep->declBus(c+104,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+105,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+101,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+106,"wr_mem_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_AGEX_stage__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_AGEX_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declBus(c+249,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+250,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+27,"from_DE_latch", false,-1, 249,0);
    tracep->declArray(c+35,"AGEX_latch_out", false,-1, 174,0);
    tracep->declQuad(c+47,"from_AGEX_to_FE", false,-1, 42,0);
    tracep->declBus(c+49,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+35,"AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+107,"AGEX_latch_contents", false,-1, 174,0);
    tracep->declBit(c+113,"valid_AGEX", false,-1);
    tracep->declBus(c+6,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+7,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+8,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+114,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+115,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+116,"br_cond_AGEX", false,-1);
    tracep->declBit(c+117,"is_br_AGEX", false,-1);
    tracep->declBit(c+118,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+119,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+120,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+121,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+122,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+9,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+10,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+123,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+124,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+125,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+12,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+49,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+126,"pht_idx_AGEX", false,-1, 7,0);
    tracep->declBit(c+127,"pht_prediction_AGEX", false,-1);
    tracep->declBit(c+128,"branch_resolved_AGEX", false,-1);
    tracep->declBit(c+129,"branch_taken_AGEX", false,-1);
    tracep->declBus(c+207,"branch_count", false,-1, 31,0);
    tracep->declBus(c+208,"correct_branch_count", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_WB_stage__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+182,"clk", false,-1);
    tracep->declBit(c+183,"reset", false,-1);
    tracep->declArray(c+41,"from_MEM_latch", false,-1, 172,0);
    tracep->declBus(c+249,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+50,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+249,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+249,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+130,"valid_WB", false,-1);
    tracep->declBus(c+131,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+13,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+132,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+133,"inst_count_WB", false,-1, 31,0);
    tracep->declBit(c+134,"wr_reg_WB", false,-1);
    tracep->declBus(c+135,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+136,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+137,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+138,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+209,"[0]", false,-1, 31,0);
    tracep->declBus(c+210,"[1]", false,-1, 31,0);
    tracep->declBus(c+211,"[2]", false,-1, 31,0);
    tracep->declBus(c+212,"[3]", false,-1, 31,0);
    tracep->declBus(c+213,"[4]", false,-1, 31,0);
    tracep->declBus(c+214,"[5]", false,-1, 31,0);
    tracep->declBus(c+215,"[6]", false,-1, 31,0);
    tracep->declBus(c+216,"[7]", false,-1, 31,0);
    tracep->declBus(c+217,"[8]", false,-1, 31,0);
    tracep->declBus(c+218,"[9]", false,-1, 31,0);
    tracep->declBus(c+219,"[10]", false,-1, 31,0);
    tracep->declBus(c+220,"[11]", false,-1, 31,0);
    tracep->declBus(c+221,"[12]", false,-1, 31,0);
    tracep->declBus(c+222,"[13]", false,-1, 31,0);
    tracep->declBus(c+223,"[14]", false,-1, 31,0);
    tracep->declBus(c+224,"[15]", false,-1, 31,0);
    tracep->declBus(c+225,"[16]", false,-1, 31,0);
    tracep->declBus(c+226,"[17]", false,-1, 31,0);
    tracep->declBus(c+227,"[18]", false,-1, 31,0);
    tracep->declBus(c+228,"[19]", false,-1, 31,0);
    tracep->declBus(c+229,"[20]", false,-1, 31,0);
    tracep->declBus(c+230,"[21]", false,-1, 31,0);
    tracep->declBus(c+231,"[22]", false,-1, 31,0);
    tracep->declBus(c+232,"[23]", false,-1, 31,0);
    tracep->declBus(c+233,"[24]", false,-1, 31,0);
    tracep->declBus(c+234,"[25]", false,-1, 31,0);
    tracep->declBus(c+235,"[26]", false,-1, 31,0);
    tracep->declBus(c+236,"[27]", false,-1, 31,0);
    tracep->declBus(c+237,"[28]", false,-1, 31,0);
    tracep->declBus(c+238,"[29]", false,-1, 31,0);
    tracep->declBus(c+239,"[30]", false,-1, 31,0);
    tracep->declBus(c+240,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+241,"[0]", false,-1, 31,0);
    tracep->declBus(c+242,"[1]", false,-1, 31,0);
    tracep->declBus(c+243,"[2]", false,-1, 31,0);
    tracep->declBus(c+244,"[3]", false,-1, 31,0);
    tracep->declBus(c+245,"[4]", false,-1, 31,0);
    tracep->declBus(c+246,"[5]", false,-1, 31,0);
    tracep->declBus(c+247,"[6]", false,-1, 31,0);
    tracep->declBus(c+248,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+181,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_top(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_top\n"); );
    // Body
    Vtb_direction___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("tb_direction ");
    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__0(vlSelf, tracep);
    tracep->pushNamePrefix("dut ");
    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_AGEX_stage ");
    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_AGEX_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_WB_stage ");
    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_WB_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_direction___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_direction___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_direction___024root__trace_register(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_direction___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_direction___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_direction___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_full_sub_0(Vtb_direction___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_direction___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_full_top_0\n"); );
    // Init
    Vtb_direction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_direction___024root*>(voidSelf);
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_direction___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_full_sub_0(Vtb_direction___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<5>/*159:0*/ __Vtemp_h053d5006__0;
    VlWide<6>/*191:0*/ __Vtemp_hbae848de__0;
    VlWide<6>/*191:0*/ __Vtemp_h474c4c7f__0;
    VlWide<4>/*127:0*/ __Vtemp_h485f86d3__0;
    VlWide<5>/*159:0*/ __Vtemp_hd2f879dc__0;
    VlWide<8>/*255:0*/ __Vtemp_h08931cf3__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    bufp->fullBit(oldp+4,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                         >> 0x2aU)))));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE));
    bufp->fullIData(oldp+6,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                              << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        >> 0x19U))),32);
    bufp->fullIData(oldp+7,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                              << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x19U))),32);
    bufp->fullIData(oldp+8,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x13U))),32);
    bufp->fullIData(oldp+9,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                              << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          >> 0x13U))),32);
    bufp->fullIData(oldp+10,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x13U))),32);
    bufp->fullBit(oldp+11,((IData)((0U != (0x60000U 
                                           & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
    bufp->fullIData(oldp+12,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_target_AGEX),32);
    bufp->fullIData(oldp+13,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                               << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                            >> 0xcU))),32);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__bhr_fe),8);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_idx_fe),8);
    bufp->fullCData(oldp+16,((0xffU & (IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE))),8);
    bufp->fullBit(oldp+17,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE));
    bufp->fullBit(oldp+18,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                          >> 9U)))));
    bufp->fullBit(oldp+19,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                          >> 8U)))));
    bufp->fullIData(oldp+20,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                            >> 8U)))),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__tb_direction__dut.__PVT__cycle_count),32);
    bufp->fullWData(oldp+22,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch),138);
    bufp->fullWData(oldp+27,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch),250);
    bufp->fullWData(oldp+35,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch),175);
    bufp->fullWData(oldp+41,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch),173);
    bufp->fullQData(oldp+47,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE),43);
    bufp->fullBit(oldp+49,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+50,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE),38);
    bufp->fullBit(oldp+52,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  >> 9U))));
    bufp->fullIData(oldp+53,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+54,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+55,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+56,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                               << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                            >> 9U))),32);
    bufp->fullCData(oldp+57,((0xffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                       >> 1U))),8);
    bufp->fullBit(oldp+58,((1U & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])));
    bufp->fullCData(oldp+59,((7U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x15U))),3);
    bufp->fullCData(oldp+60,((0x7fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 2U))),7);
    bufp->fullCData(oldp+61,((0x7fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 9U))),7);
    bufp->fullCData(oldp+62,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+65,(((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                               : ((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                   : ((4U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 8U)))) 
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 3U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x10U))))
                                       : ((5U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                              >> 8U)))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 5U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 3U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x10U)))))
                                           : ((3U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? (0xfffff000U 
                                                  & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      << 0x17U) 
                                                     | (0x7ff000U 
                                                        & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 9U))))
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 8U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 9U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x12U)) 
                                                         | (0x7feU 
                                                            & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                << 3U) 
                                                               | (6U 
                                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                     >> 0x1dU)))))))
                                                   : 0U))))))),32);
    bufp->fullCData(oldp+66,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x18U))),5);
    bufp->fullCData(oldp+67,((0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        << 3U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x1dU)))),5);
    bufp->fullCData(oldp+68,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x10U))),5);
    bufp->fullBit(oldp+69,(((0x1cU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1dU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1eU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1fU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x20U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | (0x21U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+70,(((0x19U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1aU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | (0x1bU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+71,((0x17U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+72,((0x18U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+74,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+75,((0x1fU & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U)))),5);
    bufp->fullIData(oldp+76,((IData)(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullBit(oldp+77,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+79,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+80,((((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                             & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                >> (0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x18U)))) 
                            | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1dU))))) 
                               | ((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x10U))))))));
    bufp->fullIData(oldp+81,(((IData)(4U) + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    __Vtemp_h053d5006__0[0U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 << 9U) | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_idx_fe) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE)));
    __Vtemp_h053d5006__0[1U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0x17U) | (((IData)(4U) 
                                               + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                              << 9U));
    __Vtemp_h053d5006__0[2U] = ((((IData)(4U) + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x17U) | ((IData)(
                                                      (((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                              << 9U));
    __Vtemp_h053d5006__0[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x17U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_h053d5006__0[4U] = (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__valid_FE) 
                                 << 9U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                    >> 0x20U)) 
                                           >> 0x17U));
    bufp->fullWData(oldp+82,(__Vtemp_h053d5006__0),138);
    bufp->fullIData(oldp+87,((IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                      >> 0xaU))),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht__DOT__i),32);
    bufp->fullBit(oldp+89,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                  >> 0xeU))));
    __Vtemp_hbae848de__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 << 6U) | (0x3fU & 
                                           vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U]));
    __Vtemp_hbae848de__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                             >> 0xaU))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hbae848de__0[2U] = (((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                  >> 2U))) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                  >> 0xaU))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU));
    __Vtemp_hbae848de__0[3U] = ((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                  >> 2U))));
    __Vtemp_hbae848de__0[4U] = ((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                  >> 2U))));
    __Vtemp_hbae848de__0[5U] = ((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                          >> 2U)) | 
                                (0x1fc0U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                            >> 2U)));
    bufp->fullWData(oldp+90,(__Vtemp_hbae848de__0),173);
    bufp->fullCData(oldp+96,((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                       >> 8U))),6);
    bufp->fullIData(oldp+97,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+98,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                               << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                            >> 0xeU))),32);
    bufp->fullIData(oldp+99,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                               << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                            >> 0xeU))),32);
    bufp->fullBit(oldp+100,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullIData(oldp+101,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+102,((0x1fU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+103,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullIData(oldp+104,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullBit(oldp+106,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 6U))));
    __Vtemp_h474c4c7f__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 9U)));
    __Vtemp_h474c4c7f__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h474c4c7f__0[2U] = (((IData)((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                >> 0x13U)))) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    __Vtemp_h474c4c7f__0[3U] = (((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 0x15U) | (0x1fc000U 
                                               & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 0xbU))) 
                                | (((IData)((0x3fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                   >> 0x13U)))) 
                                    >> 0x18U) | ((IData)(
                                                         ((0x3fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                               << 0xdU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                                 >> 0x13U))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp_h474c4c7f__0[4U] = ((0x3fffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 0xbU)) 
                                | ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                    << 0x15U) | (0x1fc000U 
                                                 & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    >> 0xbU))));
    __Vtemp_h474c4c7f__0[5U] = ((0x3fffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xbU)) 
                                | (0x4000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 0xbU)));
    bufp->fullWData(oldp+107,(__Vtemp_h474c4c7f__0),175);
    bufp->fullBit(oldp+113,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+114,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x19U))),32);
    bufp->fullCData(oldp+115,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0x13U))),6);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_cond_AGEX));
    bufp->fullBit(oldp+117,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+118,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+119,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+120,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+121,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0xeU))));
    bufp->fullCData(oldp+122,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 9U))),5);
    bufp->fullIData(oldp+123,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX),32);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX),32);
    bufp->fullCData(oldp+126,((0xffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 1U))),8);
    bufp->fullBit(oldp+127,((1U & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U])));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__branch_resolved_AGEX));
    bufp->fullBit(oldp+129,((1U & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                    >> 0x11U) | (IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_cond_AGEX)))));
    bufp->fullBit(oldp+130,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+131,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+132,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+133,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+134,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+135,((0x1fU & vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+137,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+138,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    __Vtemp_h485f86d3__0[0U] = ((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                 : ((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                     : ((4U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 8U)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 3U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x10U))))
                                         : ((5U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 8U)))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 5U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          << 3U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x10U)))))
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x17U) 
                                                    | (0x7ff000U 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 9U))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                  >> 8U)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 9U)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 0x12U)) 
                                                        | (0x7feU 
                                                           & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                               << 3U) 
                                                              | (6U 
                                                                 & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                    >> 0x1dU)))))))
                                                  : 0U))))));
    __Vtemp_hd2f879dc__0[0U] = ((__Vtemp_h485f86d3__0[0U] 
                                 << 0x13U) | ((((0x1cU 
                                                 == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                | ((0x1dU 
                                                    == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1eU 
                                                       == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((0x1fU 
                                                          == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((0x20U 
                                                             == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | (0x21U 
                                                               == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                               << 0x12U) 
                                              | ((((0x19U 
                                                    == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((0x1aU 
                                                       == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | (0x1bU 
                                                         == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x11U) 
                                                 | (((0x17U 
                                                      == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     << 0x10U) 
                                                    | (((0x18U 
                                                         == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        << 0xfU) 
                                                       | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                           << 0xeU) 
                                                          | ((0x3e00U 
                                                              & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                 >> 7U)) 
                                                             | (0x1ffU 
                                                                & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U]))))))));
    __Vtemp_h08931cf3__0[0U] = __Vtemp_hd2f879dc__0[0U];
    __Vtemp_h08931cf3__0[1U] = ((__Vtemp_h485f86d3__0[0U] 
                                 >> 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 0x1dU)))] 
                                             << 0x13U));
    __Vtemp_h08931cf3__0[2U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 3U) 
                                            | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x1dU)))] 
                                 >> 0xdU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                         << 0x17U) 
                                                                        | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                           >> 9U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x18U))])))) 
                                             << 0x13U));
    __Vtemp_h08931cf3__0[3U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                             << 0x17U) 
                                                            | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                               >> 9U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x18U))])))) 
                                 >> 0xdU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                          << 0x17U) 
                                                                         | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                            >> 9U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x18U))]))) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    __Vtemp_h08931cf3__0[4U] = ((0xfe000000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x13U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                              << 0x17U) 
                                                                             | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                                                >> 9U)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x18U))]))) 
                                                          >> 0x20U)) 
                                                 >> 0xdU)));
    __Vtemp_h08931cf3__0[5U] = (((0x1ff0000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    >> 0x10U)) | (0xfe000000U 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                     << 0x10U)));
    __Vtemp_h08931cf3__0[6U] = (((0x1ff0000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xfe000000U 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_h08931cf3__0[7U] = (((0x1ff0000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x10U)) | (0x2000000U 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x10U)));
    bufp->fullWData(oldp+139,(__Vtemp_h08931cf3__0),250);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x18U))]),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 3U) | 
                                         (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1dU)))]),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+182,(vlSelf->clk));
    bufp->fullBit(oldp+183,(vlSelf->reset));
    bufp->fullIData(oldp+184,(vlSelf->pc),32);
    bufp->fullIData(oldp+185,(vlSelf->fetch_inst),32);
    bufp->fullIData(oldp+186,(vlSelf->fetch_id),32);
    bufp->fullIData(oldp+187,(vlSelf->gp),32);
    bufp->fullBit(oldp+188,(vlSelf->redirect));
    bufp->fullBit(oldp+189,(vlSelf->stall));
    bufp->fullIData(oldp+190,(vlSelf->inst),32);
    bufp->fullIData(oldp+191,(vlSelf->branch_pc),32);
    bufp->fullIData(oldp+192,(vlSelf->branch_id),32);
    bufp->fullIData(oldp+193,(vlSelf->operand1),32);
    bufp->fullIData(oldp+194,(vlSelf->operand2),32);
    bufp->fullBit(oldp+195,(vlSelf->branch_flag));
    bufp->fullIData(oldp+196,(vlSelf->actual_pc),32);
    bufp->fullIData(oldp+197,(vlSelf->retired_inst),32);
    bufp->fullCData(oldp+198,(vlSelf->history),8);
    bufp->fullCData(oldp+199,(vlSelf->fetch_index),8);
    bufp->fullCData(oldp+200,(vlSelf->write_index),8);
    bufp->fullBit(oldp+201,(vlSelf->prediction));
    bufp->fullBit(oldp+202,(vlSelf->bhr_write));
    bufp->fullBit(oldp+203,(vlSelf->pht_write));
    bufp->fullBit(oldp+204,(vlSelf->pht_data));
    bufp->fullIData(oldp+205,(vlSelf->bhr_data),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.branch_count),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.correct_branch_count),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+249,(0U));
    bufp->fullBit(oldp+250,(0U));
    bufp->fullBit(oldp+251,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__valid_FE));
    bufp->fullIData(oldp+252,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
}
