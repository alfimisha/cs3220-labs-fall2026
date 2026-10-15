// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBTB__Syms.h"


VL_ATTR_COLD void VBTB___024root__trace_init_sub__TOP__0(VBTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"rd_ena", false,-1);
    tracep->declBus(c+4,"rd_sel", false,-1, 31,0);
    tracep->declBus(c+5,"out_data", false,-1, 31,0);
    tracep->declBit(c+6,"outs_valid", false,-1);
    tracep->declBit(c+7,"wr_ena", false,-1);
    tracep->declBus(c+8,"wr_sel", false,-1, 31,0);
    tracep->declBus(c+9,"wr_data", false,-1, 31,0);
    tracep->pushNamePrefix("BTB ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+3,"rd_ena", false,-1);
    tracep->declBus(c+4,"rd_sel", false,-1, 31,0);
    tracep->declBus(c+5,"out_data", false,-1, 31,0);
    tracep->declBit(c+6,"outs_valid", false,-1);
    tracep->declBit(c+7,"wr_ena", false,-1);
    tracep->declBus(c+8,"wr_sel", false,-1, 31,0);
    tracep->declBus(c+9,"wr_data", false,-1, 31,0);
    tracep->declBus(c+10,"rd_index", false,-1, 7,0);
    tracep->declBus(c+11,"rd_tag", false,-1, 21,0);
    tracep->declBus(c+12,"wr_index", false,-1, 7,0);
    tracep->declBus(c+13,"wr_tag", false,-1, 21,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+14,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VBTB___024root__trace_init_top(VBTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root__trace_init_top\n"); );
    // Body
    VBTB___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBTB___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBTB___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBTB___024root__trace_register(VBTB___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBTB___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBTB___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBTB___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBTB___024root__trace_full_sub_0(VBTB___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBTB___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root__trace_full_top_0\n"); );
    // Init
    VBTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBTB___024root*>(voidSelf);
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBTB___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBTB___024root__trace_full_sub_0(VBTB___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->reset));
    bufp->fullBit(oldp+3,(vlSelf->rd_ena));
    bufp->fullIData(oldp+4,(vlSelf->rd_sel),32);
    bufp->fullIData(oldp+5,(vlSelf->out_data),32);
    bufp->fullBit(oldp+6,(vlSelf->outs_valid));
    bufp->fullBit(oldp+7,(vlSelf->wr_ena));
    bufp->fullIData(oldp+8,(vlSelf->wr_sel),32);
    bufp->fullIData(oldp+9,(vlSelf->wr_data),32);
    bufp->fullCData(oldp+10,((0xffU & (vlSelf->rd_sel 
                                       >> 2U))),8);
    bufp->fullIData(oldp+11,((vlSelf->rd_sel >> 0xaU)),22);
    bufp->fullCData(oldp+12,((0xffU & (vlSelf->wr_sel 
                                       >> 2U))),8);
    bufp->fullIData(oldp+13,((vlSelf->wr_sel >> 0xaU)),22);
    bufp->fullIData(oldp+14,(vlSelf->BTB__DOT__unnamedblk1__DOT__i),32);
}
