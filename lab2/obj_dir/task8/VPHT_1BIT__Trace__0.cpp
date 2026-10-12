// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPHT_1BIT__Syms.h"


void VPHT_1BIT___024root__trace_chg_sub_0(VPHT_1BIT___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VPHT_1BIT___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root__trace_chg_top_0\n"); );
    // Init
    VPHT_1BIT___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPHT_1BIT___024root*>(voidSelf);
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VPHT_1BIT___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VPHT_1BIT___024root__trace_chg_sub_0(VPHT_1BIT___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgSData(oldp+2,(vlSelf->rd_sel),10);
    bufp->chgBit(oldp+3,(vlSelf->out));
    bufp->chgSData(oldp+4,(vlSelf->wr_sel),10);
    bufp->chgBit(oldp+5,(vlSelf->wr_data));
    bufp->chgBit(oldp+6,(vlSelf->wr_ena));
    bufp->chgIData(oldp+7,(vlSelf->PHT_1BIT__DOT__i),32);
}

void VPHT_1BIT___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root__trace_cleanup\n"); );
    // Init
    VPHT_1BIT___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPHT_1BIT___024root*>(voidSelf);
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
