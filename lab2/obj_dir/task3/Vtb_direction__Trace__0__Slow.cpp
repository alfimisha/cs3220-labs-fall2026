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
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"reset", false,-1);
    tracep->declBus(c+170,"pc", false,-1, 31,0);
    tracep->declBus(c+171,"fetch_inst", false,-1, 31,0);
    tracep->declBus(c+172,"fetch_id", false,-1, 31,0);
    tracep->declBus(c+173,"gp", false,-1, 31,0);
    tracep->declBit(c+174,"redirect", false,-1);
    tracep->declBit(c+175,"stall", false,-1);
    tracep->declBus(c+176,"inst", false,-1, 31,0);
    tracep->declBus(c+177,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+178,"branch_id", false,-1, 31,0);
    tracep->declBus(c+179,"operand1", false,-1, 31,0);
    tracep->declBus(c+180,"operand2", false,-1, 31,0);
    tracep->declBit(c+181,"branch_flag", false,-1);
    tracep->declBus(c+182,"actual_pc", false,-1, 31,0);
    tracep->declBus(c+183,"retired_inst", false,-1, 31,0);
    tracep->declBus(c+184,"history", false,-1, 7,0);
    tracep->declBus(c+185,"fetch_index", false,-1, 7,0);
    tracep->declBus(c+186,"write_index", false,-1, 7,0);
    tracep->declBit(c+187,"prediction", false,-1);
    tracep->declBit(c+188,"bhr_write", false,-1);
    tracep->declBit(c+189,"pht_write", false,-1);
    tracep->declBit(c+190,"pht_data", false,-1);
    tracep->declBus(c+191,"bhr_data", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"reset", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"fetch_inst", false,-1, 31,0);
    tracep->declBus(c+3,"fetch_id", false,-1, 31,0);
    tracep->declBus(c+192,"gp", false,-1, 31,0);
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
    tracep->declBus(c+235,"history", false,-1, 7,0);
    tracep->declBus(c+236,"fetch_index", false,-1, 7,0);
    tracep->declBus(c+237,"write_index", false,-1, 7,0);
    tracep->declBit(c+238,"prediction", false,-1);
    tracep->declBit(c+239,"bhr_write", false,-1);
    tracep->declBit(c+240,"pht_write", false,-1);
    tracep->declBit(c+241,"pht_data", false,-1);
    tracep->declBus(c+242,"bhr_data", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"reset", false,-1);
    tracep->declBus(c+14,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+15,"FE_latch_out", false,-1, 128,0);
    tracep->declArray(c+20,"DE_latch_out", false,-1, 240,0);
    tracep->declArray(c+28,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+34,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+40,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+243,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+244,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+42,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+243,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+43,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+243,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+244,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+244,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"reset", false,-1);
    tracep->declArray(c+15,"from_FE_latch", false,-1, 128,0);
    tracep->declBus(c+42,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+243,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+43,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+20,"DE_latch_out", false,-1, 240,0);
    tracep->declArray(c+20,"DE_latch", false,-1, 240,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+135+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+45,"valid_DE", false,-1);
    tracep->declBus(c+46,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+47,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+48,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+49,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+125,"DE_latch_contents", false,-1, 240,0);
    tracep->declBus(c+50,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+51,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+52,"op_DE", false,-1, 6,0);
    tracep->declBus(c+53,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+54,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+55,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+56,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBus(c+57,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+58,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+59,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+133,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+134,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+60,"is_br_DE", false,-1);
    tracep->declBit(c+61,"is_jmp_DE", false,-1);
    tracep->declBit(c+62,"rd_mem_DE", false,-1);
    tracep->declBit(c+63,"wr_mem_DE", false,-1);
    tracep->declBit(c+64,"wr_reg_DE", false,-1);
    tracep->declBit(c+65,"wr_reg_WB", false,-1);
    tracep->declBus(c+66,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+67,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+5,"pipeline_stall_DE", false,-1);
    tracep->declBit(c+68,"use_rs1_DE", false,-1);
    tracep->declBit(c+69,"use_rs2_DE", false,-1);
    tracep->declBus(c+70,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+71,"has_data_hazards", false,-1);
    tracep->declBit(c+42,"br_mispred_AGEX", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"reset", false,-1);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declQuad(c+40,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+243,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+244,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+15,"FE_latch_out", false,-1, 128,0);
    tracep->declArray(c+15,"FE_latch", false,-1, 128,0);
    tracep->declBit(c+245,"valid_FE", false,-1);
    tracep->declBus(c+1,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+3,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+246,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+2,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+72,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+5,"stall_pipe_FE", false,-1);
    tracep->declArray(c+73,"FE_latch_contents", false,-1, 128,0);
    tracep->declBit(c+4,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+78,"br_target_AGEX", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"reset", false,-1);
    tracep->declBus(c+244,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+28,"from_AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+34,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+243,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+243,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+243,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+34,"MEM_latch", false,-1, 172,0);
    tracep->declBit(c+79,"valid_MEM", false,-1);
    tracep->declArray(c+80,"MEM_latch_contents", false,-1, 172,0);
    tracep->declBus(c+86,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+87,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+88,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+89,"PC_MEM", false,-1, 31,0);
    tracep->declBit(c+90,"rd_mem_MEM", false,-1);
    tracep->declBus(c+91,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+92,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+93,"wr_reg_MEM", false,-1);
    tracep->declBus(c+94,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+95,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+91,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+96,"wr_mem_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_AGEX_stage__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_AGEX_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"reset", false,-1);
    tracep->declBus(c+243,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+244,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+20,"from_DE_latch", false,-1, 240,0);
    tracep->declArray(c+28,"AGEX_latch_out", false,-1, 174,0);
    tracep->declQuad(c+40,"from_AGEX_to_FE", false,-1, 32,0);
    tracep->declBus(c+42,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+28,"AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+97,"AGEX_latch_contents", false,-1, 174,0);
    tracep->declBit(c+103,"valid_AGEX", false,-1);
    tracep->declBus(c+6,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+7,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+8,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+104,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+105,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+106,"br_cond_AGEX", false,-1);
    tracep->declBit(c+107,"is_br_AGEX", false,-1);
    tracep->declBit(c+108,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+109,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+110,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+111,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+112,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+9,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+10,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+113,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+114,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+115,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+12,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+42,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+193,"branch_count", false,-1, 31,0);
    tracep->declBus(c+194,"correct_branch_count", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_WB_stage__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+168,"clk", false,-1);
    tracep->declBit(c+169,"reset", false,-1);
    tracep->declArray(c+34,"from_MEM_latch", false,-1, 172,0);
    tracep->declBus(c+243,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+43,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+243,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+243,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+116,"valid_WB", false,-1);
    tracep->declBus(c+117,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+13,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+118,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+119,"inst_count_WB", false,-1, 31,0);
    tracep->declBit(c+120,"wr_reg_WB", false,-1);
    tracep->declBus(c+121,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+122,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+123,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+124,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+195,"[0]", false,-1, 31,0);
    tracep->declBus(c+196,"[1]", false,-1, 31,0);
    tracep->declBus(c+197,"[2]", false,-1, 31,0);
    tracep->declBus(c+198,"[3]", false,-1, 31,0);
    tracep->declBus(c+199,"[4]", false,-1, 31,0);
    tracep->declBus(c+200,"[5]", false,-1, 31,0);
    tracep->declBus(c+201,"[6]", false,-1, 31,0);
    tracep->declBus(c+202,"[7]", false,-1, 31,0);
    tracep->declBus(c+203,"[8]", false,-1, 31,0);
    tracep->declBus(c+204,"[9]", false,-1, 31,0);
    tracep->declBus(c+205,"[10]", false,-1, 31,0);
    tracep->declBus(c+206,"[11]", false,-1, 31,0);
    tracep->declBus(c+207,"[12]", false,-1, 31,0);
    tracep->declBus(c+208,"[13]", false,-1, 31,0);
    tracep->declBus(c+209,"[14]", false,-1, 31,0);
    tracep->declBus(c+210,"[15]", false,-1, 31,0);
    tracep->declBus(c+211,"[16]", false,-1, 31,0);
    tracep->declBus(c+212,"[17]", false,-1, 31,0);
    tracep->declBus(c+213,"[18]", false,-1, 31,0);
    tracep->declBus(c+214,"[19]", false,-1, 31,0);
    tracep->declBus(c+215,"[20]", false,-1, 31,0);
    tracep->declBus(c+216,"[21]", false,-1, 31,0);
    tracep->declBus(c+217,"[22]", false,-1, 31,0);
    tracep->declBus(c+218,"[23]", false,-1, 31,0);
    tracep->declBus(c+219,"[24]", false,-1, 31,0);
    tracep->declBus(c+220,"[25]", false,-1, 31,0);
    tracep->declBus(c+221,"[26]", false,-1, 31,0);
    tracep->declBus(c+222,"[27]", false,-1, 31,0);
    tracep->declBus(c+223,"[28]", false,-1, 31,0);
    tracep->declBus(c+224,"[29]", false,-1, 31,0);
    tracep->declBus(c+225,"[30]", false,-1, 31,0);
    tracep->declBus(c+226,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+227,"[0]", false,-1, 31,0);
    tracep->declBus(c+228,"[1]", false,-1, 31,0);
    tracep->declBus(c+229,"[2]", false,-1, 31,0);
    tracep->declBus(c+230,"[3]", false,-1, 31,0);
    tracep->declBus(c+231,"[4]", false,-1, 31,0);
    tracep->declBus(c+232,"[5]", false,-1, 31,0);
    tracep->declBus(c+233,"[6]", false,-1, 31,0);
    tracep->declBus(c+234,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+167,"i", false,-1, 31,0);
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
    VlWide<5>/*159:0*/ __Vtemp_h99e60b3d__0;
    VlWide<6>/*191:0*/ __Vtemp_hbae848de__0;
    VlWide<6>/*191:0*/ __Vtemp_hfec0d78f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1e61c6f__0;
    VlWide<5>/*159:0*/ __Vtemp_h24201529__0;
    VlWide<8>/*255:0*/ __Vtemp_h2f2e985e__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    bufp->fullBit(oldp+4,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                         >> 0x20U)))));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE));
    bufp->fullIData(oldp+6,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                              << 0x10U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0x10U))),32);
    bufp->fullIData(oldp+7,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                              << 0x10U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x10U))),32);
    bufp->fullIData(oldp+8,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              << 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0xaU))),32);
    bufp->fullIData(oldp+9,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                              << 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0xaU))),32);
    bufp->fullIData(oldp+10,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0xaU))),32);
    bufp->fullBit(oldp+11,((IData)((0U != (0x300U & 
                                           vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
    bufp->fullIData(oldp+12,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_target_AGEX),32);
    bufp->fullIData(oldp+13,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                               << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                            >> 0xcU))),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__tb_direction__dut.__PVT__cycle_count),32);
    bufp->fullWData(oldp+15,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch),129);
    bufp->fullWData(oldp+20,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch),241);
    bufp->fullWData(oldp+28,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch),175);
    bufp->fullWData(oldp+34,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch),173);
    bufp->fullQData(oldp+40,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE),33);
    bufp->fullBit(oldp+42,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+43,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE),38);
    bufp->fullBit(oldp+45,((1U & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U])));
    bufp->fullIData(oldp+46,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U]),32);
    bufp->fullIData(oldp+47,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U]),32);
    bufp->fullIData(oldp+48,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U]),32);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
    bufp->fullCData(oldp+50,((7U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+51,((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+52,((0x7fU & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U])),7);
    bufp->fullCData(oldp+53,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+54,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+56,(((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                               : ((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                   : ((4U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1fU))) 
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 7U))))
                                       : ((5U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 7U)))))
                                           : ((3U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? (0xfffff000U 
                                                  & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U])
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U]) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x14U)))))
                                                   : 0U))))))),32);
    bufp->fullCData(oldp+57,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+58,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+59,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 7U))),5);
    bufp->fullBit(oldp+60,(((0x1cU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1dU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1eU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1fU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x20U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | (0x21U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+61,(((0x19U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1aU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | (0x1bU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+62,((0x17U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+63,((0x18U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+65,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+66,((0x1fU & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U)))),5);
    bufp->fullIData(oldp+67,((IData)(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullBit(oldp+68,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+70,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+71,((((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                             & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                >> (0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0xfU)))) 
                            | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x14U)))) 
                               | ((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 7U))))))));
    bufp->fullIData(oldp+72,(((IData)(4U) + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    __Vtemp_h99e60b3d__0[0U] = vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vtemp_h99e60b3d__0[1U] = ((IData)(4U) + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch);
    __Vtemp_h99e60b3d__0[2U] = (IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))));
    __Vtemp_h99e60b3d__0[3U] = (IData)(((((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                        >> 0x20U));
    __Vtemp_h99e60b3d__0[4U] = vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__valid_FE;
    bufp->fullWData(oldp+73,(__Vtemp_h99e60b3d__0),129);
    bufp->fullIData(oldp+78,((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE)),32);
    bufp->fullBit(oldp+79,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
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
    bufp->fullWData(oldp+80,(__Vtemp_hbae848de__0),173);
    bufp->fullCData(oldp+86,((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                       >> 8U))),6);
    bufp->fullIData(oldp+87,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                               << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+88,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                               << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                            >> 0xeU))),32);
    bufp->fullIData(oldp+89,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                               << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                            >> 0xeU))),32);
    bufp->fullBit(oldp+90,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                  >> 7U))));
    bufp->fullIData(oldp+91,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                               << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                            >> 8U))),32);
    bufp->fullCData(oldp+92,((0x1fU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+93,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                  >> 5U))));
    bufp->fullIData(oldp+94,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                               << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                            >> 8U))),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__dmem
                             [(0x3fffU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                          >> 0xaU))]),32);
    bufp->fullBit(oldp+96,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                  >> 6U))));
    __Vtemp_hfec0d78f__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U]));
    __Vtemp_hfec0d78f__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_hfec0d78f__0[2U] = (((IData)((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                              << 0x16U) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                >> 0xaU)))) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    __Vtemp_hfec0d78f__0[3U] = (((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 0x1eU) | (0x3fffc000U 
                                               & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                  >> 2U))) 
                                | (((IData)((0x3fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                   >> 0xaU)))) 
                                    >> 0x18U) | ((IData)(
                                                         ((0x3fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                               << 0x16U) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U])) 
                                                                 >> 0xaU))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp_hfec0d78f__0[4U] = ((0x3fffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                            >> 2U)) 
                                | ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                    << 0x1eU) | (0x3fffc000U 
                                                 & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                    >> 2U))));
    __Vtemp_hfec0d78f__0[5U] = ((0x3fffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 2U)) 
                                | (0x4000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                              >> 2U)));
    bufp->fullWData(oldp+97,(__Vtemp_hfec0d78f__0),175);
    bufp->fullBit(oldp+103,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                   >> 0x10U))));
    bufp->fullIData(oldp+104,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                << 0x10U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x10U))),32);
    bufp->fullCData(oldp+105,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                        >> 0xaU))),6);
    bufp->fullBit(oldp+106,(((0x1cU == (0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                 >> 0xaU)))
                              ? (((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                >> 0xaU)) 
                                 == ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0xaU)))
                              : ((0x1dU == (0x3fU & 
                                            (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0xaU)))
                                  ? (((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       << 0x16U) | 
                                      (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0xaU)) != 
                                     ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0x16U) | 
                                      (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0xaU))) : 
                                 ((0x1eU == (0x3fU 
                                             & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0xaU)))
                                   ? (IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__VdfgExtracted_h047d73e2__0)
                                   : ((0x1fU == (0x3fU 
                                                 & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                    >> 0xaU)))
                                       ? VL_GTES_III(32, 
                                                     ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0x16U) 
                                                      | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0xaU)), 
                                                     ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 0x16U) 
                                                      | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 0xaU)))
                                       : ((0x20U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0xaU)))
                                           ? (IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__VdfgExtracted_h048118d3__0)
                                           : (IData)(
                                                     ((0x8400U 
                                                       == 
                                                       (0xfc00U 
                                                        & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                      & (((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                           << 0x16U) 
                                                          | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                             >> 0xaU)) 
                                                         >= 
                                                         ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                           << 0x16U) 
                                                          | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                             >> 0xaU))))))))))));
    bufp->fullBit(oldp+107,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 9U))));
    bufp->fullBit(oldp+108,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 8U))));
    bufp->fullBit(oldp+109,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+110,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+111,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+112,((0x1fU & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U])),5);
    bufp->fullIData(oldp+113,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0xaU))),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX),32);
    bufp->fullBit(oldp+116,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+117,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+118,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+119,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+120,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+121,((0x1fU & vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+122,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+123,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+124,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    __Vtemp_ha1e61c6f__0[0U] = ((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                 : ((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                     : ((4U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x1fU))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     >> 7U))))
                                         : ((5U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 7U)))))
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U])
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U]) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                            >> 9U)) 
                                                        | (0x7feU 
                                                           & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x14U)))))
                                                  : 0U))))));
    __Vtemp_h24201529__0[0U] = ((__Vtemp_ha1e61c6f__0[0U] 
                                 << 0xaU) | ((((0x1cU 
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
                                              << 9U) 
                                             | ((((0x19U 
                                                   == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                  | ((0x1aU 
                                                      == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | (0x1bU 
                                                        == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                 << 8U) 
                                                | (((0x17U 
                                                     == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    << 7U) 
                                                   | (((0x18U 
                                                        == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       << 6U) 
                                                      | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                          << 5U) 
                                                         | (0x1fU 
                                                            & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                               >> 7U))))))));
    __Vtemp_h2f2e985e__0[0U] = __Vtemp_h24201529__0[0U];
    __Vtemp_h2f2e985e__0[1U] = ((__Vtemp_ha1e61c6f__0[0U] 
                                 >> 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                              [(0x1fU 
                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x14U))] 
                                              << 0xaU));
    __Vtemp_h2f2e985e__0[2U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x14U))] 
                                 >> 0x16U) | ((IData)(
                                                      (((QData)((IData)(
                                                                        vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0xfU))])))) 
                                              << 0xaU));
    __Vtemp_h2f2e985e__0[3U] = (((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0xfU))])))) 
                                 >> 0x16U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                                          [
                                                                          (0x1fU 
                                                                           & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0xfU))]))) 
                                                       >> 0x20U)) 
                                              << 0xaU));
    __Vtemp_h2f2e985e__0[4U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                 << 0x10U) | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE) 
                                               << 0xaU) 
                                              | ((IData)(
                                                         ((((QData)((IData)(
                                                                            vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0xfU))]))) 
                                                          >> 0x20U)) 
                                                 >> 0x16U)));
    __Vtemp_h2f2e985e__0[5U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                 >> 0x10U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                              << 0x10U));
    __Vtemp_h2f2e985e__0[6U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                 >> 0x10U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              << 0x10U));
    __Vtemp_h2f2e985e__0[7U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 >> 0x10U) | (0x10000U 
                                              & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 0x10U)));
    bufp->fullWData(oldp+125,(__Vtemp_h2f2e985e__0),241);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+136,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+137,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+138,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+139,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+140,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+142,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+145,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+146,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+148,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+149,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+150,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+151,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+157,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+158,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+159,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+160,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+161,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+168,(vlSelf->clk));
    bufp->fullBit(oldp+169,(vlSelf->reset));
    bufp->fullIData(oldp+170,(vlSelf->pc),32);
    bufp->fullIData(oldp+171,(vlSelf->fetch_inst),32);
    bufp->fullIData(oldp+172,(vlSelf->fetch_id),32);
    bufp->fullIData(oldp+173,(vlSelf->gp),32);
    bufp->fullBit(oldp+174,(vlSelf->redirect));
    bufp->fullBit(oldp+175,(vlSelf->stall));
    bufp->fullIData(oldp+176,(vlSelf->inst),32);
    bufp->fullIData(oldp+177,(vlSelf->branch_pc),32);
    bufp->fullIData(oldp+178,(vlSelf->branch_id),32);
    bufp->fullIData(oldp+179,(vlSelf->operand1),32);
    bufp->fullIData(oldp+180,(vlSelf->operand2),32);
    bufp->fullBit(oldp+181,(vlSelf->branch_flag));
    bufp->fullIData(oldp+182,(vlSelf->actual_pc),32);
    bufp->fullIData(oldp+183,(vlSelf->retired_inst),32);
    bufp->fullCData(oldp+184,(vlSelf->history),8);
    bufp->fullCData(oldp+185,(vlSelf->fetch_index),8);
    bufp->fullCData(oldp+186,(vlSelf->write_index),8);
    bufp->fullBit(oldp+187,(vlSelf->prediction));
    bufp->fullBit(oldp+188,(vlSelf->bhr_write));
    bufp->fullBit(oldp+189,(vlSelf->pht_write));
    bufp->fullBit(oldp+190,(vlSelf->pht_data));
    bufp->fullIData(oldp+191,(vlSelf->bhr_data),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.branch_count),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.correct_branch_count),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+210,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+211,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+212,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[7U]),32);
    bufp->fullCData(oldp+235,(vlSymsp->TOP__tb_direction.history),8);
    bufp->fullCData(oldp+236,(vlSymsp->TOP__tb_direction.fetch_index),8);
    bufp->fullCData(oldp+237,(vlSymsp->TOP__tb_direction.write_index),8);
    bufp->fullBit(oldp+238,(vlSymsp->TOP__tb_direction.prediction));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__tb_direction.bhr_write));
    bufp->fullBit(oldp+240,(vlSymsp->TOP__tb_direction.pht_write));
    bufp->fullBit(oldp+241,(vlSymsp->TOP__tb_direction.pht_data));
    bufp->fullIData(oldp+242,(vlSymsp->TOP__tb_direction.bhr_data),32);
    bufp->fullBit(oldp+243,(0U));
    bufp->fullBit(oldp+244,(0U));
    bufp->fullBit(oldp+245,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__valid_FE));
    bufp->fullIData(oldp+246,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
}
