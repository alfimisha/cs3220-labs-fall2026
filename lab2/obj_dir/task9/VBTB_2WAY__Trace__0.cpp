// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBTB_2WAY__Syms.h"


void VBTB_2WAY___024root__trace_chg_sub_0(VBTB_2WAY___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VBTB_2WAY___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root__trace_chg_top_0\n"); );
    // Init
    VBTB_2WAY___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBTB_2WAY___024root*>(voidSelf);
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VBTB_2WAY___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VBTB_2WAY___024root__trace_chg_sub_0(VBTB_2WAY___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->BTB_2WAY__DOT__btb_target_w0[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->BTB_2WAY__DOT__btb_target_w0[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->BTB_2WAY__DOT__btb_target_w0[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->BTB_2WAY__DOT__btb_target_w0[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->BTB_2WAY__DOT__btb_target_w0[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->BTB_2WAY__DOT__btb_target_w0[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->BTB_2WAY__DOT__btb_target_w0[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->BTB_2WAY__DOT__btb_target_w0[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->BTB_2WAY__DOT__btb_target_w1[0]),32);
        bufp->chgIData(oldp+9,(vlSelf->BTB_2WAY__DOT__btb_target_w1[1]),32);
        bufp->chgIData(oldp+10,(vlSelf->BTB_2WAY__DOT__btb_target_w1[2]),32);
        bufp->chgIData(oldp+11,(vlSelf->BTB_2WAY__DOT__btb_target_w1[3]),32);
        bufp->chgIData(oldp+12,(vlSelf->BTB_2WAY__DOT__btb_target_w1[4]),32);
        bufp->chgIData(oldp+13,(vlSelf->BTB_2WAY__DOT__btb_target_w1[5]),32);
        bufp->chgIData(oldp+14,(vlSelf->BTB_2WAY__DOT__btb_target_w1[6]),32);
        bufp->chgIData(oldp+15,(vlSelf->BTB_2WAY__DOT__btb_target_w1[7]),32);
        bufp->chgIData(oldp+16,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[0]),27);
        bufp->chgIData(oldp+17,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[1]),27);
        bufp->chgIData(oldp+18,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[2]),27);
        bufp->chgIData(oldp+19,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[3]),27);
        bufp->chgIData(oldp+20,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[4]),27);
        bufp->chgIData(oldp+21,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[5]),27);
        bufp->chgIData(oldp+22,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[6]),27);
        bufp->chgIData(oldp+23,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[7]),27);
        bufp->chgIData(oldp+24,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[0]),27);
        bufp->chgIData(oldp+25,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[1]),27);
        bufp->chgIData(oldp+26,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[2]),27);
        bufp->chgIData(oldp+27,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[3]),27);
        bufp->chgIData(oldp+28,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[4]),27);
        bufp->chgIData(oldp+29,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[5]),27);
        bufp->chgIData(oldp+30,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[6]),27);
        bufp->chgIData(oldp+31,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[7]),27);
        bufp->chgBit(oldp+32,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[0]));
        bufp->chgBit(oldp+33,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[1]));
        bufp->chgBit(oldp+34,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[2]));
        bufp->chgBit(oldp+35,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[3]));
        bufp->chgBit(oldp+36,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[4]));
        bufp->chgBit(oldp+37,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[5]));
        bufp->chgBit(oldp+38,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[6]));
        bufp->chgBit(oldp+39,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[7]));
        bufp->chgBit(oldp+40,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[0]));
        bufp->chgBit(oldp+41,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[1]));
        bufp->chgBit(oldp+42,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[2]));
        bufp->chgBit(oldp+43,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[3]));
        bufp->chgBit(oldp+44,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[4]));
        bufp->chgBit(oldp+45,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[5]));
        bufp->chgBit(oldp+46,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[6]));
        bufp->chgBit(oldp+47,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[7]));
        bufp->chgBit(oldp+48,(vlSelf->BTB_2WAY__DOT__lru[0]));
        bufp->chgBit(oldp+49,(vlSelf->BTB_2WAY__DOT__lru[1]));
        bufp->chgBit(oldp+50,(vlSelf->BTB_2WAY__DOT__lru[2]));
        bufp->chgBit(oldp+51,(vlSelf->BTB_2WAY__DOT__lru[3]));
        bufp->chgBit(oldp+52,(vlSelf->BTB_2WAY__DOT__lru[4]));
        bufp->chgBit(oldp+53,(vlSelf->BTB_2WAY__DOT__lru[5]));
        bufp->chgBit(oldp+54,(vlSelf->BTB_2WAY__DOT__lru[6]));
        bufp->chgBit(oldp+55,(vlSelf->BTB_2WAY__DOT__lru[7]));
        bufp->chgIData(oldp+56,(vlSelf->BTB_2WAY__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+57,(vlSelf->clk));
    bufp->chgBit(oldp+58,(vlSelf->reset));
    bufp->chgBit(oldp+59,(vlSelf->rd_ena));
    bufp->chgIData(oldp+60,(vlSelf->rd_sel),32);
    bufp->chgIData(oldp+61,(vlSelf->out_data),32);
    bufp->chgBit(oldp+62,(vlSelf->outs_valid));
    bufp->chgBit(oldp+63,(vlSelf->wr_ena));
    bufp->chgIData(oldp+64,(vlSelf->wr_sel),32);
    bufp->chgIData(oldp+65,(vlSelf->wr_data),32);
    bufp->chgCData(oldp+66,((7U & (vlSelf->rd_sel >> 2U))),3);
    bufp->chgIData(oldp+67,((vlSelf->rd_sel >> 5U)),27);
    bufp->chgCData(oldp+68,((7U & (vlSelf->wr_sel >> 2U))),3);
    bufp->chgIData(oldp+69,((vlSelf->wr_sel >> 5U)),27);
    bufp->chgBit(oldp+70,(vlSelf->BTB_2WAY__DOT__rd_hit_w0));
    bufp->chgBit(oldp+71,((vlSelf->BTB_2WAY__DOT__btb_valid_w1
                           [(7U & (vlSelf->rd_sel >> 2U))] 
                           & (vlSelf->BTB_2WAY__DOT__btb_tag_w1
                              [(7U & (vlSelf->rd_sel 
                                      >> 2U))] == (vlSelf->rd_sel 
                                                   >> 5U)))));
    bufp->chgBit(oldp+72,(((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_hebc9861e__0) 
                           & (vlSelf->BTB_2WAY__DOT__btb_tag_w0
                              [(7U & (vlSelf->wr_sel 
                                      >> 2U))] == (vlSelf->wr_sel 
                                                   >> 5U)))));
    bufp->chgBit(oldp+73,(((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_h39a9067c__0) 
                           & (vlSelf->BTB_2WAY__DOT__btb_tag_w1
                              [(7U & (vlSelf->wr_sel 
                                      >> 2U))] == (vlSelf->wr_sel 
                                                   >> 5U)))));
    bufp->chgBit(oldp+74,(vlSelf->BTB_2WAY__DOT__wr_way));
}

void VBTB_2WAY___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root__trace_cleanup\n"); );
    // Init
    VBTB_2WAY___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBTB_2WAY___024root*>(voidSelf);
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
