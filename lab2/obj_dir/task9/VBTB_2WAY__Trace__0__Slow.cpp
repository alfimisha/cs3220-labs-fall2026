// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBTB_2WAY__Syms.h"


VL_ATTR_COLD void VBTB_2WAY___024root__trace_init_sub__TOP__0(VBTB_2WAY___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"reset", false,-1);
    tracep->declBit(c+60,"rd_ena", false,-1);
    tracep->declBus(c+61,"rd_sel", false,-1, 31,0);
    tracep->declBus(c+62,"out_data", false,-1, 31,0);
    tracep->declBit(c+63,"outs_valid", false,-1);
    tracep->declBit(c+64,"wr_ena", false,-1);
    tracep->declBus(c+65,"wr_sel", false,-1, 31,0);
    tracep->declBus(c+66,"wr_data", false,-1, 31,0);
    tracep->pushNamePrefix("BTB_2WAY ");
    tracep->declBit(c+58,"clk", false,-1);
    tracep->declBit(c+59,"reset", false,-1);
    tracep->declBit(c+60,"rd_ena", false,-1);
    tracep->declBus(c+61,"rd_sel", false,-1, 31,0);
    tracep->declBus(c+62,"out_data", false,-1, 31,0);
    tracep->declBit(c+63,"outs_valid", false,-1);
    tracep->declBit(c+64,"wr_ena", false,-1);
    tracep->declBus(c+65,"wr_sel", false,-1, 31,0);
    tracep->declBus(c+66,"wr_data", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+1+i*1,"btb_target_w0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+9+i*1,"btb_target_w1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+17+i*1,"btb_tag_w0", true,(i+0), 26,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+25+i*1,"btb_tag_w1", true,(i+0), 26,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+33+i*1,"btb_valid_w0", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+41+i*1,"btb_valid_w1", true,(i+0));
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBit(c+49+i*1,"lru", true,(i+0));
    }
    tracep->declBus(c+67,"rd_index", false,-1, 2,0);
    tracep->declBus(c+68,"rd_tag", false,-1, 26,0);
    tracep->declBus(c+69,"wr_index", false,-1, 2,0);
    tracep->declBus(c+70,"wr_tag", false,-1, 26,0);
    tracep->declBit(c+71,"rd_hit_w0", false,-1);
    tracep->declBit(c+72,"rd_hit_w1", false,-1);
    tracep->declBit(c+73,"wr_hit_w0", false,-1);
    tracep->declBit(c+74,"wr_hit_w1", false,-1);
    tracep->declBit(c+75,"wr_way", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+57,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VBTB_2WAY___024root__trace_init_top(VBTB_2WAY___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root__trace_init_top\n"); );
    // Body
    VBTB_2WAY___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBTB_2WAY___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBTB_2WAY___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBTB_2WAY___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBTB_2WAY___024root__trace_register(VBTB_2WAY___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBTB_2WAY___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBTB_2WAY___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBTB_2WAY___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBTB_2WAY___024root__trace_full_sub_0(VBTB_2WAY___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBTB_2WAY___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root__trace_full_top_0\n"); );
    // Init
    VBTB_2WAY___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBTB_2WAY___024root*>(voidSelf);
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBTB_2WAY___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBTB_2WAY___024root__trace_full_sub_0(VBTB_2WAY___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->BTB_2WAY__DOT__btb_target_w0[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->BTB_2WAY__DOT__btb_target_w0[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->BTB_2WAY__DOT__btb_target_w0[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->BTB_2WAY__DOT__btb_target_w0[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->BTB_2WAY__DOT__btb_target_w0[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->BTB_2WAY__DOT__btb_target_w0[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->BTB_2WAY__DOT__btb_target_w0[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->BTB_2WAY__DOT__btb_target_w0[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->BTB_2WAY__DOT__btb_target_w1[0]),32);
    bufp->fullIData(oldp+10,(vlSelf->BTB_2WAY__DOT__btb_target_w1[1]),32);
    bufp->fullIData(oldp+11,(vlSelf->BTB_2WAY__DOT__btb_target_w1[2]),32);
    bufp->fullIData(oldp+12,(vlSelf->BTB_2WAY__DOT__btb_target_w1[3]),32);
    bufp->fullIData(oldp+13,(vlSelf->BTB_2WAY__DOT__btb_target_w1[4]),32);
    bufp->fullIData(oldp+14,(vlSelf->BTB_2WAY__DOT__btb_target_w1[5]),32);
    bufp->fullIData(oldp+15,(vlSelf->BTB_2WAY__DOT__btb_target_w1[6]),32);
    bufp->fullIData(oldp+16,(vlSelf->BTB_2WAY__DOT__btb_target_w1[7]),32);
    bufp->fullIData(oldp+17,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[0]),27);
    bufp->fullIData(oldp+18,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[1]),27);
    bufp->fullIData(oldp+19,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[2]),27);
    bufp->fullIData(oldp+20,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[3]),27);
    bufp->fullIData(oldp+21,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[4]),27);
    bufp->fullIData(oldp+22,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[5]),27);
    bufp->fullIData(oldp+23,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[6]),27);
    bufp->fullIData(oldp+24,(vlSelf->BTB_2WAY__DOT__btb_tag_w0[7]),27);
    bufp->fullIData(oldp+25,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[0]),27);
    bufp->fullIData(oldp+26,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[1]),27);
    bufp->fullIData(oldp+27,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[2]),27);
    bufp->fullIData(oldp+28,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[3]),27);
    bufp->fullIData(oldp+29,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[4]),27);
    bufp->fullIData(oldp+30,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[5]),27);
    bufp->fullIData(oldp+31,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[6]),27);
    bufp->fullIData(oldp+32,(vlSelf->BTB_2WAY__DOT__btb_tag_w1[7]),27);
    bufp->fullBit(oldp+33,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[0]));
    bufp->fullBit(oldp+34,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[1]));
    bufp->fullBit(oldp+35,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[2]));
    bufp->fullBit(oldp+36,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[3]));
    bufp->fullBit(oldp+37,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[4]));
    bufp->fullBit(oldp+38,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[5]));
    bufp->fullBit(oldp+39,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[6]));
    bufp->fullBit(oldp+40,(vlSelf->BTB_2WAY__DOT__btb_valid_w0[7]));
    bufp->fullBit(oldp+41,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[0]));
    bufp->fullBit(oldp+42,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[1]));
    bufp->fullBit(oldp+43,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[2]));
    bufp->fullBit(oldp+44,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[3]));
    bufp->fullBit(oldp+45,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[4]));
    bufp->fullBit(oldp+46,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[5]));
    bufp->fullBit(oldp+47,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[6]));
    bufp->fullBit(oldp+48,(vlSelf->BTB_2WAY__DOT__btb_valid_w1[7]));
    bufp->fullBit(oldp+49,(vlSelf->BTB_2WAY__DOT__lru[0]));
    bufp->fullBit(oldp+50,(vlSelf->BTB_2WAY__DOT__lru[1]));
    bufp->fullBit(oldp+51,(vlSelf->BTB_2WAY__DOT__lru[2]));
    bufp->fullBit(oldp+52,(vlSelf->BTB_2WAY__DOT__lru[3]));
    bufp->fullBit(oldp+53,(vlSelf->BTB_2WAY__DOT__lru[4]));
    bufp->fullBit(oldp+54,(vlSelf->BTB_2WAY__DOT__lru[5]));
    bufp->fullBit(oldp+55,(vlSelf->BTB_2WAY__DOT__lru[6]));
    bufp->fullBit(oldp+56,(vlSelf->BTB_2WAY__DOT__lru[7]));
    bufp->fullIData(oldp+57,(vlSelf->BTB_2WAY__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+58,(vlSelf->clk));
    bufp->fullBit(oldp+59,(vlSelf->reset));
    bufp->fullBit(oldp+60,(vlSelf->rd_ena));
    bufp->fullIData(oldp+61,(vlSelf->rd_sel),32);
    bufp->fullIData(oldp+62,(vlSelf->out_data),32);
    bufp->fullBit(oldp+63,(vlSelf->outs_valid));
    bufp->fullBit(oldp+64,(vlSelf->wr_ena));
    bufp->fullIData(oldp+65,(vlSelf->wr_sel),32);
    bufp->fullIData(oldp+66,(vlSelf->wr_data),32);
    bufp->fullCData(oldp+67,((7U & (vlSelf->rd_sel 
                                    >> 2U))),3);
    bufp->fullIData(oldp+68,((vlSelf->rd_sel >> 5U)),27);
    bufp->fullCData(oldp+69,((7U & (vlSelf->wr_sel 
                                    >> 2U))),3);
    bufp->fullIData(oldp+70,((vlSelf->wr_sel >> 5U)),27);
    bufp->fullBit(oldp+71,(vlSelf->BTB_2WAY__DOT__rd_hit_w0));
    bufp->fullBit(oldp+72,((vlSelf->BTB_2WAY__DOT__btb_valid_w1
                            [(7U & (vlSelf->rd_sel 
                                    >> 2U))] & (vlSelf->BTB_2WAY__DOT__btb_tag_w1
                                                [(7U 
                                                  & (vlSelf->rd_sel 
                                                     >> 2U))] 
                                                == 
                                                (vlSelf->rd_sel 
                                                 >> 5U)))));
    bufp->fullBit(oldp+73,(((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_hebc9861e__0) 
                            & (vlSelf->BTB_2WAY__DOT__btb_tag_w0
                               [(7U & (vlSelf->wr_sel 
                                       >> 2U))] == 
                               (vlSelf->wr_sel >> 5U)))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_h39a9067c__0) 
                            & (vlSelf->BTB_2WAY__DOT__btb_tag_w1
                               [(7U & (vlSelf->wr_sel 
                                       >> 2U))] == 
                               (vlSelf->wr_sel >> 5U)))));
    bufp->fullBit(oldp+75,(vlSelf->BTB_2WAY__DOT__wr_way));
}
