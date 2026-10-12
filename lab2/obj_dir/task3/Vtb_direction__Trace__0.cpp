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
    VlWide<5>/*159:0*/ __Vtemp_h99e60b3d__0;
    VlWide<6>/*191:0*/ __Vtemp_hbae848de__0;
    VlWide<6>/*191:0*/ __Vtemp_hfec0d78f__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1e61c6f__0;
    VlWide<5>/*159:0*/ __Vtemp_h24201529__0;
    VlWide<8>/*255:0*/ __Vtemp_h2f2e985e__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE),32);
        bufp->chgBit(oldp+3,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE 
                                            >> 0x20U)))));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE));
        bufp->chgIData(oldp+5,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                 << 0x10U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                              >> 0x10U))),32);
        bufp->chgIData(oldp+6,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                 << 0x10U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                              >> 0x10U))),32);
        bufp->chgIData(oldp+7,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                 << 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0xaU))),32);
        bufp->chgIData(oldp+8,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0xaU))),32);
        bufp->chgIData(oldp+9,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 << 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0xaU))),32);
        bufp->chgBit(oldp+10,((IData)((0U != (0x300U 
                                              & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U])))));
        bufp->chgIData(oldp+11,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_target_AGEX),32);
        bufp->chgIData(oldp+12,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                  << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                               >> 0xcU))),32);
        bufp->chgIData(oldp+13,(vlSymsp->TOP__tb_direction__dut.__PVT__cycle_count),32);
        bufp->chgWData(oldp+14,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch),129);
        bufp->chgWData(oldp+19,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch),241);
        bufp->chgWData(oldp+27,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch),175);
        bufp->chgWData(oldp+33,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch),173);
        bufp->chgQData(oldp+39,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE),33);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_DE));
        bufp->chgQData(oldp+42,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE),38);
        bufp->chgBit(oldp+44,((1U & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[4U])));
        bufp->chgIData(oldp+45,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[2U]),32);
        bufp->chgIData(oldp+47,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[1U]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[0U]),32);
        bufp->chgCData(oldp+49,((7U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+50,((vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+51,((0x7fU & vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U])),7);
        bufp->chgCData(oldp+52,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE),6);
        bufp->chgCData(oldp+53,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_I_DE),4);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
        bufp->chgIData(oldp+55,(((1U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
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
                                                   : 0U))))))),32);
        bufp->chgCData(oldp+56,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+57,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+58,((0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 7U))),5);
        bufp->chgBit(oldp+59,(((0x1cU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1dU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((0x1eU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0x1fU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x20U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | (0x21U 
                                              == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
        bufp->chgBit(oldp+60,(((0x19U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((0x1aU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | (0x1bU == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))))));
        bufp->chgBit(oldp+61,((0x17U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+62,((0x18U == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__op_I_DE))));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE));
        bufp->chgBit(oldp+64,((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                             >> 0x25U)))));
        bufp->chgCData(oldp+65,((0x1fU & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                                  >> 0x20U)))),5);
        bufp->chgIData(oldp+66,((IData)(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE)),32);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE));
        bufp->chgIData(oldp+69,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs),32);
        bufp->chgBit(oldp+70,((((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0xfU)))) 
                               | (((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                   & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                      >> (0x1fU & (
                                                   vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x14U)))) 
                                  | ((IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                     & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__in_use_regs 
                                        >> (0x1fU & 
                                            (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 7U))))))));
        bufp->chgIData(oldp+71,(((IData)(4U) + vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
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
        bufp->chgWData(oldp+72,(__Vtemp_h99e60b3d__0),129);
        bufp->chgIData(oldp+77,((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE)),32);
        bufp->chgBit(oldp+78,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
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
        bufp->chgWData(oldp+79,(__Vtemp_hbae848de__0),173);
        bufp->chgCData(oldp+85,((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                          >> 8U))),6);
        bufp->chgIData(oldp+86,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                  << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+87,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                  << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                               >> 0xeU))),32);
        bufp->chgIData(oldp+88,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                  << 0x12U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                               >> 0xeU))),32);
        bufp->chgBit(oldp+89,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                     >> 7U))));
        bufp->chgIData(oldp+90,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                  << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                               >> 8U))),32);
        bufp->chgCData(oldp+91,((0x1fU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U])),5);
        bufp->chgBit(oldp+92,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                     >> 5U))));
        bufp->chgIData(oldp+93,(((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                  << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                               >> 8U))),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__dmem
                                [(0x3fffU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                             >> 0xaU))]),32);
        bufp->chgBit(oldp+95,((1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                     >> 6U))));
        __Vtemp_hfec0d78f__0[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX)))) 
                                     << 8U) | (0xffU 
                                               & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U]));
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
                                        >> 0x18U) | 
                                       ((IData)(((0x3fffffffffULL 
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
                                        << 0x1eU) | 
                                       (0x3fffc000U 
                                        & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                           >> 2U))));
        __Vtemp_hfec0d78f__0[5U] = ((0x3fffU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                >> 2U)) 
                                    | (0x4000U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 2U)));
        bufp->chgWData(oldp+96,(__Vtemp_hfec0d78f__0),175);
        bufp->chgBit(oldp+102,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                      >> 0x10U))));
        bufp->chgIData(oldp+103,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                   << 0x10U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                >> 0x10U))),32);
        bufp->chgCData(oldp+104,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                           >> 0xaU))),6);
        bufp->chgBit(oldp+105,(((0x1cU == (0x3fU & 
                                           (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                            >> 0xaU)))
                                 ? (((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0xaU)) 
                                    == ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0xaU)))
                                 : ((0x1dU == (0x3fU 
                                               & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  >> 0xaU)))
                                     ? (((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          << 0x16U) 
                                         | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0xaU)) 
                                        != ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0xaU)))
                                     : ((0x1eU == (0x3fU 
                                                   & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                      >> 0xaU)))
                                         ? (IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__VdfgExtracted_h047d73e2__0)
                                         : ((0x1fU 
                                             == (0x3fU 
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
                                             : ((0x20U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
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
        bufp->chgBit(oldp+106,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 9U))));
        bufp->chgBit(oldp+107,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 8U))));
        bufp->chgBit(oldp+108,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 7U))));
        bufp->chgBit(oldp+109,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 6U))));
        bufp->chgBit(oldp+110,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+111,((0x1fU & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U])),5);
        bufp->chgIData(oldp+112,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   << 0x16U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                >> 0xaU))),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__aluout_AGEX),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__memaddr_AGEX),32);
        bufp->chgBit(oldp+115,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                      >> 0xcU))));
        bufp->chgCData(oldp+116,((0x3fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                           >> 6U))),6);
        bufp->chgIData(oldp+117,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                                >> 0xcU))),32);
        bufp->chgIData(oldp+118,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                                >> 6U))),32);
        bufp->chgBit(oldp+119,((1U & (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                      >> 5U))));
        bufp->chgCData(oldp+120,((0x1fU & vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
        bufp->chgIData(oldp+121,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__regval_WB),32);
        bufp->chgIData(oldp+122,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                                >> 6U))),32);
        bufp->chgIData(oldp+123,(((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                                >> 6U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
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
                                             : ((5U 
                                                 == (IData)(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (((- (IData)(
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
                                                 : 
                                                ((3U 
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
                                     << 0xaU) | (((
                                                   (0x1cU 
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
                                                  [
                                                  (0x1fU 
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
        bufp->chgWData(oldp+124,(__Vtemp_h2f2e985e__0),241);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xfU))]),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs
                                 [(0x1fU & (vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x14U))]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+134,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[0]),32);
        bufp->chgIData(oldp+135,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[1]),32);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[2]),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[3]),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[4]),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[5]),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[6]),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[7]),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[8]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[9]),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[10]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[11]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[12]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[13]),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[14]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[15]),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[16]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[17]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[18]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[19]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[20]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[21]),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[22]),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[23]),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[24]),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[25]),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[26]),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[27]),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[28]),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[29]),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[30]),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__regs[31]),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+167,(vlSelf->clk));
    bufp->chgBit(oldp+168,(vlSelf->reset));
    bufp->chgIData(oldp+169,(vlSelf->pc),32);
    bufp->chgIData(oldp+170,(vlSelf->fetch_inst),32);
    bufp->chgIData(oldp+171,(vlSelf->fetch_id),32);
    bufp->chgIData(oldp+172,(vlSelf->gp),32);
    bufp->chgBit(oldp+173,(vlSelf->redirect));
    bufp->chgBit(oldp+174,(vlSelf->stall));
    bufp->chgIData(oldp+175,(vlSelf->inst),32);
    bufp->chgIData(oldp+176,(vlSelf->branch_pc),32);
    bufp->chgIData(oldp+177,(vlSelf->branch_id),32);
    bufp->chgIData(oldp+178,(vlSelf->operand1),32);
    bufp->chgIData(oldp+179,(vlSelf->operand2),32);
    bufp->chgBit(oldp+180,(vlSelf->branch_flag));
    bufp->chgIData(oldp+181,(vlSelf->actual_pc),32);
    bufp->chgIData(oldp+182,(vlSelf->retired_inst),32);
    bufp->chgCData(oldp+183,(vlSelf->history),8);
    bufp->chgCData(oldp+184,(vlSelf->fetch_index),8);
    bufp->chgCData(oldp+185,(vlSelf->write_index),8);
    bufp->chgBit(oldp+186,(vlSelf->prediction));
    bufp->chgBit(oldp+187,(vlSelf->bhr_write));
    bufp->chgBit(oldp+188,(vlSelf->pht_write));
    bufp->chgBit(oldp+189,(vlSelf->pht_data));
    bufp->chgIData(oldp+190,(vlSelf->bhr_data),32);
    bufp->chgIData(oldp+191,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+192,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.branch_count),32);
    bufp->chgIData(oldp+193,(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.correct_branch_count),32);
    bufp->chgIData(oldp+194,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0U]),32);
    bufp->chgIData(oldp+195,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[1U]),32);
    bufp->chgIData(oldp+196,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[2U]),32);
    bufp->chgIData(oldp+197,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U]),32);
    bufp->chgIData(oldp+198,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[4U]),32);
    bufp->chgIData(oldp+199,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[5U]),32);
    bufp->chgIData(oldp+200,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[6U]),32);
    bufp->chgIData(oldp+201,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[7U]),32);
    bufp->chgIData(oldp+202,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[8U]),32);
    bufp->chgIData(oldp+203,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[9U]),32);
    bufp->chgIData(oldp+204,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->chgIData(oldp+205,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->chgIData(oldp+206,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->chgIData(oldp+207,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->chgIData(oldp+208,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->chgIData(oldp+209,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->chgIData(oldp+210,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->chgIData(oldp+211,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->chgIData(oldp+212,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->chgIData(oldp+213,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->chgIData(oldp+214,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->chgIData(oldp+215,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->chgIData(oldp+216,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->chgIData(oldp+217,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->chgIData(oldp+218,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->chgIData(oldp+219,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->chgIData(oldp+220,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->chgIData(oldp+221,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->chgIData(oldp+222,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->chgIData(oldp+223,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->chgIData(oldp+224,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->chgIData(oldp+225,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->chgIData(oldp+226,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[0U]),32);
    bufp->chgIData(oldp+227,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[1U]),32);
    bufp->chgIData(oldp+228,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[2U]),32);
    bufp->chgIData(oldp+229,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[3U]),32);
    bufp->chgIData(oldp+230,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[4U]),32);
    bufp->chgIData(oldp+231,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[5U]),32);
    bufp->chgIData(oldp+232,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[6U]),32);
    bufp->chgIData(oldp+233,(vlSymsp->TOP__tb_direction__dut__my_WB_stage.WB_counters[7U]),32);
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
