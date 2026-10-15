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
    VlWide<6>/*191:0*/ __Vtemp_h73675278__0;
    VlWide<6>/*191:0*/ __Vtemp_hae8cb829__0;
    VlWide<6>/*191:0*/ __Vtemp_h6a6e56b2__0;
    VlWide<4>/*127:0*/ __Vtemp_h3dc83197__0;
    VlWide<6>/*191:0*/ __Vtemp_ha70bf0d9__0;
    VlWide<9>/*287:0*/ __Vtemp_hc6d21e64__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgBit(oldp+3,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                    >> 0xcU))));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE));
        bufp->chgIData(oldp+5,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                 << 5U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0x1bU))),32);
        bufp->chgIData(oldp+6,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                 << 5U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0x1bU))),32);
        bufp->chgIData(oldp+7,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                 << 0xbU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x15U))),32);
        bufp->chgIData(oldp+8,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 << 0xbU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x15U))),32);
        bufp->chgIData(oldp+9,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0xbU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0x15U))),32);
        bufp->chgBit(oldp+10,((IData)((0U != (0x180000U 
                                              & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])))));
        bufp->chgIData(oldp+11,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_target_AGEX),32);
        bufp->chgIData(oldp+12,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                  << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                               >> 0xcU))),32);
        bufp->chgIData(oldp+13,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                  << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                               >> 0xcU))),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__cycle_count),32);
        bufp->chgWData(oldp+15,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch),172);
        bufp->chgWData(oldp+21,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch),284);
        bufp->chgWData(oldp+30,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch),175);
        bufp->chgWData(oldp+36,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgWData(oldp+42,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE),109);
        bufp->chgBit(oldp+46,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+47,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__from_WB_to_DE),38);
        bufp->chgBit(oldp+49,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                     >> 0xbU))));
        bufp->chgIData(oldp+50,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                  << 0x15U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+51,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x15U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+52,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x15U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 0xbU))),32);
        bufp->chgIData(oldp+53,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x15U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 0xbU))),32);
        bufp->chgSData(oldp+54,((0x3ffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                           >> 1U))),10);
        bufp->chgBit(oldp+55,((1U & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[1U])));
        bufp->chgIData(oldp+56,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
        bufp->chgCData(oldp+57,((7U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       >> 0x17U))),3);
        bufp->chgCData(oldp+58,((0x7fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                          >> 4U))),7);
        bufp->chgCData(oldp+59,((0x7fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0xbU))),7);
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
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+64,((0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x1aU))),5);
        bufp->chgCData(oldp+65,((0x1fU & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                           << 1U) | 
                                          (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           >> 0x1fU)))),5);
        bufp->chgCData(oldp+66,((0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 0x12U))),5);
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
                                                >> 0x1aU)))) 
                               | (((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                   & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                      >> (0x1fU & (
                                                   (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                    << 1U) 
                                                   | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                      >> 0x1fU))))) 
                                  | ((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                     & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                        >> (0x1fU & 
                                            (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x12U))))))));
        bufp->chgIData(oldp+79,(((IData)(4U) + vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
        bufp->chgSData(oldp+80,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_idx_fe),10);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE));
        bufp->chgCData(oldp+82,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__bhr_fe),8);
        bufp->chgSData(oldp+83,((0x3ffU & vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])),10);
        bufp->chgBit(oldp+84,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                     >> 0xbU))));
        bufp->chgBit(oldp+85,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                     >> 0xaU))));
        bufp->chgBit(oldp+86,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb_hit));
        bufp->chgIData(oldp+87,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__target_btb_pred),32);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__is_btb_valid));
        bufp->chgIData(oldp+89,(((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb_hit)
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
        bufp->chgWData(oldp+90,(__Vtemp_h73675278__0),172);
        bufp->chgIData(oldp+96,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                                  << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                               >> 0xcU))),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U]),32);
        bufp->chgIData(oldp+99,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                       >> 0xaU))),32);
        bufp->chgCData(oldp+100,((0xffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))),8);
        bufp->chgIData(oldp+101,((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                  >> 0xaU)),22);
        bufp->chgCData(oldp+102,((0xffU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                           >> 2U))),8);
        bufp->chgIData(oldp+103,((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                                  >> 0xaU)),22);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__btb__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__pht__DOT__i),32);
        bufp->chgBit(oldp+106,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
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
        bufp->chgWData(oldp+107,(__Vtemp_hae8cb829__0),173);
        bufp->chgCData(oldp+113,((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                           >> 8U))),6);
        bufp->chgIData(oldp+114,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                   << 0x18U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+115,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                   << 0x12U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                >> 0xeU))),32);
        bufp->chgIData(oldp+116,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                   << 0x12U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                >> 0xeU))),32);
        bufp->chgBit(oldp+117,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 7U))));
        bufp->chgIData(oldp+118,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+119,((0x1fU & vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+120,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+121,(((vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+122,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                              >> 0xaU))]),32);
        bufp->chgBit(oldp+123,((1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 6U))));
        __Vtemp_h6a6e56b2__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                     << 8U) | (0xffU 
                                               & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
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
                                        >> 0x18U) | 
                                       ((IData)(((0x3fffffffffULL 
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
                                        << 0x13U) | 
                                       (0x7c000U & 
                                        (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                         >> 0xdU))));
        __Vtemp_h6a6e56b2__0[5U] = ((0x3fffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                >> 0xdU)) 
                                    | (0x4000U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  >> 0xdU)));
        bufp->chgWData(oldp+124,(__Vtemp_h6a6e56b2__0),175);
        bufp->chgBit(oldp+130,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                      >> 0x1bU))));
        bufp->chgIData(oldp+131,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                   << 5U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                             >> 0x1bU))),32);
        bufp->chgCData(oldp+132,((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x15U))),6);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_cond_AGEX));
        bufp->chgBit(oldp+134,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x14U))));
        bufp->chgBit(oldp+135,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x13U))));
        bufp->chgBit(oldp+136,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+137,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+138,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      >> 0x10U))));
        bufp->chgCData(oldp+139,((0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0xbU))),5);
        bufp->chgIData(oldp+140,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0xbU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x15U))),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__aluout_AGEX),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__memaddr_AGEX),32);
        bufp->chgSData(oldp+143,((0x3ffU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 1U))),10);
        bufp->chgBit(oldp+144,((1U & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])));
        bufp->chgIData(oldp+145,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[0U]),32);
        bufp->chgBit(oldp+146,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__branch_resolved_AGEX));
        bufp->chgBit(oldp+147,((1U & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       >> 0x13U) | (IData)(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_cond_AGEX)))));
        bufp->chgIData(oldp+148,(((0x100000U & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])
                                   ? vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__VdfgExtracted_h7fcc4370__0
                                   : vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_target_AGEX)),32);
        bufp->chgBit(oldp+149,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+150,((0x3fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+151,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+152,((1U & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+153,((0x1fU & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+155,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+156,(((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
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
                                                 : 
                                                ((3U 
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
        __Vtemp_hc6d21e64__0[5U] = ((0xf8000000U & 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      << 0x10U)) | 
                                    (((IData)(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__op_I_DE) 
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
        __Vtemp_hc6d21e64__0[6U] = (((0x7ff0000U & 
                                      (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      >> 0x10U)) | 
                                    (0xf8000000U & 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      << 0x10U)));
        __Vtemp_hc6d21e64__0[7U] = (((0x7ff0000U & 
                                      (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x10U)) | 
                                    (0xf8000000U & 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 0x10U)));
        __Vtemp_hc6d21e64__0[8U] = (((0x7ff0000U & 
                                      (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 0x10U)) | 
                                    (0x8000000U & (
                                                   vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 0x10U)));
        bufp->chgWData(oldp+157,(__Vtemp_hc6d21e64__0),284);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0x1aU))]),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                             << 1U) 
                                            | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                               >> 0x1fU)))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+168,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+183,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+184,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+185,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+186,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+188,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+201,(vlSelf->clk));
    bufp->chgBit(oldp+202,(vlSelf->reset));
    bufp->chgIData(oldp+203,(vlSelf->pc),32);
    bufp->chgIData(oldp+204,(vlSelf->fetch_inst),32);
    bufp->chgIData(oldp+205,(vlSelf->fetch_id),32);
    bufp->chgBit(oldp+206,(vlSelf->redirect));
    bufp->chgBit(oldp+207,(vlSelf->stall));
    bufp->chgIData(oldp+208,(vlSelf->gp),32);
    bufp->chgIData(oldp+209,(vlSelf->inst),32);
    bufp->chgIData(oldp+210,(vlSelf->branch_pc),32);
    bufp->chgIData(oldp+211,(vlSelf->branch_id),32);
    bufp->chgIData(oldp+212,(vlSelf->operand1),32);
    bufp->chgIData(oldp+213,(vlSelf->operand2),32);
    bufp->chgBit(oldp+214,(vlSelf->branch_flag));
    bufp->chgIData(oldp+215,(vlSelf->actual_pc),32);
    bufp->chgIData(oldp+216,(vlSelf->branches),32);
    bufp->chgIData(oldp+217,(vlSelf->correct),32);
    bufp->chgIData(oldp+218,(vlSelf->retired_inst),32);
    bufp->chgIData(oldp+219,(vlSelf->retired_pc),32);
    bufp->chgIData(oldp+220,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+221,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.branch_count),32);
    bufp->chgIData(oldp+222,(vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.correct_branch_count),32);
    bufp->chgIData(oldp+223,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+224,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+225,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+226,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+227,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+228,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+229,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+230,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+234,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+248,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+249,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+250,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+251,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+252,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+253,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+254,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+255,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+256,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+257,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+258,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+259,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+260,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+261,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+262,(vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.WB_counters[7U]),32);
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
