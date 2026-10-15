// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBTB__Syms.h"


void VBTB___024root__trace_chg_sub_0(VBTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VBTB___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root__trace_chg_top_0\n"); );
    // Init
    VBTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBTB___024root*>(voidSelf);
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBTB___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VBTB___024root__trace_chg_sub_0(VBTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgBit(oldp+2,(vlSelf->rd_ena));
    bufp->chgIData(oldp+3,(vlSelf->rd_sel),32);
    bufp->chgIData(oldp+4,(vlSelf->out_data),32);
    bufp->chgBit(oldp+5,(vlSelf->outs_valid));
    bufp->chgBit(oldp+6,(vlSelf->wr_ena));
    bufp->chgIData(oldp+7,(vlSelf->wr_sel),32);
    bufp->chgIData(oldp+8,(vlSelf->wr_data),32);
    bufp->chgCData(oldp+9,((0xffU & (vlSelf->rd_sel 
                                     >> 2U))),8);
    bufp->chgIData(oldp+10,((vlSelf->rd_sel >> 0xaU)),22);
    bufp->chgCData(oldp+11,((0xffU & (vlSelf->wr_sel 
                                      >> 2U))),8);
    bufp->chgIData(oldp+12,((vlSelf->wr_sel >> 0xaU)),22);
    bufp->chgIData(oldp+13,(vlSelf->BTB__DOT__unnamedblk1__DOT__i),32);
}

void VBTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root__trace_cleanup\n"); );
    // Init
    VBTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBTB___024root*>(voidSelf);
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
