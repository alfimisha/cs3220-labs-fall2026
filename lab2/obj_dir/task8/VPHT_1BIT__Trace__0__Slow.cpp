// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPHT_1BIT__Syms.h"


VL_ATTR_COLD void VPHT_1BIT___024root__trace_init_sub__TOP__0(VPHT_1BIT___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"rd_sel", false,-1, 9,0);
    tracep->declBit(c+4,"out", false,-1);
    tracep->declBus(c+5,"wr_sel", false,-1, 9,0);
    tracep->declBit(c+6,"wr_data", false,-1);
    tracep->declBit(c+7,"wr_ena", false,-1);
    tracep->pushNamePrefix("PHT_1BIT ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"rd_sel", false,-1, 9,0);
    tracep->declBit(c+4,"out", false,-1);
    tracep->declBus(c+5,"wr_sel", false,-1, 9,0);
    tracep->declBit(c+6,"wr_data", false,-1);
    tracep->declBit(c+7,"wr_ena", false,-1);
    tracep->declBus(c+8,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VPHT_1BIT___024root__trace_init_top(VPHT_1BIT___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root__trace_init_top\n"); );
    // Body
    VPHT_1BIT___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPHT_1BIT___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPHT_1BIT___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPHT_1BIT___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPHT_1BIT___024root__trace_register(VPHT_1BIT___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPHT_1BIT___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPHT_1BIT___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPHT_1BIT___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPHT_1BIT___024root__trace_full_sub_0(VPHT_1BIT___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPHT_1BIT___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root__trace_full_top_0\n"); );
    // Init
    VPHT_1BIT___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPHT_1BIT___024root*>(voidSelf);
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPHT_1BIT___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPHT_1BIT___024root__trace_full_sub_0(VPHT_1BIT___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullSData(oldp+3,(vlSelf->rd_sel),10);
    bufp->fullBit(oldp+4,(vlSelf->out));
    bufp->fullSData(oldp+5,(vlSelf->wr_sel),10);
    bufp->fullBit(oldp+6,(vlSelf->wr_data));
    bufp->fullBit(oldp+7,(vlSelf->wr_ena));
    bufp->fullIData(oldp+8,(vlSelf->PHT_1BIT__DOT__i),32);
}
