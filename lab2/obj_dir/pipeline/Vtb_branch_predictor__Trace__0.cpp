// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_branch_predictor__Syms.h"


void Vtb_branch_predictor___024root__trace_chg_sub_0(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_branch_predictor___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_branch_predictor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_branch_predictor___024root*>(voidSelf);
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_branch_predictor___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_branch_predictor___024root__trace_chg_sub_0(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<6>/*191:0*/ __Vtemp_h30422721__0;
    VlWide<6>/*191:0*/ __Vtemp_hae8cb829__0;
    VlWide<6>/*191:0*/ __Vtemp_hc7fe9729__0;
    VlWide<4>/*127:0*/ __Vtemp_hccf47901__0;
    VlWide<6>/*191:0*/ __Vtemp_hb1725547__0;
    VlWide<9>/*287:0*/ __Vtemp_he2df9e72__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgBit(oldp+3,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                    >> 0xaU))));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE));
        bufp->chgIData(oldp+5,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 7U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0x19U))),32);
        bufp->chgIData(oldp+6,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                 << 7U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0x19U))),32);
        bufp->chgIData(oldp+7,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 0xdU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x13U))),32);
        bufp->chgIData(oldp+8,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 << 0xdU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x13U))),32);
        bufp->chgIData(oldp+9,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0xdU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0x13U))),32);
        bufp->chgBit(oldp+10,((IData)((0U != (0x60000U 
                                              & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])))));
        bufp->chgIData(oldp+11,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_target_AGEX),32);
        bufp->chgIData(oldp+12,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                  << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                               >> 0xcU))),32);
        bufp->chgIData(oldp+13,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                  << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                               >> 0xcU))),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__cycle_count),32);
        bufp->chgWData(oldp+15,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch),170);
        bufp->chgWData(oldp+21,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch),282);
        bufp->chgWData(oldp+30,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch),175);
        bufp->chgWData(oldp+36,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgWData(oldp+42,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE),107);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+47,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__from_WB_to_DE),38);
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     >> 9U))));
        bufp->chgIData(oldp+50,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  << 0x17U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+51,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x17U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+52,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x17U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+53,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x17U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 9U))),32);
        bufp->chgCData(oldp+54,((0xffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                          >> 1U))),8);
        bufp->chgBit(oldp+55,((1U & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])));
        bufp->chgIData(oldp+56,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
        bufp->chgCData(oldp+57,((7U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x15U))),3);
        bufp->chgCData(oldp+58,((0x7fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          >> 2U))),7);
        bufp->chgCData(oldp+59,((0x7fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 9U))),7);
        bufp->chgCData(oldp+60,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+63,(((1U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                  ? vlSymsp->TOP__tb_branch_predictor__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                  : ((1U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                      ? vlSymsp->TOP__tb_branch_predictor__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                      : ((4U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                             >> 8U)))) 
                                              << 0xbU) 
                                             | ((0x7e0U 
                                                 & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                    << 3U)) 
                                                | (0x1fU 
                                                   & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x10U))))
                                          : ((5U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                 >> 8U)))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 5U)) 
                                                    | ((0x7e0U 
                                                        & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                           << 3U)) 
                                                       | (0x1eU 
                                                          & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x10U)))))
                                              : ((3U 
                                                  == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (0xfffff000U 
                                                  & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 0x17U) 
                                                     | (0x7ff000U 
                                                        & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 9U))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                   >> 8U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 9U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x12U)) 
                                                         | (0x7feU 
                                                            & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                << 3U) 
                                                               | (6U 
                                                                  & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 0x1dU)))))))
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+64,((0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x18U))),5);
        bufp->chgCData(oldp+65,((0x1fU & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                           << 3U) | 
                                          (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 0x1dU)))),5);
        bufp->chgCData(oldp+66,((0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x10U))),5);
        bufp->chgBit(oldp+67,(((0x1cU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+68,(((0x19U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+69,((0x17U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+70,((0x18U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+71,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+72,((1U & (IData)((vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+73,((0x1fU & (IData)((vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x20U)))),5);
        bufp->chgIData(oldp+74,((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+76,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+77,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+78,((((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                >> 0x18U)))) 
                               | (((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                   & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                      >> (0x1fU & (
                                                   (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                    << 3U) 
                                                   | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x1dU))))) 
                                  | ((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                     & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                        >> (0x1fU & 
                                            (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x10U))))))));
        bufp->chgIData(oldp+79,(((IData)(4U) + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        bufp->chgCData(oldp+80,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__bhr_FE),8);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_index_FE),8);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE));
        bufp->chgBit(oldp+83,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                     >> 9U))));
        bufp->chgBit(oldp+84,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                     >> 8U))));
        bufp->chgCData(oldp+85,((0xffU & vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])),8);
        bufp->chgBit(oldp+86,((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid
                               [(0xfU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                         >> 2U))] & 
                               (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag
                                [(0xfU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 2U))] 
                                == (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                    >> 6U)))));
        bufp->chgIData(oldp+87,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target
                                [(0xfU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 2U))]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pred_next_pc_FE),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U]),32);
        __Vtemp_h30422721__0[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_index_FE)) 
                                             << 0x21U) 
                                            | (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pred_next_pc_FE)))));
        __Vtemp_h30422721__0[1U] = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_count_FE 
                                     << 9U) | (IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_index_FE)) 
                                                         << 0x21U) 
                                                        | (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pred_next_pc_FE)))) 
                                                       >> 0x20U)));
        __Vtemp_h30422721__0[2U] = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_count_FE 
                                     >> 0x17U) | (((IData)(4U) 
                                                   + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                                  << 9U));
        __Vtemp_h30422721__0[3U] = ((((IData)(4U) + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                     >> 0x17U) | ((IData)(
                                                          (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                                  << 9U));
        __Vtemp_h30422721__0[4U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                     >> 0x17U) | ((IData)(
                                                          ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                           >> 0x20U)) 
                                                  << 9U));
        __Vtemp_h30422721__0[5U] = (0x200U | ((IData)(
                                                      ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                       >> 0x20U)) 
                                              >> 0x17U));
        bufp->chgWData(oldp+91,(__Vtemp_h30422721__0),170);
        bufp->chgIData(oldp+97,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                  << 0x16U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                               >> 0xaU))),32);
        bufp->chgIData(oldp+98,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                       >> 8U))),32);
        bufp->chgBit(oldp+99,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[0]));
        bufp->chgBit(oldp+100,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[1]));
        bufp->chgBit(oldp+101,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[2]));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[3]));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[4]));
        bufp->chgBit(oldp+104,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[5]));
        bufp->chgBit(oldp+105,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[6]));
        bufp->chgBit(oldp+106,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[7]));
        bufp->chgBit(oldp+107,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[8]));
        bufp->chgBit(oldp+108,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[9]));
        bufp->chgBit(oldp+109,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[10]));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[11]));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[12]));
        bufp->chgBit(oldp+112,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[13]));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[14]));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[15]));
        bufp->chgIData(oldp+115,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[0]),26);
        bufp->chgIData(oldp+116,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[1]),26);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[2]),26);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[3]),26);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[4]),26);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[5]),26);
        bufp->chgIData(oldp+121,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[6]),26);
        bufp->chgIData(oldp+122,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[7]),26);
        bufp->chgIData(oldp+123,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[8]),26);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[9]),26);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[10]),26);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[11]),26);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[12]),26);
        bufp->chgIData(oldp+128,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[13]),26);
        bufp->chgIData(oldp+129,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[14]),26);
        bufp->chgIData(oldp+130,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[15]),26);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[0]),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[1]),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[2]),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[3]),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[4]),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[5]),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[6]),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[7]),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[8]),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[9]),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[10]),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[11]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[12]),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[13]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[14]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__btb_target[15]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__i),32);
        bufp->chgCData(oldp+148,((0xfU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 2U))),4);
        bufp->chgIData(oldp+149,((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                  >> 6U)),26);
        bufp->chgCData(oldp+150,((0xfU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                          >> 2U))),4);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht__DOT__i),32);
        bufp->chgBit(oldp+152,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
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
                                     << 6U) | (0x3fU 
                                               & vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U]));
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
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                           >> 2U))));
        __Vtemp_hae8cb829__0[4U] = ((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                           >> 2U))));
        __Vtemp_hae8cb829__0[5U] = ((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                              >> 2U)) 
                                    | (0x1fc0U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                                  >> 2U)));
        bufp->chgWData(oldp+153,(__Vtemp_hae8cb829__0),173);
        bufp->chgCData(oldp+159,((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                           >> 8U))),6);
        bufp->chgIData(oldp+160,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+161,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                   << 0x12U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+162,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                   << 0x12U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                >> 0xeU))),32);
        bufp->chgBit(oldp+163,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+164,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+165,((0x1fU & vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+166,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+167,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                              >> 0xaU))]),32);
        bufp->chgBit(oldp+169,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 6U))));
        __Vtemp_hc7fe9729__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                     << 8U) | (0xffU 
                                               & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 9U)));
        __Vtemp_hc7fe9729__0[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                     >> 0x18U) | ((IData)(
                                                          ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_hc7fe9729__0[2U] = (((IData)((0x3fffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                    >> 0x13U)))) 
                                     << 8U) | ((IData)(
                                                       ((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX))) 
                                                        >> 0x20U)) 
                                               >> 0x18U));
        __Vtemp_hc7fe9729__0[3U] = (((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      << 0x15U) | (0x1fc000U 
                                                   & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                      >> 0xbU))) 
                                    | (((IData)((0x3fffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                     << 0xdU) 
                                                    | ((QData)((IData)(
                                                                       vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                       >> 0x13U)))) 
                                        >> 0x18U) | 
                                       ((IData)(((0x3fffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U])) 
                                                      << 0xdU) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U])) 
                                                        >> 0x13U))) 
                                                 >> 0x20U)) 
                                        << 8U)));
        __Vtemp_hc7fe9729__0[4U] = ((0x3fffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                >> 0xbU)) 
                                    | ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                        << 0x15U) | 
                                       (0x1fc000U & 
                                        (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0xbU))));
        __Vtemp_hc7fe9729__0[5U] = ((0x3fffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                >> 0xbU)) 
                                    | (0x4000U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  >> 0xbU)));
        bufp->chgWData(oldp+170,(__Vtemp_hc7fe9729__0),175);
        bufp->chgBit(oldp+176,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+177,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                   << 7U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x19U))),32);
        bufp->chgCData(oldp+178,((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x13U))),6);
        bufp->chgBit(oldp+179,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_cond_AGEX));
        bufp->chgBit(oldp+180,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+181,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+182,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+183,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+184,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0xeU))));
        bufp->chgCData(oldp+185,((0xffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 1U))),8);
        bufp->chgBit(oldp+186,((1U & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])));
        bufp->chgIData(oldp+187,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
        bufp->chgIData(oldp+188,(((0x40000U & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])
                                   ? vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__VdfgExtracted_h7fcc4370__0
                                   : vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_target_AGEX)),32);
        bufp->chgCData(oldp+189,((0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 9U))),5);
        bufp->chgIData(oldp+190,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0xdU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX),32);
        bufp->chgBit(oldp+193,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__update_predictor_AGEX));
        bufp->chgBit(oldp+194,((1U & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x11U) | (IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_cond_AGEX)))));
        bufp->chgBit(oldp+195,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+196,((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+197,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+198,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+199,((0x1fU & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+201,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+202,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        __Vtemp_hccf47901__0[0U] = ((1U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSymsp->TOP__tb_branch_predictor__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                     : ((1U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? vlSymsp->TOP__tb_branch_predictor__dut.my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                         : ((4U == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                >> 8U)))) 
                                                 << 0xbU) 
                                                | ((0x7e0U 
                                                    & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                       << 3U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x10U))))
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                 >> 8U)))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 5U)) 
                                                    | ((0x7e0U 
                                                        & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                           << 3U)) 
                                                       | (0x1eU 
                                                          & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x10U)))))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (0xfffff000U 
                                                  & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 0x17U) 
                                                     | (0x7ff000U 
                                                        & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 9U))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                   >> 8U)))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 9U)) 
                                                      | ((0x800U 
                                                          & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             >> 0x12U)) 
                                                         | (0x7feU 
                                                            & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                << 3U) 
                                                               | (6U 
                                                                  & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     >> 0x1dU)))))))
                                                   : 0U))))));
        __Vtemp_hb1725547__0[0U] = (IData)((((QData)((IData)(
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
                                             << 0x32U) 
                                            | (((QData)((IData)(
                                                                ((0x19U 
                                                                  == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                 | ((0x1aU 
                                                                     == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                    | (0x1bU 
                                                                       == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                << 0x31U) 
                                               | (((QData)((IData)(
                                                                   (0x17U 
                                                                    == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(
                                                                      (0x18U 
                                                                       == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                      << 0x2fU) 
                                                     | (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                         << 0x2eU) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x10U)))) 
                                                            << 0x29U) 
                                                           | (0x1ffffffffffULL 
                                                              & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))));
        __Vtemp_hb1725547__0[1U] = ((__Vtemp_hccf47901__0[0U] 
                                     << 0x13U) | (IData)(
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
                                                            << 0x32U) 
                                                           | (((QData)((IData)(
                                                                               ((0x19U 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x1aU 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                               << 0x31U) 
                                                              | (((QData)((IData)(
                                                                                (0x17U 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                  << 0x30U) 
                                                                 | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                     << 0x2fU) 
                                                                    | (((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                        << 0x2eU) 
                                                                       | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x10U)))) 
                                                                           << 0x29U) 
                                                                          | (0x1ffffffffffULL 
                                                                             & (((QData)((IData)(
                                                                                vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))) 
                                                          >> 0x20U)));
        __Vtemp_he2df9e72__0[0U] = __Vtemp_hb1725547__0[0U];
        __Vtemp_he2df9e72__0[1U] = __Vtemp_hb1725547__0[1U];
        __Vtemp_he2df9e72__0[2U] = ((__Vtemp_hccf47901__0[0U] 
                                     >> 0xdU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                                 [(0x1fU 
                                                   & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                       << 3U) 
                                                      | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x1dU)))] 
                                                 << 0x13U));
        __Vtemp_he2df9e72__0[3U] = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                     [(0x1fU & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                 << 3U) 
                                                | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 0x1dU)))] 
                                     >> 0xdU) | ((IData)(
                                                         (((QData)((IData)(
                                                                           ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                             << 0x17U) 
                                                                            | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               >> 9U)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                                                            [
                                                                            (0x1fU 
                                                                             & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x18U))])))) 
                                                 << 0x13U));
        __Vtemp_he2df9e72__0[4U] = (((IData)((((QData)((IData)(
                                                               ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                 << 0x17U) 
                                                                | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                   >> 9U)))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                                                [
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    >> 0x18U))])))) 
                                     >> 0xdU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                              << 0x17U) 
                                                                             | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                >> 9U)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x18U))]))) 
                                                          >> 0x20U)) 
                                                 << 0x13U));
        __Vtemp_he2df9e72__0[5U] = ((0xfe000000U & 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      << 0x10U)) | 
                                    (((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE) 
                                      << 0x13U) | ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                                << 0x17U) 
                                                                               | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                                >> 9U)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                                                               [
                                                                               (0x1fU 
                                                                                & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x18U))]))) 
                                                            >> 0x20U)) 
                                                   >> 0xdU)));
        __Vtemp_he2df9e72__0[6U] = (((0x1ff0000U & 
                                      (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      >> 0x10U)) | 
                                    (0xfe000000U & 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      << 0x10U)));
        __Vtemp_he2df9e72__0[7U] = (((0x1ff0000U & 
                                      (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x10U)) | 
                                    (0xfe000000U & 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 0x10U)));
        __Vtemp_he2df9e72__0[8U] = (((0x1ff0000U & 
                                      (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 0x10U)) | 
                                    (0x2000000U & (
                                                   vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 0x10U)));
        bufp->chgWData(oldp+203,(__Vtemp_he2df9e72__0),282);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0x18U))]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 3U) 
                                            | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x1dU)))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+214,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+224,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+225,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+227,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+239,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+240,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+241,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+247,(vlSelf->clk));
    bufp->chgBit(oldp+248,(vlSelf->reset));
    bufp->chgIData(oldp+249,(vlSelf->pc),32);
    bufp->chgIData(oldp+250,(vlSelf->fetch_inst),32);
    bufp->chgIData(oldp+251,(vlSelf->fetch_id),32);
    bufp->chgBit(oldp+252,(vlSelf->redirect));
    bufp->chgBit(oldp+253,(vlSelf->stall));
    bufp->chgIData(oldp+254,(vlSelf->gp),32);
    bufp->chgIData(oldp+255,(vlSelf->inst),32);
    bufp->chgIData(oldp+256,(vlSelf->branch_pc),32);
    bufp->chgIData(oldp+257,(vlSelf->branch_id),32);
    bufp->chgIData(oldp+258,(vlSelf->operand1),32);
    bufp->chgIData(oldp+259,(vlSelf->operand2),32);
    bufp->chgBit(oldp+260,(vlSelf->branch_flag));
    bufp->chgIData(oldp+261,(vlSelf->actual_pc),32);
    bufp->chgIData(oldp+262,(vlSelf->branches),32);
    bufp->chgIData(oldp+263,(vlSelf->correct),32);
    bufp->chgIData(oldp+264,(vlSelf->retired_inst),32);
    bufp->chgIData(oldp+265,(vlSelf->retired_pc),32);
    bufp->chgIData(oldp+266,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+267,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.branch_count),32);
    bufp->chgIData(oldp+268,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.correct_branch_count),32);
    bufp->chgIData(oldp+269,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+270,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+271,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+272,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+273,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+274,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+275,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+276,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+277,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+278,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+279,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+280,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+281,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+282,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+283,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+284,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+285,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+286,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+287,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+288,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+289,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+290,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+291,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+292,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+293,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+294,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+295,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+296,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+297,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+298,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+299,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+300,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+301,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+302,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+303,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+304,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+305,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+306,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+307,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+308,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[7U]),32);
}

void Vtb_branch_predictor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root__trace_cleanup\n"); );
    // Init
    Vtb_branch_predictor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_branch_predictor___024root*>(voidSelf);
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
