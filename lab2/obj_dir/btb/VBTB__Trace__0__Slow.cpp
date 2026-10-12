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
    tracep->declBit(c+50,"clk", false,-1);
    tracep->declBit(c+51,"reset", false,-1);
    tracep->declBit(c+52,"rd_ena", false,-1);
    tracep->declBus(c+53,"rd_sel", false,-1, 31,0);
    tracep->declBus(c+54,"out_data", false,-1, 31,0);
    tracep->declBit(c+55,"outs_valid", false,-1);
    tracep->declBit(c+56,"wr_ena", false,-1);
    tracep->declBus(c+57,"wr_sel", false,-1, 31,0);
    tracep->declBus(c+58,"wr_data", false,-1, 31,0);
    tracep->pushNamePrefix("BTB ");
    tracep->declBit(c+50,"clk", false,-1);
    tracep->declBit(c+51,"reset", false,-1);
    tracep->declBit(c+52,"rd_ena", false,-1);
    tracep->declBus(c+53,"rd_sel", false,-1, 31,0);
    tracep->declBus(c+54,"out_data", false,-1, 31,0);
    tracep->declBit(c+55,"outs_valid", false,-1);
    tracep->declBit(c+56,"wr_ena", false,-1);
    tracep->declBus(c+57,"wr_sel", false,-1, 31,0);
    tracep->declBus(c+58,"wr_data", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+1+i*1,"btb_valid", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,"btb_tag", true,(i+0), 25,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+33+i*1,"btb_target", true,(i+0), 31,0);
    }
    tracep->declBus(c+49,"i", false,-1, 31,0);
    tracep->declBus(c+59,"rd_idx", false,-1, 3,0);
    tracep->declBus(c+60,"rd_tag", false,-1, 25,0);
    tracep->declBus(c+61,"wr_idx", false,-1, 3,0);
    tracep->popNamePrefix(1);
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
    bufp->fullBit(oldp+1,(vlSelf->BTB__DOT__btb_valid[0]));
    bufp->fullBit(oldp+2,(vlSelf->BTB__DOT__btb_valid[1]));
    bufp->fullBit(oldp+3,(vlSelf->BTB__DOT__btb_valid[2]));
    bufp->fullBit(oldp+4,(vlSelf->BTB__DOT__btb_valid[3]));
    bufp->fullBit(oldp+5,(vlSelf->BTB__DOT__btb_valid[4]));
    bufp->fullBit(oldp+6,(vlSelf->BTB__DOT__btb_valid[5]));
    bufp->fullBit(oldp+7,(vlSelf->BTB__DOT__btb_valid[6]));
    bufp->fullBit(oldp+8,(vlSelf->BTB__DOT__btb_valid[7]));
    bufp->fullBit(oldp+9,(vlSelf->BTB__DOT__btb_valid[8]));
    bufp->fullBit(oldp+10,(vlSelf->BTB__DOT__btb_valid[9]));
    bufp->fullBit(oldp+11,(vlSelf->BTB__DOT__btb_valid[10]));
    bufp->fullBit(oldp+12,(vlSelf->BTB__DOT__btb_valid[11]));
    bufp->fullBit(oldp+13,(vlSelf->BTB__DOT__btb_valid[12]));
    bufp->fullBit(oldp+14,(vlSelf->BTB__DOT__btb_valid[13]));
    bufp->fullBit(oldp+15,(vlSelf->BTB__DOT__btb_valid[14]));
    bufp->fullBit(oldp+16,(vlSelf->BTB__DOT__btb_valid[15]));
    bufp->fullIData(oldp+17,(vlSelf->BTB__DOT__btb_tag[0]),26);
    bufp->fullIData(oldp+18,(vlSelf->BTB__DOT__btb_tag[1]),26);
    bufp->fullIData(oldp+19,(vlSelf->BTB__DOT__btb_tag[2]),26);
    bufp->fullIData(oldp+20,(vlSelf->BTB__DOT__btb_tag[3]),26);
    bufp->fullIData(oldp+21,(vlSelf->BTB__DOT__btb_tag[4]),26);
    bufp->fullIData(oldp+22,(vlSelf->BTB__DOT__btb_tag[5]),26);
    bufp->fullIData(oldp+23,(vlSelf->BTB__DOT__btb_tag[6]),26);
    bufp->fullIData(oldp+24,(vlSelf->BTB__DOT__btb_tag[7]),26);
    bufp->fullIData(oldp+25,(vlSelf->BTB__DOT__btb_tag[8]),26);
    bufp->fullIData(oldp+26,(vlSelf->BTB__DOT__btb_tag[9]),26);
    bufp->fullIData(oldp+27,(vlSelf->BTB__DOT__btb_tag[10]),26);
    bufp->fullIData(oldp+28,(vlSelf->BTB__DOT__btb_tag[11]),26);
    bufp->fullIData(oldp+29,(vlSelf->BTB__DOT__btb_tag[12]),26);
    bufp->fullIData(oldp+30,(vlSelf->BTB__DOT__btb_tag[13]),26);
    bufp->fullIData(oldp+31,(vlSelf->BTB__DOT__btb_tag[14]),26);
    bufp->fullIData(oldp+32,(vlSelf->BTB__DOT__btb_tag[15]),26);
    bufp->fullIData(oldp+33,(vlSelf->BTB__DOT__btb_target[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->BTB__DOT__btb_target[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->BTB__DOT__btb_target[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->BTB__DOT__btb_target[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->BTB__DOT__btb_target[4]),32);
    bufp->fullIData(oldp+38,(vlSelf->BTB__DOT__btb_target[5]),32);
    bufp->fullIData(oldp+39,(vlSelf->BTB__DOT__btb_target[6]),32);
    bufp->fullIData(oldp+40,(vlSelf->BTB__DOT__btb_target[7]),32);
    bufp->fullIData(oldp+41,(vlSelf->BTB__DOT__btb_target[8]),32);
    bufp->fullIData(oldp+42,(vlSelf->BTB__DOT__btb_target[9]),32);
    bufp->fullIData(oldp+43,(vlSelf->BTB__DOT__btb_target[10]),32);
    bufp->fullIData(oldp+44,(vlSelf->BTB__DOT__btb_target[11]),32);
    bufp->fullIData(oldp+45,(vlSelf->BTB__DOT__btb_target[12]),32);
    bufp->fullIData(oldp+46,(vlSelf->BTB__DOT__btb_target[13]),32);
    bufp->fullIData(oldp+47,(vlSelf->BTB__DOT__btb_target[14]),32);
    bufp->fullIData(oldp+48,(vlSelf->BTB__DOT__btb_target[15]),32);
    bufp->fullIData(oldp+49,(vlSelf->BTB__DOT__i),32);
    bufp->fullBit(oldp+50,(vlSelf->clk));
    bufp->fullBit(oldp+51,(vlSelf->reset));
    bufp->fullBit(oldp+52,(vlSelf->rd_ena));
    bufp->fullIData(oldp+53,(vlSelf->rd_sel),32);
    bufp->fullIData(oldp+54,(vlSelf->out_data),32);
    bufp->fullBit(oldp+55,(vlSelf->outs_valid));
    bufp->fullBit(oldp+56,(vlSelf->wr_ena));
    bufp->fullIData(oldp+57,(vlSelf->wr_sel),32);
    bufp->fullIData(oldp+58,(vlSelf->wr_data),32);
    bufp->fullCData(oldp+59,((0xfU & (vlSelf->rd_sel 
                                      >> 2U))),4);
    bufp->fullIData(oldp+60,((vlSelf->rd_sel >> 6U)),26);
    bufp->fullCData(oldp+61,((0xfU & (vlSelf->wr_sel 
                                      >> 2U))),4);
}
