// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_branch_predictor__Syms.h"


VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_init_sub__TOP__0(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declBus(c+204,"pc", false,-1, 31,0);
    tracep->declBus(c+205,"fetch_inst", false,-1, 31,0);
    tracep->declBus(c+206,"fetch_id", false,-1, 31,0);
    tracep->declBit(c+207,"redirect", false,-1);
    tracep->declBit(c+208,"stall", false,-1);
    tracep->declBus(c+209,"gp", false,-1, 31,0);
    tracep->declBus(c+210,"inst", false,-1, 31,0);
    tracep->declBus(c+211,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+212,"branch_id", false,-1, 31,0);
    tracep->declBus(c+213,"operand1", false,-1, 31,0);
    tracep->declBus(c+214,"operand2", false,-1, 31,0);
    tracep->declBit(c+215,"branch_flag", false,-1);
    tracep->declBus(c+216,"actual_pc", false,-1, 31,0);
    tracep->declBus(c+217,"branches", false,-1, 31,0);
    tracep->declBus(c+218,"correct", false,-1, 31,0);
    tracep->declBus(c+219,"retired_inst", false,-1, 31,0);
    tracep->declBus(c+220,"retired_pc", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__0(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"fetch_inst", false,-1, 31,0);
    tracep->declBus(c+3,"fetch_id", false,-1, 31,0);
    tracep->declBit(c+4,"redirect", false,-1);
    tracep->declBit(c+5,"stall", false,-1);
    tracep->declBus(c+221,"gp", false,-1, 31,0);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+7,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+8,"branch_id", false,-1, 31,0);
    tracep->declBus(c+9,"operand1", false,-1, 31,0);
    tracep->declBus(c+10,"operand2", false,-1, 31,0);
    tracep->declBit(c+11,"branch_flag", false,-1);
    tracep->declBus(c+12,"actual_pc", false,-1, 31,0);
    tracep->declBus(c+222,"branches", false,-1, 31,0);
    tracep->declBus(c+223,"correct", false,-1, 31,0);
    tracep->declBus(c+13,"retired_inst", false,-1, 31,0);
    tracep->declBus(c+14,"retired_pc", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__dut__0(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__dut__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declBus(c+15,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+16,"FE_latch_out", false,-1, 171,0);
    tracep->declArray(c+22,"DE_latch_out", false,-1, 283,0);
    tracep->declArray(c+31,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+37,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+43,"from_AGEX_to_FE", false,-1, 108,0);
    tracep->declBus(c+264,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+265,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+47,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+264,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+48,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+264,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+265,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+265,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declArray(c+16,"from_FE_latch", false,-1, 171,0);
    tracep->declBus(c+47,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+264,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+48,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+22,"DE_latch_out", false,-1, 283,0);
    tracep->declArray(c+22,"DE_latch", false,-1, 283,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+169+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+50,"valid_DE", false,-1);
    tracep->declBus(c+51,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+52,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+53,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+54,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+158,"DE_latch_contents", false,-1, 283,0);
    tracep->declBus(c+55,"pht_idx_DE", false,-1, 9,0);
    tracep->declBit(c+56,"pht_prediction_DE", false,-1);
    tracep->declBus(c+57,"pred_pc_DE", false,-1, 31,0);
    tracep->declBus(c+58,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+59,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+60,"op_DE", false,-1, 6,0);
    tracep->declBus(c+61,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+62,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+63,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+64,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBus(c+65,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+66,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+67,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+167,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+168,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+68,"is_br_DE", false,-1);
    tracep->declBit(c+69,"is_jmp_DE", false,-1);
    tracep->declBit(c+70,"rd_mem_DE", false,-1);
    tracep->declBit(c+71,"wr_mem_DE", false,-1);
    tracep->declBit(c+72,"wr_reg_DE", false,-1);
    tracep->declBit(c+73,"wr_reg_WB", false,-1);
    tracep->declBus(c+74,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+75,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+5,"pipeline_stall_DE", false,-1);
    tracep->declBit(c+76,"use_rs1_DE", false,-1);
    tracep->declBit(c+77,"use_rs2_DE", false,-1);
    tracep->declBus(c+78,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+79,"has_data_hazards", false,-1);
    tracep->declBit(c+47,"br_mispred_AGEX", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+43,"from_AGEX_to_FE", false,-1, 108,0);
    tracep->declBus(c+264,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+265,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+16,"FE_latch_out", false,-1, 171,0);
    tracep->declArray(c+16,"FE_latch", false,-1, 171,0);
    tracep->declBit(c+266,"valid_FE", false,-1);
    tracep->declBus(c+1,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+3,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+267,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+2,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+80,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+5,"stall_pipe_FE", false,-1);
    tracep->declBus(c+81,"pht_idx_fe", false,-1, 9,0);
    tracep->declBit(c+82,"pht_prediction_FE", false,-1);
    tracep->declBus(c+83,"bhr_fe", false,-1, 7,0);
    tracep->declBus(c+84,"pht_idx_agex", false,-1, 9,0);
    tracep->declBit(c+85,"branch_resolved", false,-1);
    tracep->declBit(c+86,"branch_taken", false,-1);
    tracep->declBit(c+87,"btb_hit", false,-1);
    tracep->declBus(c+88,"target_btb_pred", false,-1, 31,0);
    tracep->declBit(c+89,"is_btb_valid", false,-1);
    tracep->declBus(c+90,"pred_pc_FE", false,-1, 31,0);
    tracep->declArray(c+91,"FE_latch_contents", false,-1, 171,0);
    tracep->declBit(c+4,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+97,"br_target_AGEX", false,-1, 31,0);
    tracep->declBus(c+98,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+99,"btb_target_AGEX", false,-1, 31,0);
    tracep->pushNamePrefix("bhr ");
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declBit(c+85,"wr_ena", false,-1);
    tracep->declBus(c+100,"wr_data", false,-1, 31,0);
    tracep->declBus(c+83,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("btb ");
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declBit(c+268,"rd_ena", false,-1);
    tracep->declBus(c+1,"rd_sel", false,-1, 31,0);
    tracep->declBus(c+88,"out_data", false,-1, 31,0);
    tracep->declBit(c+89,"outs_valid", false,-1);
    tracep->declBit(c+85,"wr_ena", false,-1);
    tracep->declBus(c+98,"wr_sel", false,-1, 31,0);
    tracep->declBus(c+99,"wr_data", false,-1, 31,0);
    tracep->declBus(c+101,"rd_index", false,-1, 7,0);
    tracep->declBus(c+102,"rd_tag", false,-1, 21,0);
    tracep->declBus(c+103,"wr_index", false,-1, 7,0);
    tracep->declBus(c+104,"wr_tag", false,-1, 21,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+105,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pht ");
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declBus(c+81,"rd_sel", false,-1, 9,0);
    tracep->declBit(c+82,"out", false,-1);
    tracep->declBus(c+84,"wr_sel", false,-1, 9,0);
    tracep->declBit(c+86,"wr_data", false,-1);
    tracep->declBit(c+85,"wr_ena", false,-1);
    tracep->declBus(c+106,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declBus(c+265,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+31,"from_AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+37,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+264,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+264,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+264,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+37,"MEM_latch", false,-1, 172,0);
    tracep->declBit(c+107,"valid_MEM", false,-1);
    tracep->declArray(c+108,"MEM_latch_contents", false,-1, 172,0);
    tracep->declBus(c+114,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+115,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+116,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+117,"PC_MEM", false,-1, 31,0);
    tracep->declBit(c+118,"rd_mem_MEM", false,-1);
    tracep->declBus(c+119,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+120,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+121,"wr_reg_MEM", false,-1);
    tracep->declBus(c+122,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+123,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+119,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+124,"wr_mem_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__dut__my_AGEX_stage__0(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__dut__my_AGEX_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declBus(c+264,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+265,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+22,"from_DE_latch", false,-1, 283,0);
    tracep->declArray(c+31,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+43,"from_AGEX_to_FE", false,-1, 108,0);
    tracep->declBus(c+47,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+31,"AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+125,"AGEX_latch_contents", false,-1, 174,0);
    tracep->declBit(c+131,"valid_AGEX", false,-1);
    tracep->declBus(c+6,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+7,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+8,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+132,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+133,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+134,"br_cond_AGEX", false,-1);
    tracep->declBit(c+135,"is_br_AGEX", false,-1);
    tracep->declBit(c+136,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+137,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+138,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+139,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+140,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+9,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+10,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+141,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+142,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+143,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+12,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+47,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+144,"pht_idx_AGEX", false,-1, 9,0);
    tracep->declBit(c+145,"pht_prediction_AGEX", false,-1);
    tracep->declBus(c+146,"pred_pc_AGEX", false,-1, 31,0);
    tracep->declBit(c+147,"branch_resolved_AGEX", false,-1);
    tracep->declBit(c+148,"branch_taken_AGEX", false,-1);
    tracep->declBus(c+149,"btb_target_AGEX", false,-1, 31,0);
    tracep->declBus(c+222,"branch_count", false,-1, 31,0);
    tracep->declBus(c+223,"correct_branch_count", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__dut__my_WB_stage__0(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__dut__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+202,"clk", false,-1);
    tracep->declBit(c+203,"reset", false,-1);
    tracep->declArray(c+37,"from_MEM_latch", false,-1, 172,0);
    tracep->declBus(c+264,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+48,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+264,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+264,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+150,"valid_WB", false,-1);
    tracep->declBus(c+151,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+13,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+14,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+152,"inst_count_WB", false,-1, 31,0);
    tracep->declBit(c+153,"wr_reg_WB", false,-1);
    tracep->declBus(c+154,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+155,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+156,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+157,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+224,"[0]", false,-1, 31,0);
    tracep->declBus(c+225,"[1]", false,-1, 31,0);
    tracep->declBus(c+226,"[2]", false,-1, 31,0);
    tracep->declBus(c+227,"[3]", false,-1, 31,0);
    tracep->declBus(c+228,"[4]", false,-1, 31,0);
    tracep->declBus(c+229,"[5]", false,-1, 31,0);
    tracep->declBus(c+230,"[6]", false,-1, 31,0);
    tracep->declBus(c+231,"[7]", false,-1, 31,0);
    tracep->declBus(c+232,"[8]", false,-1, 31,0);
    tracep->declBus(c+233,"[9]", false,-1, 31,0);
    tracep->declBus(c+234,"[10]", false,-1, 31,0);
    tracep->declBus(c+235,"[11]", false,-1, 31,0);
    tracep->declBus(c+236,"[12]", false,-1, 31,0);
    tracep->declBus(c+237,"[13]", false,-1, 31,0);
    tracep->declBus(c+238,"[14]", false,-1, 31,0);
    tracep->declBus(c+239,"[15]", false,-1, 31,0);
    tracep->declBus(c+240,"[16]", false,-1, 31,0);
    tracep->declBus(c+241,"[17]", false,-1, 31,0);
    tracep->declBus(c+242,"[18]", false,-1, 31,0);
    tracep->declBus(c+243,"[19]", false,-1, 31,0);
    tracep->declBus(c+244,"[20]", false,-1, 31,0);
    tracep->declBus(c+245,"[21]", false,-1, 31,0);
    tracep->declBus(c+246,"[22]", false,-1, 31,0);
    tracep->declBus(c+247,"[23]", false,-1, 31,0);
    tracep->declBus(c+248,"[24]", false,-1, 31,0);
    tracep->declBus(c+249,"[25]", false,-1, 31,0);
    tracep->declBus(c+250,"[26]", false,-1, 31,0);
    tracep->declBus(c+251,"[27]", false,-1, 31,0);
    tracep->declBus(c+252,"[28]", false,-1, 31,0);
    tracep->declBus(c+253,"[29]", false,-1, 31,0);
    tracep->declBus(c+254,"[30]", false,-1, 31,0);
    tracep->declBus(c+255,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+256,"[0]", false,-1, 31,0);
    tracep->declBus(c+257,"[1]", false,-1, 31,0);
    tracep->declBus(c+258,"[2]", false,-1, 31,0);
    tracep->declBus(c+259,"[3]", false,-1, 31,0);
    tracep->declBus(c+260,"[4]", false,-1, 31,0);
    tracep->declBus(c+261,"[5]", false,-1, 31,0);
    tracep->declBus(c+262,"[6]", false,-1, 31,0);
    tracep->declBus(c+263,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+201,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_init_top(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_init_top\n"); );
    // Body
    Vtb_branch_predictor___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("tb_branch_predictor ");
    Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__0(vlSelf, tracep);
    tracep->pushNamePrefix("dut ");
    Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__dut__0(vlSelf, tracep);
    tracep->pushNamePrefix("my_AGEX_stage ");
    Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__dut__my_AGEX_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_WB_stage ");
    Vtb_branch_predictor___024root__trace_init_sub__TOP__tb_branch_predictor__dut__my_WB_stage__0(vlSelf, tracep);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_branch_predictor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_branch_predictor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_register(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_branch_predictor___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_branch_predictor___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_branch_predictor___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_full_sub_0(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_full_top_0\n"); );
    // Init
    Vtb_branch_predictor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_branch_predictor___024root*>(voidSelf);
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_branch_predictor___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_full_sub_0(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<6>/*191:0*/ __Vtemp_h73675278__0;
    VlWide<6>/*191:0*/ __Vtemp_hae8cb829__0;
    VlWide<6>/*191:0*/ __Vtemp_h6a6e56b2__0;
    VlWide<4>/*127:0*/ __Vtemp_h3dc83197__0;
    VlWide<6>/*191:0*/ __Vtemp_ha70bf0d9__0;
    VlWide<9>/*287:0*/ __Vtemp_hc6d21e64__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    bufp->fullBit(oldp+4,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                 >> 0xcU))));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE));
    bufp->fullIData(oldp+6,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                              << 5U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                        >> 0x1bU))),32);
    bufp->fullIData(oldp+7,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                              << 5U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        >> 0x1bU))),32);
    bufp->fullIData(oldp+8,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 0xbU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x15U))),32);
    bufp->fullIData(oldp+9,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              << 0xbU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x15U))),32);
    bufp->fullIData(oldp+10,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xbU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x15U))),32);
    bufp->fullBit(oldp+11,((IData)((0U != (0x180000U 
                                           & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])))));
    bufp->fullIData(oldp+12,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_target_AGEX),32);
    bufp->fullIData(oldp+13,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                               << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                            >> 0xcU))),32);
    bufp->fullIData(oldp+14,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                               << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                            >> 0xcU))),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__cycle_count),32);
    bufp->fullWData(oldp+16,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch),172);
    bufp->fullWData(oldp+22,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch),284);
    bufp->fullWData(oldp+31,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch),175);
    bufp->fullWData(oldp+37,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch),173);
    bufp->fullWData(oldp+43,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE),109);
    bufp->fullBit(oldp+47,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+48,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__from_WB_to_DE),38);
    bufp->fullBit(oldp+50,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  >> 0xbU))));
    bufp->fullIData(oldp+51,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                               << 0x15U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+52,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x15U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+53,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x15U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 0xbU))),32);
    bufp->fullIData(oldp+54,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x15U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 0xbU))),32);
    bufp->fullSData(oldp+55,((0x3ffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                        >> 1U))),10);
    bufp->fullBit(oldp+56,((1U & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])));
    bufp->fullIData(oldp+57,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
    bufp->fullCData(oldp+58,((7U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    >> 0x17U))),3);
    bufp->fullCData(oldp+59,((0x7fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                       >> 4U))),7);
    bufp->fullCData(oldp+60,((0x7fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0xbU))),7);
    bufp->fullCData(oldp+61,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+62,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+64,(((1U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__tb_branch_predictor__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                               : ((1U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? vlSymsp->TOP__tb_branch_predictor__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                   : ((4U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          >> 0xaU)))) 
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 1U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x12U))))
                                       : ((5U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                              >> 0xaU)))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 7U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                        << 1U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0x12U)))))
                                           : ((3U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? (0xfffff000U 
                                                  & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 0x15U) 
                                                     | (0x1ff000U 
                                                        & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 0xbU))))
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                   >> 0xaU)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0xbU)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x14U)) 
                                                         | (0x7feU 
                                                            & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                               << 1U)))))
                                                   : 0U))))))),32);
    bufp->fullCData(oldp+65,((0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x1aU))),5);
    bufp->fullCData(oldp+66,((0x1fU & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                        << 1U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x1fU)))),5);
    bufp->fullCData(oldp+67,((0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x12U))),5);
    bufp->fullBit(oldp+68,(((0x1cU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1dU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1eU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1fU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x20U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | (0x21U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+69,(((0x19U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1aU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | (0x1bU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+70,((0x17U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+71,((0x18U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+72,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+73,((1U & (IData)((vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+74,((0x1fU & (IData)((vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U)))),5);
    bufp->fullIData(oldp+75,((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullBit(oldp+76,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+77,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+78,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+79,((((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                             & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                >> (0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x1aU)))) 
                            | (((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 1U) 
                                                | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x1fU))))) 
                               | ((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                  & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x12U))))))));
    bufp->fullIData(oldp+80,(((IData)(4U) + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    bufp->fullSData(oldp+81,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_idx_fe),10);
    bufp->fullBit(oldp+82,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE));
    bufp->fullCData(oldp+83,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__bhr_fe),8);
    bufp->fullSData(oldp+84,((0x3ffU & vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])),10);
    bufp->fullBit(oldp+85,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                  >> 0xbU))));
    bufp->fullBit(oldp+86,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                  >> 0xaU))));
    bufp->fullBit(oldp+87,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb_hit));
    bufp->fullIData(oldp+88,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__target_btb_pred),32);
    bufp->fullBit(oldp+89,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__is_btb_valid));
    bufp->fullIData(oldp+90,(((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb_hit)
                               ? vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__target_btb_pred
                               : ((IData)(4U) + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))),32);
    __Vtemp_h73675278__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_idx_fe)) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb_hit)
                                                               ? vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__target_btb_pred
                                                               : 
                                                              ((IData)(4U) 
                                                               + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))))));
    __Vtemp_h73675278__0[1U] = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 << 0xbU) | (IData)(
                                                    ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_idx_fe)) 
                                                       << 0x21U) 
                                                      | (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb_hit)
                                                                             ? vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__target_btb_pred
                                                                             : 
                                                                            ((IData)(4U) 
                                                                             + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))))) 
                                                     >> 0x20U)));
    __Vtemp_h73675278__0[2U] = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0x15U) | (((IData)(4U) 
                                               + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                              << 0xbU));
    __Vtemp_h73675278__0[3U] = ((((IData)(4U) + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x15U) | ((IData)(
                                                      (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                              << 0xbU));
    __Vtemp_h73675278__0[4U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x15U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 0xbU));
    __Vtemp_h73675278__0[5U] = (((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__valid_FE) 
                                 << 0xbU) | ((IData)(
                                                     ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                      >> 0x20U)) 
                                             >> 0x15U));
    bufp->fullWData(oldp+91,(__Vtemp_h73675278__0),172);
    bufp->fullIData(oldp+97,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                               << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                            >> 0xcU))),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U]),32);
    bufp->fullIData(oldp+100,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                     >> 0xaU))),32);
    bufp->fullCData(oldp+101,((0xffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))),8);
    bufp->fullIData(oldp+102,((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                               >> 0xaU)),22);
    bufp->fullCData(oldp+103,((0xffU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                        >> 2U))),8);
    bufp->fullIData(oldp+104,((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                               >> 0xaU)),22);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht__DOT__i),32);
    bufp->fullBit(oldp+107,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                   >> 0xeU))));
    __Vtemp_hae8cb829__0[0U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 << 6U) | (0x3fU & 
                                           vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U]));
    __Vtemp_hae8cb829__0[1U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__dmem
                                                           [
                                                           (0x3fffU 
                                                            & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                               >> 0xaU))])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                              << 0x18U) 
                                                             | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                >> 8U)))))) 
                                 >> 0x1aU) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__dmem
                                                                         [
                                                                         (0x3fffU 
                                                                          & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                             >> 0xaU))])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                            << 0x18U) 
                                                                           | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                              >> 8U))))) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_hae8cb829__0[2U] = (((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                  >> 2U))) 
                                | ((IData)(((((QData)((IData)(
                                                              vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__dmem
                                                              [
                                                              (0x3fffU 
                                                               & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                  >> 0xaU))])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                 << 0x18U) 
                                                                | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                   >> 8U))))) 
                                            >> 0x20U)) 
                                   >> 0x1aU));
    __Vtemp_hae8cb829__0[3U] = ((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                  >> 2U))));
    __Vtemp_hae8cb829__0[4U] = ((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                          >> 2U)) | 
                                ((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                  << 0x1eU) | (0x3fffffc0U 
                                               & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                  >> 2U))));
    __Vtemp_hae8cb829__0[5U] = ((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                          >> 2U)) | 
                                (0x1fc0U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                            >> 2U)));
    bufp->fullWData(oldp+108,(__Vtemp_hae8cb829__0),173);
    bufp->fullCData(oldp+114,((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+115,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+116,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+117,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullBit(oldp+118,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullIData(oldp+119,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+120,((0x1fU & vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+121,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullIData(oldp+122,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullBit(oldp+124,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 6U))));
    __Vtemp_h6a6e56b2__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0xbU)));
    __Vtemp_h6a6e56b2__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h6a6e56b2__0[2U] = (((IData)((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              << 0xbU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                >> 0x15U)))) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    __Vtemp_h6a6e56b2__0[3U] = (((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x13U) | (0x7c000U 
                                               & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0xdU))) 
                                | (((IData)((0x3fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                 << 0xbU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                   >> 0x15U)))) 
                                    >> 0x18U) | ((IData)(
                                                         ((0x3fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0xbU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 >> 0x15U))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp_h6a6e56b2__0[4U] = ((0x3fffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xdU)) 
                                | ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                    << 0x13U) | (0x7c000U 
                                                 & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xdU))));
    __Vtemp_h6a6e56b2__0[5U] = ((0x3fffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                            >> 0xdU)) 
                                | (0x4000U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                              >> 0xdU)));
    bufp->fullWData(oldp+125,(__Vtemp_h6a6e56b2__0),175);
    bufp->fullBit(oldp+131,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                   >> 0x1bU))));
    bufp->fullIData(oldp+132,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                << 5U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x1bU))),32);
    bufp->fullCData(oldp+133,((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x15U))),6);
    bufp->fullBit(oldp+134,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_cond_AGEX));
    bufp->fullBit(oldp+135,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+136,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+137,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+138,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+139,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x10U))));
    bufp->fullCData(oldp+140,((0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0xbU))),5);
    bufp->fullIData(oldp+141,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                << 0xbU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x15U))),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX),32);
    bufp->fullSData(oldp+144,((0x3ffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                         >> 1U))),10);
    bufp->fullBit(oldp+145,((1U & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])));
    bufp->fullIData(oldp+146,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
    bufp->fullBit(oldp+147,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__branch_resolved_AGEX));
    bufp->fullBit(oldp+148,((1U & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                    >> 0x13U) | (IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_cond_AGEX)))));
    bufp->fullIData(oldp+149,(((0x100000U & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])
                                ? vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__VdfgExtracted_h7fcc4370__0
                                : vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_target_AGEX)),32);
    bufp->fullBit(oldp+150,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+151,((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+152,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+153,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+154,((0x1fU & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+156,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+157,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    __Vtemp_h3dc83197__0[0U] = ((1U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSymsp->TOP__tb_branch_predictor__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                 : ((1U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSymsp->TOP__tb_branch_predictor__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                     : ((4U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                            >> 0xaU)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 1U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x12U))))
                                         : ((5U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                >> 0xaU)))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 7U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          << 1U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x12U)))))
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     << 0x15U) 
                                                    | (0x1ff000U 
                                                       & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0xbU))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  >> 0xaU)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0xbU)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x14U)) 
                                                        | (0x7feU 
                                                           & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                              << 1U)))))
                                                  : 0U))))));
    __Vtemp_ha70bf0d9__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x1cU 
                                                           == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x1dU 
                                                              == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1eU 
                                                                 == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x1fU 
                                                                    == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x20U 
                                                                       == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | (0x21U 
                                                                         == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x12U)))) 
                                                        << 0x2bU) 
                                                       | (0x7ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))));
    __Vtemp_ha70bf0d9__0[1U] = ((__Vtemp_h3dc83197__0[0U] 
                                 << 0x15U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0x1cU 
                                                                          == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | ((0x1dU 
                                                                             == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1eU 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x1fU 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x21U 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           ((0x19U 
                                                                             == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1aU 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | (0x1bU 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              (0x17U 
                                                                               == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x12U)))) 
                                                                       << 0x2bU) 
                                                                      | (0x7ffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hc6d21e64__0[0U] = __Vtemp_ha70bf0d9__0[0U];
    __Vtemp_hc6d21e64__0[1U] = __Vtemp_ha70bf0d9__0[1U];
    __Vtemp_hc6d21e64__0[2U] = ((__Vtemp_h3dc83197__0[0U] 
                                 >> 0xbU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 1U) 
                                                  | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x1fU)))] 
                                             << 0x15U));
    __Vtemp_hc6d21e64__0[3U] = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 1U) 
                                            | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x1fU)))] 
                                 >> 0xbU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                         << 0x15U) 
                                                                        | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                           >> 0xbU)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x1aU))])))) 
                                             << 0x15U));
    __Vtemp_hc6d21e64__0[4U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                             << 0x15U) 
                                                            | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                               >> 0xbU)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0x1aU))])))) 
                                 >> 0xbU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                          << 0x15U) 
                                                                         | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                            >> 0xbU)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x1aU))]))) 
                                                      >> 0x20U)) 
                                             << 0x15U));
    __Vtemp_hc6d21e64__0[5U] = ((0xf8000000U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x15U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                              << 0x15U) 
                                                                             | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                >> 0xbU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1aU))]))) 
                                                          >> 0x20U)) 
                                                 >> 0xbU)));
    __Vtemp_hc6d21e64__0[6U] = (((0x7ff0000U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xf8000000U 
                                                  & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_hc6d21e64__0[7U] = (((0x7ff0000U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x10U)) | (0xf8000000U 
                                                  & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x10U)));
    __Vtemp_hc6d21e64__0[8U] = (((0x7ff0000U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    >> 0x10U)) | (0x8000000U 
                                                  & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     << 0x10U)));
    bufp->fullWData(oldp+158,(__Vtemp_hc6d21e64__0),284);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 0x1aU))]),32);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          << 1U) | 
                                         (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x1fU)))]),32);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+178,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+179,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+184,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+185,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+187,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+202,(vlSelf->clk));
    bufp->fullBit(oldp+203,(vlSelf->reset));
    bufp->fullIData(oldp+204,(vlSelf->pc),32);
    bufp->fullIData(oldp+205,(vlSelf->fetch_inst),32);
    bufp->fullIData(oldp+206,(vlSelf->fetch_id),32);
    bufp->fullBit(oldp+207,(vlSelf->redirect));
    bufp->fullBit(oldp+208,(vlSelf->stall));
    bufp->fullIData(oldp+209,(vlSelf->gp),32);
    bufp->fullIData(oldp+210,(vlSelf->inst),32);
    bufp->fullIData(oldp+211,(vlSelf->branch_pc),32);
    bufp->fullIData(oldp+212,(vlSelf->branch_id),32);
    bufp->fullIData(oldp+213,(vlSelf->operand1),32);
    bufp->fullIData(oldp+214,(vlSelf->operand2),32);
    bufp->fullBit(oldp+215,(vlSelf->branch_flag));
    bufp->fullIData(oldp+216,(vlSelf->actual_pc),32);
    bufp->fullIData(oldp+217,(vlSelf->branches),32);
    bufp->fullIData(oldp+218,(vlSelf->correct),32);
    bufp->fullIData(oldp+219,(vlSelf->retired_inst),32);
    bufp->fullIData(oldp+220,(vlSelf->retired_pc),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.branch_count),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.correct_branch_count),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+264,(0U));
    bufp->fullBit(oldp+265,(0U));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__valid_FE));
    bufp->fullIData(oldp+267,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
    bufp->fullBit(oldp+268,(1U));
}
