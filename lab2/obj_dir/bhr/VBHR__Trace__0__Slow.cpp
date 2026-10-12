// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBHR__Syms.h"


VL_ATTR_COLD void VBHR___024root__trace_init_sub__TOP__0(VBHR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"wr_ena", false,-1);
    tracep->declBus(c+4,"wr_data", false,-1, 31,0);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->pushNamePrefix("BHR ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"wr_ena", false,-1);
    tracep->declBus(c+4,"wr_data", false,-1, 31,0);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VBHR___024root__trace_init_top(VBHR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root__trace_init_top\n"); );
    // Body
    VBHR___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBHR___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBHR___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBHR___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBHR___024root__trace_register(VBHR___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBHR___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBHR___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBHR___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBHR___024root__trace_full_sub_0(VBHR___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBHR___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root__trace_full_top_0\n"); );
    // Init
    VBHR___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBHR___024root*>(voidSelf);
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBHR___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBHR___024root__trace_full_sub_0(VBHR___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullBit(oldp+3,(vlSelf->wr_ena));
    bufp->fullIData(oldp+4,(vlSelf->wr_data),32);
    bufp->fullCData(oldp+5,(vlSelf->out),8);
}
