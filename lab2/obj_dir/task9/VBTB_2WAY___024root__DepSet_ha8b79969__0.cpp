// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBTB_2WAY.h for the primary calling header

#include "verilated.h"

#include "VBTB_2WAY__Syms.h"
#include "VBTB_2WAY___024root.h"

VL_INLINE_OPT void VBTB_2WAY___024root___ico_sequent__TOP__0(VBTB_2WAY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->BTB_2WAY__DOT____VdfgTmp_hebc9861e__0 = 
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[(7U & (vlSelf->wr_sel 
                                                   >> 2U))];
    vlSelf->BTB_2WAY__DOT____VdfgTmp_h39a9067c__0 = 
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[(7U & (vlSelf->wr_sel 
                                                   >> 2U))];
    vlSelf->BTB_2WAY__DOT__rd_hit_w0 = (vlSelf->BTB_2WAY__DOT__btb_valid_w0
                                        [(7U & (vlSelf->rd_sel 
                                                >> 2U))] 
                                        & (vlSelf->BTB_2WAY__DOT__btb_tag_w0
                                           [(7U & (vlSelf->rd_sel 
                                                   >> 2U))] 
                                           == (vlSelf->rd_sel 
                                               >> 5U)));
    vlSelf->BTB_2WAY__DOT__wr_way = ((~ ((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_hebc9861e__0) 
                                         & (vlSelf->BTB_2WAY__DOT__btb_tag_w0
                                            [(7U & 
                                              (vlSelf->wr_sel 
                                               >> 2U))] 
                                            == (vlSelf->wr_sel 
                                                >> 5U)))) 
                                     & (((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_h39a9067c__0) 
                                         & (vlSelf->BTB_2WAY__DOT__btb_tag_w1
                                            [(7U & 
                                              (vlSelf->wr_sel 
                                               >> 2U))] 
                                            == (vlSelf->wr_sel 
                                                >> 5U))) 
                                        | ((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_hebc9861e__0) 
                                           & ((~ (IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_h39a9067c__0)) 
                                              | vlSelf->BTB_2WAY__DOT__lru
                                              [(7U 
                                                & (vlSelf->wr_sel 
                                                   >> 2U))]))));
    vlSelf->outs_valid = ((IData)(vlSelf->rd_ena) & 
                          ((IData)(vlSelf->BTB_2WAY__DOT__rd_hit_w0) 
                           | (vlSelf->BTB_2WAY__DOT__btb_valid_w1
                              [(7U & (vlSelf->rd_sel 
                                      >> 2U))] & (vlSelf->BTB_2WAY__DOT__btb_tag_w1
                                                  [
                                                  (7U 
                                                   & (vlSelf->rd_sel 
                                                      >> 2U))] 
                                                  == 
                                                  (vlSelf->rd_sel 
                                                   >> 5U)))));
    vlSelf->out_data = ((IData)(vlSelf->outs_valid)
                         ? ((IData)(vlSelf->BTB_2WAY__DOT__rd_hit_w0)
                             ? vlSelf->BTB_2WAY__DOT__btb_target_w0
                            [(7U & (vlSelf->rd_sel 
                                    >> 2U))] : vlSelf->BTB_2WAY__DOT__btb_target_w1
                            [(7U & (vlSelf->rd_sel 
                                    >> 2U))]) : 0U);
}

