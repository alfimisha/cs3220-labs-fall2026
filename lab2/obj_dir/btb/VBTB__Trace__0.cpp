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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->BTB__DOT__btb_target[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->BTB__DOT__btb_target[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->BTB__DOT__btb_target[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->BTB__DOT__btb_target[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->BTB__DOT__btb_target[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->BTB__DOT__btb_target[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->BTB__DOT__btb_target[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->BTB__DOT__btb_target[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->BTB__DOT__btb_target[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->BTB__DOT__btb_target[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->BTB__DOT__btb_target[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->BTB__DOT__btb_target[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->BTB__DOT__btb_target[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->BTB__DOT__btb_target[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->BTB__DOT__btb_target[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->BTB__DOT__btb_target[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->BTB__DOT__btb_tag[0]),26);
        bufp->chgIData(oldp+17,(vlSelf->BTB__DOT__btb_tag[1]),26);
        bufp->chgIData(oldp+18,(vlSelf->BTB__DOT__btb_tag[2]),26);
        bufp->chgIData(oldp+19,(vlSelf->BTB__DOT__btb_tag[3]),26);
        bufp->chgIData(oldp+20,(vlSelf->BTB__DOT__btb_tag[4]),26);
        bufp->chgIData(oldp+21,(vlSelf->BTB__DOT__btb_tag[5]),26);
        bufp->chgIData(oldp+22,(vlSelf->BTB__DOT__btb_tag[6]),26);
        bufp->chgIData(oldp+23,(vlSelf->BTB__DOT__btb_tag[7]),26);
        bufp->chgIData(oldp+24,(vlSelf->BTB__DOT__btb_tag[8]),26);
        bufp->chgIData(oldp+25,(vlSelf->BTB__DOT__btb_tag[9]),26);
        bufp->chgIData(oldp+26,(vlSelf->BTB__DOT__btb_tag[10]),26);
        bufp->chgIData(oldp+27,(vlSelf->BTB__DOT__btb_tag[11]),26);
        bufp->chgIData(oldp+28,(vlSelf->BTB__DOT__btb_tag[12]),26);
        bufp->chgIData(oldp+29,(vlSelf->BTB__DOT__btb_tag[13]),26);
        bufp->chgIData(oldp+30,(vlSelf->BTB__DOT__btb_tag[14]),26);
        bufp->chgIData(oldp+31,(vlSelf->BTB__DOT__btb_tag[15]),26);
        bufp->chgBit(oldp+32,(vlSelf->BTB__DOT__btb_valid[0]));
        bufp->chgBit(oldp+33,(vlSelf->BTB__DOT__btb_valid[1]));
        bufp->chgBit(oldp+34,(vlSelf->BTB__DOT__btb_valid[2]));
        bufp->chgBit(oldp+35,(vlSelf->BTB__DOT__btb_valid[3]));
        bufp->chgBit(oldp+36,(vlSelf->BTB__DOT__btb_valid[4]));
        bufp->chgBit(oldp+37,(vlSelf->BTB__DOT__btb_valid[5]));
        bufp->chgBit(oldp+38,(vlSelf->BTB__DOT__btb_valid[6]));
        bufp->chgBit(oldp+39,(vlSelf->BTB__DOT__btb_valid[7]));
        bufp->chgBit(oldp+40,(vlSelf->BTB__DOT__btb_valid[8]));
        bufp->chgBit(oldp+41,(vlSelf->BTB__DOT__btb_valid[9]));
        bufp->chgBit(oldp+42,(vlSelf->BTB__DOT__btb_valid[10]));
        bufp->chgBit(oldp+43,(vlSelf->BTB__DOT__btb_valid[11]));
        bufp->chgBit(oldp+44,(vlSelf->BTB__DOT__btb_valid[12]));
        bufp->chgBit(oldp+45,(vlSelf->BTB__DOT__btb_valid[13]));
        bufp->chgBit(oldp+46,(vlSelf->BTB__DOT__btb_valid[14]));
        bufp->chgBit(oldp+47,(vlSelf->BTB__DOT__btb_valid[15]));
        bufp->chgIData(oldp+48,(vlSelf->BTB__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+49,(vlSelf->clk));
    bufp->chgBit(oldp+50,(vlSelf->reset));
    bufp->chgBit(oldp+51,(vlSelf->rd_ena));
    bufp->chgIData(oldp+52,(vlSelf->rd_sel),32);
    bufp->chgIData(oldp+53,(vlSelf->out_data),32);
    bufp->chgBit(oldp+54,(vlSelf->outs_valid));
    bufp->chgBit(oldp+55,(vlSelf->wr_ena));
    bufp->chgIData(oldp+56,(vlSelf->wr_sel),32);
    bufp->chgIData(oldp+57,(vlSelf->wr_data),32);
    bufp->chgCData(oldp+58,((0xfU & (vlSelf->rd_sel 
                                     >> 2U))),4);
    bufp->chgIData(oldp+59,((vlSelf->rd_sel >> 6U)),26);
    bufp->chgCData(oldp+60,((0xfU & (vlSelf->wr_sel 
                                     >> 2U))),4);
    bufp->chgIData(oldp+61,((vlSelf->wr_sel >> 6U)),26);
}

void VBTB___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root__trace_cleanup\n"); );
    // Init
    VBTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBTB___024root*>(voidSelf);
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
