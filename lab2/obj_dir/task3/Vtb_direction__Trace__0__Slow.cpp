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
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declBus(c+252,"pc", false,-1, 31,0);
    tracep->declBus(c+253,"fetch_inst", false,-1, 31,0);
    tracep->declBus(c+254,"fetch_id", false,-1, 31,0);
    tracep->declBus(c+255,"gp", false,-1, 31,0);
    tracep->declBit(c+256,"redirect", false,-1);
    tracep->declBit(c+257,"stall", false,-1);
    tracep->declBus(c+258,"inst", false,-1, 31,0);
    tracep->declBus(c+259,"branch_pc", false,-1, 31,0);
    tracep->declBus(c+260,"branch_id", false,-1, 31,0);
    tracep->declBus(c+261,"operand1", false,-1, 31,0);
    tracep->declBus(c+262,"operand2", false,-1, 31,0);
    tracep->declBit(c+263,"branch_flag", false,-1);
    tracep->declBus(c+264,"actual_pc", false,-1, 31,0);
    tracep->declBus(c+265,"retired_inst", false,-1, 31,0);
    tracep->declBus(c+266,"history", false,-1, 7,0);
    tracep->declBus(c+267,"fetch_index", false,-1, 7,0);
    tracep->declBus(c+268,"write_index", false,-1, 7,0);
    tracep->declBit(c+269,"prediction", false,-1);
    tracep->declBit(c+270,"bhr_write", false,-1);
    tracep->declBit(c+271,"pht_write", false,-1);
    tracep->declBit(c+272,"pht_data", false,-1);
    tracep->declBus(c+273,"bhr_data", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declBus(c+1,"pc", false,-1, 31,0);
    tracep->declBus(c+2,"fetch_inst", false,-1, 31,0);
    tracep->declBus(c+3,"fetch_id", false,-1, 31,0);
    tracep->declBus(c+274,"gp", false,-1, 31,0);
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
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declBus(c+21,"cycle_count", false,-1, 31,0);
    tracep->declArray(c+22,"FE_latch_out", false,-1, 169,0);
    tracep->declArray(c+28,"DE_latch_out", false,-1, 281,0);
    tracep->declArray(c+37,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+43,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+49,"from_AGEX_to_FE", false,-1, 106,0);
    tracep->declBus(c+317,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+318,"from_WB_to_FE", false,-1, 0,0);
    tracep->declBus(c+53,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+317,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+54,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+317,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+318,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+318,"from_WB_to_MEM", false,-1, 0,0);
    tracep->pushNamePrefix("my_DE_stage ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declArray(c+22,"from_FE_latch", false,-1, 169,0);
    tracep->declBus(c+53,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declBus(c+317,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declQuad(c+54,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+28,"DE_latch_out", false,-1, 281,0);
    tracep->declArray(c+28,"DE_latch", false,-1, 281,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+217+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBit(c+56,"valid_DE", false,-1);
    tracep->declBus(c+57,"inst_DE", false,-1, 31,0);
    tracep->declBus(c+58,"PC_DE", false,-1, 31,0);
    tracep->declBus(c+59,"pcplus_DE", false,-1, 31,0);
    tracep->declBus(c+60,"inst_count_DE", false,-1, 31,0);
    tracep->declArray(c+206,"DE_latch_contents", false,-1, 281,0);
    tracep->declBus(c+61,"pht_idx_DE", false,-1, 7,0);
    tracep->declBit(c+62,"pht_prediction_DE", false,-1);
    tracep->declBus(c+63,"pred_pc_DE", false,-1, 31,0);
    tracep->declBus(c+64,"F3_DE", false,-1, 2,0);
    tracep->declBus(c+65,"F7_DE", false,-1, 6,0);
    tracep->declBus(c+66,"op_DE", false,-1, 6,0);
    tracep->declBus(c+67,"op_I_DE", false,-1, 5,0);
    tracep->declBus(c+68,"type_I_DE", false,-1, 3,0);
    tracep->declBus(c+69,"type_immediate_DE", false,-1, 2,0);
    tracep->declBus(c+70,"sxt_imm_DE", false,-1, 31,0);
    tracep->declBus(c+71,"rs1_DE", false,-1, 4,0);
    tracep->declBus(c+72,"rs2_DE", false,-1, 4,0);
    tracep->declBus(c+73,"rd_DE", false,-1, 4,0);
    tracep->declBus(c+215,"rs1_val_DE", false,-1, 31,0);
    tracep->declBus(c+216,"rs2_val_DE", false,-1, 31,0);
    tracep->declBit(c+74,"is_br_DE", false,-1);
    tracep->declBit(c+75,"is_jmp_DE", false,-1);
    tracep->declBit(c+76,"rd_mem_DE", false,-1);
    tracep->declBit(c+77,"wr_mem_DE", false,-1);
    tracep->declBit(c+78,"wr_reg_DE", false,-1);
    tracep->declBit(c+79,"wr_reg_WB", false,-1);
    tracep->declBus(c+80,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+81,"regval_WB", false,-1, 31,0);
    tracep->declBit(c+5,"pipeline_stall_DE", false,-1);
    tracep->declBit(c+82,"use_rs1_DE", false,-1);
    tracep->declBit(c+83,"use_rs2_DE", false,-1);
    tracep->declBus(c+84,"in_use_regs", false,-1, 31,0);
    tracep->declBit(c+85,"has_data_hazards", false,-1);
    tracep->declBit(c+53,"br_mispred_AGEX", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_FE_stage ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declBus(c+5,"from_DE_to_FE", false,-1, 0,0);
    tracep->declArray(c+49,"from_AGEX_to_FE", false,-1, 106,0);
    tracep->declBus(c+317,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+318,"from_WB_to_FE", false,-1, 0,0);
    tracep->declArray(c+22,"FE_latch_out", false,-1, 169,0);
    tracep->declArray(c+22,"FE_latch", false,-1, 169,0);
    tracep->declBit(c+319,"valid_FE", false,-1);
    tracep->declBus(c+1,"PC_FE_latch", false,-1, 31,0);
    tracep->declBus(c+3,"inst_count_FE", false,-1, 31,0);
    tracep->declBus(c+320,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+2,"inst_FE", false,-1, 31,0);
    tracep->declBus(c+86,"pcplus_FE", false,-1, 31,0);
    tracep->declBit(c+5,"stall_pipe_FE", false,-1);
    tracep->declBus(c+15,"pht_idx_fe", false,-1, 7,0);
    tracep->declBit(c+17,"pht_prediction_FE", false,-1);
    tracep->declBus(c+14,"bhr_fe", false,-1, 7,0);
    tracep->declBus(c+16,"pht_idx_agex", false,-1, 7,0);
    tracep->declBit(c+18,"branch_resolved", false,-1);
    tracep->declBit(c+19,"branch_taken", false,-1);
    tracep->declBit(c+87,"btb_hit", false,-1);
    tracep->declBus(c+88,"target_btb_pred", false,-1, 31,0);
    tracep->declBit(c+89,"is_btb_valid", false,-1);
    tracep->declBus(c+90,"pred_pc_FE", false,-1, 31,0);
    tracep->declArray(c+91,"FE_latch_contents", false,-1, 169,0);
    tracep->declBit(c+4,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+97,"br_target_AGEX", false,-1, 31,0);
    tracep->declBus(c+98,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+99,"btb_target_AGEX", false,-1, 31,0);
    tracep->pushNamePrefix("bhr ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declBit(c+18,"wr_ena", false,-1);
    tracep->declBus(c+20,"wr_data", false,-1, 31,0);
    tracep->declBus(c+14,"out", false,-1, 7,0);
    tracep->pushNamePrefix("bhr_probe ");
    tracep->declBus(c+14,"out", false,-1, 7,0);
    tracep->declBit(c+18,"wr_ena", false,-1);
    tracep->declBus(c+20,"wr_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("btb ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declBit(c+321,"rd_ena", false,-1);
    tracep->declBus(c+1,"rd_sel", false,-1, 31,0);
    tracep->declBus(c+88,"out_data", false,-1, 31,0);
    tracep->declBit(c+89,"outs_valid", false,-1);
    tracep->declBit(c+18,"wr_ena", false,-1);
    tracep->declBus(c+98,"wr_sel", false,-1, 31,0);
    tracep->declBus(c+99,"wr_data", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+100+i*1,"btb_target", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+116+i*1,"btb_tag", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+132+i*1,"btb_valid", true,(i+0));
    }
    tracep->declBus(c+148,"rd_index", false,-1, 3,0);
    tracep->declBus(c+149,"rd_tag", false,-1, 25,0);
    tracep->declBus(c+150,"wr_index", false,-1, 3,0);
    tracep->declBus(c+151,"wr_tag", false,-1, 25,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+152,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pht ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declBus(c+15,"rd_sel", false,-1, 7,0);
    tracep->declBit(c+17,"out", false,-1);
    tracep->declBus(c+16,"wr_sel", false,-1, 7,0);
    tracep->declBit(c+19,"wr_data", false,-1);
    tracep->declBit(c+18,"wr_ena", false,-1);
    tracep->declBus(c+153,"i", false,-1, 31,0);
    tracep->pushNamePrefix("pht_probe ");
    tracep->declBus(c+15,"rd_sel", false,-1, 7,0);
    tracep->declBus(c+16,"wr_sel", false,-1, 7,0);
    tracep->declBit(c+17,"out", false,-1);
    tracep->declBit(c+18,"wr_ena", false,-1);
    tracep->declBit(c+19,"wr_data", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("my_MEM_stage ");
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declBus(c+318,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declArray(c+37,"from_AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+43,"MEM_latch_out", false,-1, 172,0);
    tracep->declBus(c+317,"from_MEM_to_FE", false,-1, 0,0);
    tracep->declBus(c+317,"from_MEM_to_DE", false,-1, 0,0);
    tracep->declBus(c+317,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+43,"MEM_latch", false,-1, 172,0);
    tracep->declBit(c+154,"valid_MEM", false,-1);
    tracep->declArray(c+155,"MEM_latch_contents", false,-1, 172,0);
    tracep->declBus(c+161,"op_I_MEM", false,-1, 5,0);
    tracep->declBus(c+162,"inst_count_MEM", false,-1, 31,0);
    tracep->declBus(c+163,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+164,"PC_MEM", false,-1, 31,0);
    tracep->declBit(c+165,"rd_mem_MEM", false,-1);
    tracep->declBus(c+166,"aluout_MEM", false,-1, 31,0);
    tracep->declBus(c+167,"wregno_MEM", false,-1, 4,0);
    tracep->declBit(c+168,"wr_reg_MEM", false,-1);
    tracep->declBus(c+169,"memaddr_MEM", false,-1, 31,0);
    tracep->declBus(c+170,"rd_val_MEM", false,-1, 31,0);
    tracep->declBus(c+166,"wr_val_MEM", false,-1, 31,0);
    tracep->declBit(c+171,"wr_mem_MEM", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_AGEX_stage__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_AGEX_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declBus(c+317,"from_MEM_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+318,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declArray(c+28,"from_DE_latch", false,-1, 281,0);
    tracep->declArray(c+37,"AGEX_latch_out", false,-1, 174,0);
    tracep->declArray(c+49,"from_AGEX_to_FE", false,-1, 106,0);
    tracep->declBus(c+53,"from_AGEX_to_DE", false,-1, 0,0);
    tracep->declArray(c+37,"AGEX_latch", false,-1, 174,0);
    tracep->declArray(c+172,"AGEX_latch_contents", false,-1, 174,0);
    tracep->declBit(c+178,"valid_AGEX", false,-1);
    tracep->declBus(c+6,"inst_AGEX", false,-1, 31,0);
    tracep->declBus(c+7,"PC_AGEX", false,-1, 31,0);
    tracep->declBus(c+8,"inst_count_AGEX", false,-1, 31,0);
    tracep->declBus(c+179,"pcplus_AGEX", false,-1, 31,0);
    tracep->declBus(c+180,"op_I_AGEX", false,-1, 5,0);
    tracep->declBit(c+181,"br_cond_AGEX", false,-1);
    tracep->declBit(c+182,"is_br_AGEX", false,-1);
    tracep->declBit(c+183,"is_jmp_AGEX", false,-1);
    tracep->declBit(c+184,"rd_mem_AGEX", false,-1);
    tracep->declBit(c+185,"wr_mem_AGEX", false,-1);
    tracep->declBit(c+186,"wr_reg_AGEX", false,-1);
    tracep->declBus(c+187,"wregno_AGEX", false,-1, 4,0);
    tracep->declBus(c+9,"regval1_AGEX", false,-1, 31,0);
    tracep->declBus(c+10,"regval2_AGEX", false,-1, 31,0);
    tracep->declBus(c+188,"sxt_imm_AGEX", false,-1, 31,0);
    tracep->declBus(c+189,"aluout_AGEX", false,-1, 31,0);
    tracep->declBus(c+190,"memaddr_AGEX", false,-1, 31,0);
    tracep->declBus(c+12,"br_target_AGEX", false,-1, 31,0);
    tracep->declBit(c+53,"br_mispred_AGEX", false,-1);
    tracep->declBus(c+191,"pht_idx_AGEX", false,-1, 7,0);
    tracep->declBit(c+192,"pht_prediction_AGEX", false,-1);
    tracep->declBus(c+193,"pred_pc_AGEX", false,-1, 31,0);
    tracep->declBit(c+194,"branch_resolved_AGEX", false,-1);
    tracep->declBit(c+195,"branch_taken_AGEX", false,-1);
    tracep->declBus(c+196,"btb_target_AGEX", false,-1, 31,0);
    tracep->declBus(c+275,"branch_count", false,-1, 31,0);
    tracep->declBus(c+276,"correct_branch_count", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_WB_stage__0(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_init_sub__TOP__tb_direction__dut__my_WB_stage__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+250,"clk", false,-1);
    tracep->declBit(c+251,"reset", false,-1);
    tracep->declArray(c+43,"from_MEM_latch", false,-1, 172,0);
    tracep->declBus(c+317,"from_WB_to_FE", false,-1, 0,0);
    tracep->declQuad(c+54,"from_WB_to_DE", false,-1, 37,0);
    tracep->declBus(c+317,"from_WB_to_AGEX", false,-1, 0,0);
    tracep->declBus(c+317,"from_WB_to_MEM", false,-1, 0,0);
    tracep->declBit(c+197,"valid_WB", false,-1);
    tracep->declBus(c+198,"op_I_WB", false,-1, 5,0);
    tracep->declBus(c+13,"inst_WB", false,-1, 31,0);
    tracep->declBus(c+199,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+200,"inst_count_WB", false,-1, 31,0);
    tracep->declBit(c+201,"wr_reg_WB", false,-1);
    tracep->declBus(c+202,"wregno_WB", false,-1, 4,0);
    tracep->declBus(c+203,"regval_WB", false,-1, 31,0);
    tracep->declBus(c+204,"aluout_WB", false,-1, 31,0);
    tracep->declBus(c+205,"rd_val_WB", false,-1, 31,0);
    tracep->pushNamePrefix("last_WB_value");
    tracep->declBus(c+277,"[0]", false,-1, 31,0);
    tracep->declBus(c+278,"[1]", false,-1, 31,0);
    tracep->declBus(c+279,"[2]", false,-1, 31,0);
    tracep->declBus(c+280,"[3]", false,-1, 31,0);
    tracep->declBus(c+281,"[4]", false,-1, 31,0);
    tracep->declBus(c+282,"[5]", false,-1, 31,0);
    tracep->declBus(c+283,"[6]", false,-1, 31,0);
    tracep->declBus(c+284,"[7]", false,-1, 31,0);
    tracep->declBus(c+285,"[8]", false,-1, 31,0);
    tracep->declBus(c+286,"[9]", false,-1, 31,0);
    tracep->declBus(c+287,"[10]", false,-1, 31,0);
    tracep->declBus(c+288,"[11]", false,-1, 31,0);
    tracep->declBus(c+289,"[12]", false,-1, 31,0);
    tracep->declBus(c+290,"[13]", false,-1, 31,0);
    tracep->declBus(c+291,"[14]", false,-1, 31,0);
    tracep->declBus(c+292,"[15]", false,-1, 31,0);
    tracep->declBus(c+293,"[16]", false,-1, 31,0);
    tracep->declBus(c+294,"[17]", false,-1, 31,0);
    tracep->declBus(c+295,"[18]", false,-1, 31,0);
    tracep->declBus(c+296,"[19]", false,-1, 31,0);
    tracep->declBus(c+297,"[20]", false,-1, 31,0);
    tracep->declBus(c+298,"[21]", false,-1, 31,0);
    tracep->declBus(c+299,"[22]", false,-1, 31,0);
    tracep->declBus(c+300,"[23]", false,-1, 31,0);
    tracep->declBus(c+301,"[24]", false,-1, 31,0);
    tracep->declBus(c+302,"[25]", false,-1, 31,0);
    tracep->declBus(c+303,"[26]", false,-1, 31,0);
    tracep->declBus(c+304,"[27]", false,-1, 31,0);
    tracep->declBus(c+305,"[28]", false,-1, 31,0);
    tracep->declBus(c+306,"[29]", false,-1, 31,0);
    tracep->declBus(c+307,"[30]", false,-1, 31,0);
    tracep->declBus(c+308,"[31]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB_counters");
    tracep->declBus(c+309,"[0]", false,-1, 31,0);
    tracep->declBus(c+310,"[1]", false,-1, 31,0);
    tracep->declBus(c+311,"[2]", false,-1, 31,0);
    tracep->declBus(c+312,"[3]", false,-1, 31,0);
    tracep->declBus(c+313,"[4]", false,-1, 31,0);
    tracep->declBus(c+314,"[5]", false,-1, 31,0);
    tracep->declBus(c+315,"[6]", false,-1, 31,0);
    tracep->declBus(c+316,"[7]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+249,"i", false,-1, 31,0);
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
    VlWide<6>/*191:0*/ __Vtemp_h8415a4a8__0;
    VlWide<6>/*191:0*/ __Vtemp_hbae848de__0;
    VlWide<6>/*191:0*/ __Vtemp_h210ef7ee__0;
    VlWide<4>/*127:0*/ __Vtemp_hc8c651b1__0;
    VlWide<6>/*191:0*/ __Vtemp_ha4a8369d__0;
    VlWide<9>/*287:0*/ __Vtemp_hf1154829__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE),32);
    bufp->fullBit(oldp+4,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                 >> 0xaU))));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE));
    bufp->fullIData(oldp+6,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                              << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                        >> 0x19U))),32);
    bufp->fullIData(oldp+7,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                              << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                        >> 0x19U))),32);
    bufp->fullIData(oldp+8,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                              << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                          >> 0x13U))),32);
    bufp->fullIData(oldp+9,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x13U))),32);
    bufp->fullIData(oldp+10,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x13U))),32);
    bufp->fullBit(oldp+11,((IData)((0U != (0x60000U 
                                           & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])))));
    bufp->fullIData(oldp+12,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_target_AGEX),32);
    bufp->fullIData(oldp+13,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                               << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                            >> 0xcU))),32);
    bufp->fullCData(oldp+14,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__bhr_fe),8);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_idx_fe),8);
    bufp->fullCData(oldp+16,((0xffU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])),8);
    bufp->fullBit(oldp+17,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE));
    bufp->fullBit(oldp+18,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                  >> 9U))));
    bufp->fullBit(oldp+19,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                  >> 8U))));
    bufp->fullIData(oldp+20,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                    >> 8U))),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__tb_direction__dut.__PVT__cycle_count),32);
    bufp->fullWData(oldp+22,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch),170);
    bufp->fullWData(oldp+28,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch),282);
    bufp->fullWData(oldp+37,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch),175);
    bufp->fullWData(oldp+43,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch),173);
    bufp->fullWData(oldp+49,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE),107);
    bufp->fullBit(oldp+53,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+54,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE),38);
    bufp->fullBit(oldp+56,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  >> 9U))));
    bufp->fullIData(oldp+57,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                               << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+58,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+59,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            >> 9U))),32);
    bufp->fullIData(oldp+60,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                            >> 9U))),32);
    bufp->fullCData(oldp+61,((0xffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                       >> 1U))),8);
    bufp->fullBit(oldp+62,((1U & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])));
    bufp->fullIData(oldp+63,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
    bufp->fullCData(oldp+64,((7U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    >> 0x15U))),3);
    bufp->fullCData(oldp+65,((0x7fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                       >> 2U))),7);
    bufp->fullCData(oldp+66,((0x7fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 9U))),7);
    bufp->fullCData(oldp+67,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+68,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+69,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+70,(((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                               ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                               : ((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                   ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                   : ((4U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          >> 8U)))) 
                                           << 0xbU) 
                                          | ((0x7e0U 
                                              & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 3U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x10U))))
                                       : ((5U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                           ? (((- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                              >> 8U)))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 5U)) 
                                                 | ((0x7e0U 
                                                     & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                        << 3U)) 
                                                    | (0x1eU 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0x10U)))))
                                           : ((3U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                               ? (0xfffff000U 
                                                  & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 0x17U) 
                                                     | (0x7ff000U 
                                                        & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 9U))))
                                               : ((2U 
                                                   == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                   >> 8U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 9U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x12U)) 
                                                         | (0x7feU 
                                                            & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                << 3U) 
                                                               | (6U 
                                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 0x1dU)))))))
                                                   : 0U))))))),32);
    bufp->fullCData(oldp+71,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x18U))),5);
    bufp->fullCData(oldp+72,((0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                        << 3U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x1dU)))),5);
    bufp->fullCData(oldp+73,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x10U))),5);
    bufp->fullBit(oldp+74,(((0x1cU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1dU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1eU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1fU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x20U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | (0x21U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+75,(((0x19U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((0x1aU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | (0x1bU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+76,((0x17U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+77,((0x18U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+79,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+80,((0x1fU & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U)))),5);
    bufp->fullIData(oldp+81,((IData)(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullBit(oldp+82,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullIData(oldp+84,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+85,((((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                             & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                >> (0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x18U)))) 
                            | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x1dU))))) 
                               | ((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                     >> (0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                  >> 0x10U))))))));
    bufp->fullIData(oldp+86,(((IData)(4U) + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    bufp->fullBit(oldp+87,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb_hit));
    bufp->fullIData(oldp+88,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__target_btb_pred),32);
    bufp->fullBit(oldp+89,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__is_btb_valid));
    bufp->fullIData(oldp+90,(((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb_hit)
                               ? vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__target_btb_pred
                               : ((IData)(4U) + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))),32);
    __Vtemp_h8415a4a8__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_idx_fe)) 
                                         << 0x21U) 
                                        | (((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE)) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb_hit)
                                                               ? vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__target_btb_pred
                                                               : 
                                                              ((IData)(4U) 
                                                               + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))))));
    __Vtemp_h8415a4a8__0[1U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 << 9U) | (IData)((
                                                   (((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_idx_fe)) 
                                                     << 0x21U) 
                                                    | (((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb_hit)
                                                                           ? vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__target_btb_pred
                                                                           : 
                                                                          ((IData)(4U) 
                                                                           + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))))) 
                                                   >> 0x20U)));
    __Vtemp_h8415a4a8__0[2U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE 
                                 >> 0x17U) | (((IData)(4U) 
                                               + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                              << 9U));
    __Vtemp_h8415a4a8__0[3U] = ((((IData)(4U) + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 >> 0x17U) | ((IData)(
                                                      (((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                              << 9U));
    __Vtemp_h8415a4a8__0[4U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 >> 0x17U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_h8415a4a8__0[5U] = (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__valid_FE) 
                                 << 9U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                    >> 0x20U)) 
                                           >> 0x17U));
    bufp->fullWData(oldp+91,(__Vtemp_h8415a4a8__0),170);
    bufp->fullIData(oldp+97,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                               << 0x16U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                            >> 0xaU))),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[0]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[1]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[2]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[3]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[4]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[5]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[6]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[7]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[8]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[9]),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[10]),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[11]),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[12]),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[13]),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[14]),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[15]),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[0]),26);
    bufp->fullIData(oldp+117,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[1]),26);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[2]),26);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[3]),26);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[4]),26);
    bufp->fullIData(oldp+121,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[5]),26);
    bufp->fullIData(oldp+122,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[6]),26);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[7]),26);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[8]),26);
    bufp->fullIData(oldp+125,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[9]),26);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[10]),26);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[11]),26);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[12]),26);
    bufp->fullIData(oldp+129,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[13]),26);
    bufp->fullIData(oldp+130,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[14]),26);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[15]),26);
    bufp->fullBit(oldp+132,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[0]));
    bufp->fullBit(oldp+133,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[1]));
    bufp->fullBit(oldp+134,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[2]));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[3]));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[4]));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[5]));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[6]));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[7]));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[8]));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[9]));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[10]));
    bufp->fullBit(oldp+143,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[11]));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[12]));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[13]));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[14]));
    bufp->fullBit(oldp+147,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[15]));
    bufp->fullCData(oldp+148,((0xfU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                       >> 2U))),4);
    bufp->fullIData(oldp+149,((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                               >> 6U)),26);
    bufp->fullCData(oldp+150,((0xfU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                       >> 2U))),4);
    bufp->fullIData(oldp+151,((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                               >> 6U)),26);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__btb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht__DOT__i),32);
    bufp->fullBit(oldp+154,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
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
    bufp->fullWData(oldp+155,(__Vtemp_hbae848de__0),173);
    bufp->fullCData(oldp+161,((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+162,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+163,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+164,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullBit(oldp+165,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullIData(oldp+166,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+167,((0x1fU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+168,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullIData(oldp+169,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullBit(oldp+171,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                   >> 6U))));
    __Vtemp_h210ef7ee__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 << 8U) | (0xffU & 
                                           (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 9U)));
    __Vtemp_h210ef7ee__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                 >> 0x18U) | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_h210ef7ee__0[2U] = (((IData)((0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                >> 0x13U)))) 
                                 << 8U) | ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                    >> 0x20U)) 
                                           >> 0x18U));
    __Vtemp_h210ef7ee__0[3U] = (((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  << 0x15U) | (0x1fc000U 
                                               & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0xbU))) 
                                | (((IData)((0x3fffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                   >> 0x13U)))) 
                                    >> 0x18U) | ((IData)(
                                                         ((0x3fffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                               << 0xdU) 
                                                              | ((QData)((IData)(
                                                                                vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                                 >> 0x13U))) 
                                                          >> 0x20U)) 
                                                 << 8U)));
    __Vtemp_h210ef7ee__0[4U] = ((0x3fffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                            >> 0xbU)) 
                                | ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                    << 0x15U) | (0x1fc000U 
                                                 & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0xbU))));
    __Vtemp_h210ef7ee__0[5U] = ((0x3fffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                            >> 0xbU)) 
                                | (0x4000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                              >> 0xbU)));
    bufp->fullWData(oldp+172,(__Vtemp_h210ef7ee__0),175);
    bufp->fullBit(oldp+178,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                   >> 0x19U))));
    bufp->fullIData(oldp+179,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                          >> 0x19U))),32);
    bufp->fullCData(oldp+180,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                        >> 0x13U))),6);
    bufp->fullBit(oldp+181,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_cond_AGEX));
    bufp->fullBit(oldp+182,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+183,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+184,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+185,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+186,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0xeU))));
    bufp->fullCData(oldp+187,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 9U))),5);
    bufp->fullIData(oldp+188,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x13U))),32);
    bufp->fullIData(oldp+189,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX),32);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX),32);
    bufp->fullCData(oldp+191,((0xffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 1U))),8);
    bufp->fullBit(oldp+192,((1U & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])));
    bufp->fullIData(oldp+193,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
    bufp->fullBit(oldp+194,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__branch_resolved_AGEX));
    bufp->fullBit(oldp+195,((1U & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                    >> 0x11U) | (IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_cond_AGEX)))));
    bufp->fullIData(oldp+196,(((0x40000U & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])
                                ? vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__VdfgExtracted_h7fcc4370__0
                                : vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_target_AGEX)),32);
    bufp->fullBit(oldp+197,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   >> 0xcU))));
    bufp->fullCData(oldp+198,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 6U))),6);
    bufp->fullIData(oldp+199,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+200,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+201,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+202,((0x1fU & vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+204,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+205,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    __Vtemp_hc8c651b1__0[0U] = ((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                 : ((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSymsp->TOP__tb_direction__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                     : ((4U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                            >> 8U)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 3U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x10U))))
                                         : ((5U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                >> 8U)))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 5U)) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          << 3U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x10U)))))
                                             : ((3U 
                                                 == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     << 0x17U) 
                                                    | (0x7ff000U 
                                                       & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 9U))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  >> 8U)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 9U)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x12U)) 
                                                        | (0x7feU 
                                                           & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                               << 3U) 
                                                              | (6U 
                                                                 & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 0x1dU)))))))
                                                  : 0U))))));
    __Vtemp_ha4a8369d__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x1cU 
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
                                                                         == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x2fU) 
                                                 | (((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x2eU) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x10U)))) 
                                                        << 0x29U) 
                                                       | (0x1ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))));
    __Vtemp_ha4a8369d__0[1U] = ((__Vtemp_hc8c651b1__0[0U] 
                                 << 0x13U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0x1cU 
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
                                                                                == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                                        << 0x32U) 
                                                       | (((QData)((IData)(
                                                                           ((0x19U 
                                                                             == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1aU 
                                                                                == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | (0x1bU 
                                                                                == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(
                                                                              (0x17U 
                                                                               == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                              << 0x30U) 
                                                             | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                 << 0x2fU) 
                                                                | (((QData)((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                    << 0x2eU) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x10U)))) 
                                                                       << 0x29U) 
                                                                      | (0x1ffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))) 
                                                      >> 0x20U)));
    __Vtemp_hf1154829__0[0U] = __Vtemp_ha4a8369d__0[0U];
    __Vtemp_hf1154829__0[1U] = __Vtemp_ha4a8369d__0[1U];
    __Vtemp_hf1154829__0[2U] = ((__Vtemp_hc8c651b1__0[0U] 
                                 >> 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                             [(0x1fU 
                                               & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 3U) 
                                                  | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x1dU)))] 
                                             << 0x13U));
    __Vtemp_hf1154829__0[3U] = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 3U) 
                                            | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x1dU)))] 
                                 >> 0xdU) | ((IData)(
                                                     (((QData)((IData)(
                                                                       ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                         << 0x17U) 
                                                                        | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                           >> 9U)))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                                        [
                                                                        (0x1fU 
                                                                         & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x18U))])))) 
                                             << 0x13U));
    __Vtemp_hf1154829__0[4U] = (((IData)((((QData)((IData)(
                                                           ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                             << 0x17U) 
                                                            | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                               >> 9U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                >> 0x18U))])))) 
                                 >> 0xdU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                          << 0x17U) 
                                                                         | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                            >> 9U)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                                         [
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0x18U))]))) 
                                                      >> 0x20U)) 
                                             << 0x13U));
    __Vtemp_hf1154829__0[5U] = ((0xfe000000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                << 0x10U)) 
                                | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE) 
                                    << 0x13U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                              << 0x17U) 
                                                                             | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                >> 9U)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x18U))]))) 
                                                          >> 0x20U)) 
                                                 >> 0xdU)));
    __Vtemp_hf1154829__0[6U] = (((0x1ff0000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    >> 0x10U)) | (0xfe000000U 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                     << 0x10U)));
    __Vtemp_hf1154829__0[7U] = (((0x1ff0000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    >> 0x10U)) | (0xfe000000U 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 0x10U)));
    __Vtemp_hf1154829__0[8U] = (((0x1ff0000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                << 0x10U)) 
                                 | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    >> 0x10U)) | (0x2000000U 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     << 0x10U)));
    bufp->fullWData(oldp+206,(__Vtemp_hf1154829__0),282);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         >> 0x18U))]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                              [(0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          << 3U) | 
                                         (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x1dU)))]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[0]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[1]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[2]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[3]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[4]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[5]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[6]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[7]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[8]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[9]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[10]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[11]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[12]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[13]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[14]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[15]),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[16]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[17]),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[18]),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[19]),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[20]),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[21]),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[22]),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[23]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[24]),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[25]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[26]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[27]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[28]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[29]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[30]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[31]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+250,(vlSelf->clk));
    bufp->fullBit(oldp+251,(vlSelf->reset));
    bufp->fullIData(oldp+252,(vlSelf->pc),32);
    bufp->fullIData(oldp+253,(vlSelf->fetch_inst),32);
    bufp->fullIData(oldp+254,(vlSelf->fetch_id),32);
    bufp->fullIData(oldp+255,(vlSelf->gp),32);
    bufp->fullBit(oldp+256,(vlSelf->redirect));
    bufp->fullBit(oldp+257,(vlSelf->stall));
    bufp->fullIData(oldp+258,(vlSelf->inst),32);
    bufp->fullIData(oldp+259,(vlSelf->branch_pc),32);
    bufp->fullIData(oldp+260,(vlSelf->branch_id),32);
    bufp->fullIData(oldp+261,(vlSelf->operand1),32);
    bufp->fullIData(oldp+262,(vlSelf->operand2),32);
    bufp->fullBit(oldp+263,(vlSelf->branch_flag));
    bufp->fullIData(oldp+264,(vlSelf->actual_pc),32);
    bufp->fullIData(oldp+265,(vlSelf->retired_inst),32);
    bufp->fullCData(oldp+266,(vlSelf->history),8);
    bufp->fullCData(oldp+267,(vlSelf->fetch_index),8);
    bufp->fullCData(oldp+268,(vlSelf->write_index),8);
    bufp->fullBit(oldp+269,(vlSelf->prediction));
    bufp->fullBit(oldp+270,(vlSelf->bhr_write));
    bufp->fullBit(oldp+271,(vlSelf->pht_write));
    bufp->fullBit(oldp+272,(vlSelf->pht_data));
    bufp->fullIData(oldp+273,(vlSelf->bhr_data),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+275,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.branch_count),32);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.correct_branch_count),32);
    bufp->fullIData(oldp+277,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+278,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+279,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+280,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+281,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+282,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+287,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+289,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+291,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+292,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+293,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+294,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+295,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+296,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+298,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+300,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[7U]),32);
    bufp->fullBit(oldp+317,(0U));
    bufp->fullBit(oldp+318,(0U));
    bufp->fullBit(oldp+319,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__valid_FE));
    bufp->fullIData(oldp+320,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_AGEX),32);
    bufp->fullBit(oldp+321,(1U));
}