void VBTB_2WAY___024root___eval_ico(VBTB_2WAY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBTB_2WAY___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VBTB_2WAY___024root___eval_act(VBTB_2WAY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root___eval_act\n"); );
}

VL_INLINE_OPT void VBTB_2WAY___024root___nba_sequent__TOP__0(VBTB_2WAY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v0;
    __Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__BTB_2WAY__DOT__btb_valid_w0__v8;
    __Vdlyvdim0__BTB_2WAY__DOT__btb_valid_w0__v8 = 0;
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v8;
    __Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v8 = 0;
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v0;
    __Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__BTB_2WAY__DOT__btb_valid_w1__v8;
    __Vdlyvdim0__BTB_2WAY__DOT__btb_valid_w1__v8 = 0;
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v8;
    __Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v8 = 0;
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__lru__v0;
    __Vdlyvset__BTB_2WAY__DOT__lru__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__BTB_2WAY__DOT__lru__v8;
    __Vdlyvdim0__BTB_2WAY__DOT__lru__v8 = 0;
    CData/*0:0*/ __Vdlyvval__BTB_2WAY__DOT__lru__v8;
    __Vdlyvval__BTB_2WAY__DOT__lru__v8 = 0;
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__lru__v8;
    __Vdlyvset__BTB_2WAY__DOT__lru__v8 = 0;
    CData/*2:0*/ __Vdlyvdim0__BTB_2WAY__DOT__btb_target_w1__v0;
    __Vdlyvdim0__BTB_2WAY__DOT__btb_target_w1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BTB_2WAY__DOT__btb_target_w1__v0;
    __Vdlyvval__BTB_2WAY__DOT__btb_target_w1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__btb_target_w1__v0;
    __Vdlyvset__BTB_2WAY__DOT__btb_target_w1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__BTB_2WAY__DOT__btb_tag_w0__v0;
    __Vdlyvdim0__BTB_2WAY__DOT__btb_tag_w0__v0 = 0;
    IData/*26:0*/ __Vdlyvval__BTB_2WAY__DOT__btb_tag_w0__v0;
    __Vdlyvval__BTB_2WAY__DOT__btb_tag_w0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__btb_tag_w0__v0;
    __Vdlyvset__BTB_2WAY__DOT__btb_tag_w0__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__BTB_2WAY__DOT__btb_tag_w1__v0;
    __Vdlyvdim0__BTB_2WAY__DOT__btb_tag_w1__v0 = 0;
    IData/*26:0*/ __Vdlyvval__BTB_2WAY__DOT__btb_tag_w1__v0;
    __Vdlyvval__BTB_2WAY__DOT__btb_tag_w1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__btb_tag_w1__v0;
    __Vdlyvset__BTB_2WAY__DOT__btb_tag_w1__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__BTB_2WAY__DOT__btb_target_w0__v0;
    __Vdlyvdim0__BTB_2WAY__DOT__btb_target_w0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BTB_2WAY__DOT__btb_target_w0__v0;
    __Vdlyvval__BTB_2WAY__DOT__btb_target_w0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BTB_2WAY__DOT__btb_target_w0__v0;
    __Vdlyvset__BTB_2WAY__DOT__btb_target_w0__v0 = 0;
    // Body
    __Vdlyvset__BTB_2WAY__DOT__btb_target_w0__v0 = 0U;
    __Vdlyvset__BTB_2WAY__DOT__btb_target_w1__v0 = 0U;
    __Vdlyvset__BTB_2WAY__DOT__lru__v0 = 0U;
    __Vdlyvset__BTB_2WAY__DOT__lru__v8 = 0U;
    __Vdlyvset__BTB_2WAY__DOT__btb_tag_w1__v0 = 0U;
    __Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v0 = 0U;
    __Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v8 = 0U;
    __Vdlyvset__BTB_2WAY__DOT__btb_tag_w0__v0 = 0U;
    __Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v0 = 0U;
    __Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v8 = 0U;
    if (vlSelf->reset) {
        vlSelf->BTB_2WAY__DOT__unnamedblk1__DOT__i = 8U;
        __Vdlyvset__BTB_2WAY__DOT__lru__v0 = 1U;
        __Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v0 = 1U;
        __Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v0 = 1U;
    } else if (vlSelf->wr_ena) {
        __Vdlyvval__BTB_2WAY__DOT__lru__v8 = (1U & 
                                              (~ (IData)(vlSelf->BTB_2WAY__DOT__wr_way)));
        __Vdlyvset__BTB_2WAY__DOT__lru__v8 = 1U;
        __Vdlyvdim0__BTB_2WAY__DOT__lru__v8 = (7U & 
                                               (vlSelf->wr_sel 
                                                >> 2U));
        if (vlSelf->BTB_2WAY__DOT__wr_way) {
            __Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v8 = 1U;
            __Vdlyvdim0__BTB_2WAY__DOT__btb_valid_w1__v8 
                = (7U & (vlSelf->wr_sel >> 2U));
        }
        if ((1U & (~ (IData)(vlSelf->BTB_2WAY__DOT__wr_way)))) {
            __Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v8 = 1U;
            __Vdlyvdim0__BTB_2WAY__DOT__btb_valid_w0__v8 
                = (7U & (vlSelf->wr_sel >> 2U));
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->wr_ena) {
            if ((1U & (~ (IData)(vlSelf->BTB_2WAY__DOT__wr_way)))) {
                __Vdlyvval__BTB_2WAY__DOT__btb_target_w0__v0 
                    = vlSelf->wr_data;
                __Vdlyvset__BTB_2WAY__DOT__btb_target_w0__v0 = 1U;
                __Vdlyvdim0__BTB_2WAY__DOT__btb_target_w0__v0 
                    = (7U & (vlSelf->wr_sel >> 2U));
                __Vdlyvval__BTB_2WAY__DOT__btb_tag_w0__v0 
                    = (vlSelf->wr_sel >> 5U);
                __Vdlyvset__BTB_2WAY__DOT__btb_tag_w0__v0 = 1U;
                __Vdlyvdim0__BTB_2WAY__DOT__btb_tag_w0__v0 
                    = (7U & (vlSelf->wr_sel >> 2U));
            }
            if (vlSelf->BTB_2WAY__DOT__wr_way) {
                __Vdlyvval__BTB_2WAY__DOT__btb_target_w1__v0 
                    = vlSelf->wr_data;
                __Vdlyvset__BTB_2WAY__DOT__btb_target_w1__v0 = 1U;
                __Vdlyvdim0__BTB_2WAY__DOT__btb_target_w1__v0 
                    = (7U & (vlSelf->wr_sel >> 2U));
                __Vdlyvval__BTB_2WAY__DOT__btb_tag_w1__v0 
                    = (vlSelf->wr_sel >> 5U);
                __Vdlyvset__BTB_2WAY__DOT__btb_tag_w1__v0 = 1U;
                __Vdlyvdim0__BTB_2WAY__DOT__btb_tag_w1__v0 
                    = (7U & (vlSelf->wr_sel >> 2U));
            }
        }
    }
    if (__Vdlyvset__BTB_2WAY__DOT__btb_target_w0__v0) {
        vlSelf->BTB_2WAY__DOT__btb_target_w0[__Vdlyvdim0__BTB_2WAY__DOT__btb_target_w0__v0] 
            = __Vdlyvval__BTB_2WAY__DOT__btb_target_w0__v0;
    }
    if (__Vdlyvset__BTB_2WAY__DOT__btb_target_w1__v0) {
        vlSelf->BTB_2WAY__DOT__btb_target_w1[__Vdlyvdim0__BTB_2WAY__DOT__btb_target_w1__v0] 
            = __Vdlyvval__BTB_2WAY__DOT__btb_target_w1__v0;
    }
    if (__Vdlyvset__BTB_2WAY__DOT__lru__v0) {
        vlSelf->BTB_2WAY__DOT__lru[0U] = 0U;
        vlSelf->BTB_2WAY__DOT__lru[1U] = 0U;
        vlSelf->BTB_2WAY__DOT__lru[2U] = 0U;
        vlSelf->BTB_2WAY__DOT__lru[3U] = 0U;
        vlSelf->BTB_2WAY__DOT__lru[4U] = 0U;
        vlSelf->BTB_2WAY__DOT__lru[5U] = 0U;
        vlSelf->BTB_2WAY__DOT__lru[6U] = 0U;
        vlSelf->BTB_2WAY__DOT__lru[7U] = 0U;
    }
    if (__Vdlyvset__BTB_2WAY__DOT__lru__v8) {
        vlSelf->BTB_2WAY__DOT__lru[__Vdlyvdim0__BTB_2WAY__DOT__lru__v8] 
            = __Vdlyvval__BTB_2WAY__DOT__lru__v8;
    }
    if (__Vdlyvset__BTB_2WAY__DOT__btb_tag_w1__v0) {
        vlSelf->BTB_2WAY__DOT__btb_tag_w1[__Vdlyvdim0__BTB_2WAY__DOT__btb_tag_w1__v0] 
            = __Vdlyvval__BTB_2WAY__DOT__btb_tag_w1__v0;
    }
    if (__Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v0) {
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[0U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[1U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[2U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[3U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[4U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[5U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[6U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[7U] = 0U;
    }
    if (__Vdlyvset__BTB_2WAY__DOT__btb_valid_w1__v8) {
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[__Vdlyvdim0__BTB_2WAY__DOT__btb_valid_w1__v8] = 1U;
    }
    if (__Vdlyvset__BTB_2WAY__DOT__btb_tag_w0__v0) {
        vlSelf->BTB_2WAY__DOT__btb_tag_w0[__Vdlyvdim0__BTB_2WAY__DOT__btb_tag_w0__v0] 
            = __Vdlyvval__BTB_2WAY__DOT__btb_tag_w0__v0;
    }
    if (__Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v0) {
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[0U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[1U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[2U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[3U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[4U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[5U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[6U] = 0U;
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[7U] = 0U;
    }
    if (__Vdlyvset__BTB_2WAY__DOT__btb_valid_w0__v8) {
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[__Vdlyvdim0__BTB_2WAY__DOT__btb_valid_w0__v8] = 1U;
    }
    vlSelf->BTB_2WAY__DOT____VdfgTmp_h39a9067c__0 = 
        vlSelf->BTB_2WAY__DOT__btb_valid_w1[(7U & (vlSelf->wr_sel 
                                                   >> 2U))];
    vlSelf->BTB_2WAY__DOT____VdfgTmp_hebc9861e__0 = 
        vlSelf->BTB_2WAY__DOT__btb_valid_w0[(7U & (vlSelf->wr_sel 
                                                   >> 2U))];
    vlSelf->BTB_2WAY__DOT__rd_hit_w0 = (vlSelf->BTB_2WAY__DOT__btb_valid_w0
                                        [(7U & (vlSelf->rd_sel 
                                                >> 2U))] 
                                        & (vlSelf->BTB_2WAY__DOT__btb_tag_w0
                                           [(7U & (vlSelf->rd_sel 
                                                   >> 2U))] 
                                           == (vlSelf->rd_sel 
                                               >> 5U)));
    vlSelf->BTB_2WAY__DOT__wr_way = ((~ ((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_hebc9861e__0) 
                                         & (vlSelf->BTB_2WAY__DOT__btb_tag_w0
                                            [(7U & 
                                              (vlSelf->wr_sel 
                                               >> 2U))] 
                                            == (vlSelf->wr_sel 
                                                >> 5U)))) 
                                     & (((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_h39a9067c__0) 
                                         & (vlSelf->BTB_2WAY__DOT__btb_tag_w1
                                            [(7U & 
                                              (vlSelf->wr_sel 
                                               >> 2U))] 
                                            == (vlSelf->wr_sel 
                                                >> 5U))) 
                                        | ((IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_hebc9861e__0) 
                                           & ((~ (IData)(vlSelf->BTB_2WAY__DOT____VdfgTmp_h39a9067c__0)) 
                                              | vlSelf->BTB_2WAY__DOT__lru
                                              [(7U 
                                                & (vlSelf->wr_sel 
                                                   >> 2U))]))));
    vlSelf->outs_valid = ((IData)(vlSelf->rd_ena) & 
                          ((IData)(vlSelf->BTB_2WAY__DOT__rd_hit_w0) 
                           | (vlSelf->BTB_2WAY__DOT__btb_valid_w1
                              [(7U & (vlSelf->rd_sel 
                                      >> 2U))] & (vlSelf->BTB_2WAY__DOT__btb_tag_w1
                                                  [
                                                  (7U 
                                                   & (vlSelf->rd_sel 
                                                      >> 2U))] 
                                                  == 
                                                  (vlSelf->rd_sel 
                                                   >> 5U)))));
    vlSelf->out_data = ((IData)(vlSelf->outs_valid)
                         ? ((IData)(vlSelf->BTB_2WAY__DOT__rd_hit_w0)
                             ? vlSelf->BTB_2WAY__DOT__btb_target_w0
                            [(7U & (vlSelf->rd_sel 
                                    >> 2U))] : vlSelf->BTB_2WAY__DOT__btb_target_w1
                            [(7U & (vlSelf->rd_sel 
                                    >> 2U))]) : 0U);
}

void VBTB_2WAY___024root___eval_nba(VBTB_2WAY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBTB_2WAY___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VBTB_2WAY___024root___eval_triggers__ico(VBTB_2WAY___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB_2WAY___024root___dump_triggers__ico(VBTB_2WAY___024root* vlSelf);
#endif  // VL_DEBUG
void VBTB_2WAY___024root___eval_triggers__act(VBTB_2WAY___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB_2WAY___024root___dump_triggers__act(VBTB_2WAY___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB_2WAY___024root___dump_triggers__nba(VBTB_2WAY___024root* vlSelf);
#endif  // VL_DEBUG

void VBTB_2WAY___024root___eval(VBTB_2WAY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VBTB_2WAY___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VBTB_2WAY___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 331, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VBTB_2WAY___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VBTB_2WAY___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VBTB_2WAY___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 331, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VBTB_2WAY___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VBTB_2WAY___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 331, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VBTB_2WAY___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VBTB_2WAY___024root___eval_debug_assertions(VBTB_2WAY___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB_2WAY__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB_2WAY___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->rd_ena & 0xfeU))) {
        Verilated::overWidthError("rd_ena");}
    if (VL_UNLIKELY((vlSelf->wr_ena & 0xfeU))) {
        Verilated::overWidthError("wr_ena");}
}
#endif  // VL_DEBUG
