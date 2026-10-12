// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_direction__Syms.h"


void Vtb_direction___024root__trace_chg_sub_0(Vtb_direction___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_direction___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_direction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_direction___024root*>(voidSelf);
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_direction___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_direction___024root__trace_chg_sub_0(Vtb_direction___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<5>/*159:0*/ __Vtemp_h053d5006__0;
    VlWide<6>/*191:0*/ __Vtemp_hbae848de__0;
    VlWide<6>/*191:0*/ __Vtemp_h474c4c7f__0;
    VlWide<4>/*127:0*/ __Vtemp_h485f86d3__0;
    VlWide<5>/*159:0*/ __Vtemp_hd2f879dc__0;
    VlWide<8>/*255:0*/ __Vtemp_h08931cf3__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgBit(oldp+3,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                            >> 0x2aU)))));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE));
        bufp->chgIData(oldp+5,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                 << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 0x19U))),32);
        bufp->chgIData(oldp+6,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                           >> 0x19U))),32);
        bufp->chgIData(oldp+7,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x13U))),32);
        bufp->chgIData(oldp+8,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0x13U))),32);
        bufp->chgIData(oldp+9,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                             >> 0x13U))),32);
        bufp->chgBit(oldp+10,((IData)((0U != (0x60000U 
                                              & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
        bufp->chgIData(oldp+11,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_target_AGEX),32);
        bufp->chgIData(oldp+12,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                  << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                               >> 0xcU))),32);
        bufp->chgCData(oldp+13,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__bhr_fe),8);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_idx_fe),8);
        bufp->chgCData(oldp+15,((0xffU & (IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE))),8);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE));
        bufp->chgBit(oldp+17,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                             >> 9U)))));
        bufp->chgBit(oldp+18,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                             >> 8U)))));
        bufp->chgIData(oldp+19,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                               >> 8U)))),32);
        bufp->chgIData(oldp+20,(vlSymsp->TOP__tb_direction__dut.__PVT__cycle_count),32);
        bufp->chgWData(oldp+21,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch),138);
        bufp->chgWData(oldp+26,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch),250);
        bufp->chgWData(oldp+34,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch),175);
        bufp->chgWData(oldp+40,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgQData(oldp+46,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE),43);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+49,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE),38);
        bufp->chgBit(oldp+51,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                     >> 9U))));
        bufp->chgIData(oldp+52,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+53,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+54,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                               >> 9U))),32);
        bufp->chgIData(oldp+55,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  << 0x17U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                               >> 9U))),32);
        bufp->chgCData(oldp+56,((0xffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                          >> 1U))),8);
        bufp->chgBit(oldp+57,((1U & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U])));
        bufp->chgCData(oldp+58,((7U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0x15U))),3);
        bufp->chgCData(oldp+59,((0x7fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          >> 2U))),7);
        bufp->chgCData(oldp+60,((0x7fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 9U))),7);
        bufp->chgCData(oldp+61,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+64,(((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
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
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+65,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x18U))),5);
        bufp->chgCData(oldp+66,((0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                           << 3U) | 
                                          (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                           >> 0x1dU)))),5);
        bufp->chgCData(oldp+67,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x10U))),5);
        bufp->chgBit(oldp+68,(((0x1cU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+69,(((0x19U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+70,((0x17U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+71,((0x18U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+72,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+73,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+74,((0x1fU & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x20U)))),5);
        bufp->chgIData(oldp+75,((IData)(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+78,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+79,((((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x18U)))) 
                               | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                   & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                      >> (0x1fU & (
                                                   (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 3U) 
                                                   | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x1dU))))) 
                                  | ((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                     & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                        >> (0x1fU & 
                                            (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x10U))))))));
        bufp->chgIData(oldp+80,(((IData)(4U) + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
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
        bufp->chgWData(oldp+81,(__Vtemp_h053d5006__0),138);
        bufp->chgIData(oldp+86,((IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                         >> 0xaU))),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht__DOT__i),32);
        bufp->chgBit(oldp+88,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
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
                                     << 6U) | (0x3fU 
                                               & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U]));
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
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                           >> 2U))));
        __Vtemp_hbae848de__0[4U] = ((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                              >> 2U)) 
                                    | ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                        << 0x1eU) | 
                                       (0x3fffffc0U 
                                        & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                           >> 2U))));
        __Vtemp_hbae848de__0[5U] = ((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                              >> 2U)) 
                                    | (0x1fc0U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                                  >> 2U)));
        bufp->chgWData(oldp+89,(__Vtemp_hbae848de__0),173);
        bufp->chgCData(oldp+95,((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                          >> 8U))),6);
        bufp->chgIData(oldp+96,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                  << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+97,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                  << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                               >> 0xeU))),32);
        bufp->chgIData(oldp+98,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                  << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                               >> 0xeU))),32);
        bufp->chgBit(oldp+99,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                     >> 7U))));
        bufp->chgIData(oldp+100,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                   << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                >> 8U))),32);
        bufp->chgCData(oldp+101,((0x1fU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+102,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 5U))));
        bufp->chgIData(oldp+103,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                   << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                >> 8U))),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__dmem
                                 [(0x3fffU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                              >> 0xaU))]),32);
        bufp->chgBit(oldp+105,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                      >> 6U))));
        __Vtemp_h474c4c7f__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                     << 8U) | (0xffU 
                                               & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
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
                                        >> 0x18U) | 
                                       ((IData)(((0x3fffffffffULL 
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
                                        << 0x15U) | 
                                       (0x1fc000U & 
                                        (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0xbU))));
        __Vtemp_h474c4c7f__0[5U] = ((0x3fffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                >> 0xbU)) 
                                    | (0x4000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xbU)));
        bufp->chgWData(oldp+106,(__Vtemp_h474c4c7f__0),175);
        bufp->chgBit(oldp+112,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      >> 0x19U))));
        bufp->chgIData(oldp+113,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                             >> 0x19U))),32);
        bufp->chgCData(oldp+114,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0x13U))),6);
        bufp->chgBit(oldp+115,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_cond_AGEX));
        bufp->chgBit(oldp+116,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0x12U))));
        bufp->chgBit(oldp+117,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0x11U))));
        bufp->chgBit(oldp+118,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0x10U))));
        bufp->chgBit(oldp+119,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0xfU))));
        bufp->chgBit(oldp+120,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 0xeU))));
        bufp->chgCData(oldp+121,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 9U))),5);
        bufp->chgIData(oldp+122,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                               >> 0x13U))),32);
        bufp->chgIData(oldp+123,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX),32);
        bufp->chgIData(oldp+124,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX),32);
        bufp->chgCData(oldp+125,((0xffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 1U))),8);
        bufp->chgBit(oldp+126,((1U & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U])));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__branch_resolved_AGEX));
        bufp->chgBit(oldp+128,((1U & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                       >> 0x11U) | (IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_cond_AGEX)))));
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+130,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+131,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+132,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+133,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+134,((0x1fU & vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+136,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+137,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
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
                                                 : 
                                                ((3U 
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
                                     << 0x13U) | ((
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
        __Vtemp_h08931cf3__0[4U] = ((0xfe000000U & 
                                     (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                      << 0x10U)) | 
                                    (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE) 
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
        __Vtemp_h08931cf3__0[5U] = (((0x1ff0000U & 
                                      (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                      >> 0x10U)) | 
                                    (0xfe000000U & 
                                     (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      << 0x10U)));
        __Vtemp_h08931cf3__0[6U] = (((0x1ff0000U & 
                                      (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                      >> 0x10U)) | 
                                    (0xfe000000U & 
                                     (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      << 0x10U)));
        __Vtemp_h08931cf3__0[7U] = (((0x1ff0000U & 
                                      (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                       << 0x10U)) | 
                                     (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                      >> 0x10U)) | 
                                    (0x2000000U & (
                                                   vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0x10U)));
        bufp->chgWData(oldp+138,(__Vtemp_h08931cf3__0),250);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x18U))]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & ((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             << 3U) 
                                            | (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                               >> 0x1dU)))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+148,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+169,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+170,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+173,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+174,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+175,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+177,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+178,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+181,(vlSelf->clk));
    bufp->chgBit(oldp+182,(vlSelf->reset));
    bufp->chgIData(oldp+183,(vlSelf->pc),32);
    bufp->chgIData(oldp+184,(vlSelf->fetch_inst),32);
    bufp->chgIData(oldp+185,(vlSelf->fetch_id),32);
    bufp->chgIData(oldp+186,(vlSelf->gp),32);
    bufp->chgBit(oldp+187,(vlSelf->redirect));
    bufp->chgBit(oldp+188,(vlSelf->stall));
    bufp->chgIData(oldp+189,(vlSelf->inst),32);
    bufp->chgIData(oldp+190,(vlSelf->branch_pc),32);
    bufp->chgIData(oldp+191,(vlSelf->branch_id),32);
    bufp->chgIData(oldp+192,(vlSelf->operand1),32);
    bufp->chgIData(oldp+193,(vlSelf->operand2),32);
    bufp->chgBit(oldp+194,(vlSelf->branch_flag));
    bufp->chgIData(oldp+195,(vlSelf->actual_pc),32);
    bufp->chgIData(oldp+196,(vlSelf->retired_inst),32);
    bufp->chgCData(oldp+197,(vlSelf->history),8);
    bufp->chgCData(oldp+198,(vlSelf->fetch_index),8);
    bufp->chgCData(oldp+199,(vlSelf->write_index),8);
    bufp->chgBit(oldp+200,(vlSelf->prediction));
    bufp->chgBit(oldp+201,(vlSelf->bhr_write));
    bufp->chgBit(oldp+202,(vlSelf->pht_write));
    bufp->chgBit(oldp+203,(vlSelf->pht_data));
    bufp->chgIData(oldp+204,(vlSelf->bhr_data),32);
    bufp->chgIData(oldp+205,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+206,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.branch_count),32);
    bufp->chgIData(oldp+207,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.correct_branch_count),32);
    bufp->chgIData(oldp+208,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+209,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+210,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+211,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+212,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+213,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+214,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+215,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+216,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+217,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+218,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+219,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+220,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+221,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+222,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+223,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+224,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+225,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+226,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+227,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+228,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+229,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+230,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+234,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+235,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+236,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+237,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+238,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+239,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+240,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+241,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+242,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+243,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+244,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+245,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+246,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+247,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[7U]),32);
}

void Vtb_direction___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root__trace_cleanup\n"); );
    // Init
    Vtb_direction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_direction___024root*>(voidSelf);
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
