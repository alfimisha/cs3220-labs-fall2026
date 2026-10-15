// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBTB.h for the primary calling header

#include "verilated.h"

#include "VBTB__Syms.h"
#include "VBTB___024root.h"

VL_INLINE_OPT void VBTB___024root___ico_sequent__TOP__0(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->outs_valid = ((IData)(vlSelf->rd_ena) & 
                          (vlSelf->BTB__DOT__btb_valid
                           [(0xffU & (vlSelf->rd_sel 
                                      >> 2U))] & (vlSelf->BTB__DOT__btb_tag
                                                  [
                                                  (0xffU 
                                                   & (vlSelf->rd_sel 
                                                      >> 2U))] 
                                                  == 
                                                  (vlSelf->rd_sel 
                                                   >> 0xaU))));
    vlSelf->out_data = ((IData)(vlSelf->outs_valid)
                         ? vlSelf->BTB__DOT__btb_target
                        [(0xffU & (vlSelf->rd_sel >> 2U))]
                         : 0U);
}

void VBTB___024root___eval_ico(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBTB___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VBTB___024root___eval_act(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval_act\n"); );
}

VL_INLINE_OPT void VBTB___024root___nba_sequent__TOP__0(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__BTB__DOT__btb_target__v0;
    __Vdlyvset__BTB__DOT__btb_target__v0 = 0;
    IData/*31:0*/ __Vilp;
    CData/*7:0*/ __Vdlyvdim0__BTB__DOT__btb_target__v256;
    __Vdlyvdim0__BTB__DOT__btb_target__v256 = 0;
    IData/*31:0*/ __Vdlyvval__BTB__DOT__btb_target__v256;
    __Vdlyvval__BTB__DOT__btb_target__v256 = 0;
    CData/*0:0*/ __Vdlyvset__BTB__DOT__btb_target__v256;
    __Vdlyvset__BTB__DOT__btb_target__v256 = 0;
    CData/*0:0*/ __Vdlyvset__BTB__DOT__btb_tag__v0;
    __Vdlyvset__BTB__DOT__btb_tag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__BTB__DOT__btb_tag__v256;
    __Vdlyvdim0__BTB__DOT__btb_tag__v256 = 0;
    IData/*21:0*/ __Vdlyvval__BTB__DOT__btb_tag__v256;
    __Vdlyvval__BTB__DOT__btb_tag__v256 = 0;
    CData/*0:0*/ __Vdlyvset__BTB__DOT__btb_tag__v256;
    __Vdlyvset__BTB__DOT__btb_tag__v256 = 0;
    CData/*0:0*/ __Vdlyvset__BTB__DOT__btb_valid__v0;
    __Vdlyvset__BTB__DOT__btb_valid__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__BTB__DOT__btb_valid__v256;
    __Vdlyvdim0__BTB__DOT__btb_valid__v256 = 0;
    CData/*0:0*/ __Vdlyvset__BTB__DOT__btb_valid__v256;
    __Vdlyvset__BTB__DOT__btb_valid__v256 = 0;
    // Body
    __Vdlyvset__BTB__DOT__btb_target__v0 = 0U;
    __Vdlyvset__BTB__DOT__btb_target__v256 = 0U;
    __Vdlyvset__BTB__DOT__btb_valid__v0 = 0U;
    __Vdlyvset__BTB__DOT__btb_valid__v256 = 0U;
    __Vdlyvset__BTB__DOT__btb_tag__v0 = 0U;
    __Vdlyvset__BTB__DOT__btb_tag__v256 = 0U;
    if (vlSelf->reset) {
        vlSelf->BTB__DOT__unnamedblk1__DOT__i = 0x100U;
        __Vdlyvset__BTB__DOT__btb_target__v0 = 1U;
        __Vdlyvset__BTB__DOT__btb_valid__v0 = 1U;
        __Vdlyvset__BTB__DOT__btb_tag__v0 = 1U;
    } else if (vlSelf->wr_ena) {
        __Vdlyvval__BTB__DOT__btb_target__v256 = vlSelf->wr_data;
        __Vdlyvset__BTB__DOT__btb_target__v256 = 1U;
        __Vdlyvdim0__BTB__DOT__btb_target__v256 = (0xffU 
                                                   & (vlSelf->wr_sel 
                                                      >> 2U));
        __Vdlyvset__BTB__DOT__btb_valid__v256 = 1U;
        __Vdlyvdim0__BTB__DOT__btb_valid__v256 = (0xffU 
                                                  & (vlSelf->wr_sel 
                                                     >> 2U));
        __Vdlyvval__BTB__DOT__btb_tag__v256 = (vlSelf->wr_sel 
                                               >> 0xaU);
        __Vdlyvset__BTB__DOT__btb_tag__v256 = 1U;
        __Vdlyvdim0__BTB__DOT__btb_tag__v256 = (0xffU 
                                                & (vlSelf->wr_sel 
                                                   >> 2U));
    }
    if (__Vdlyvset__BTB__DOT__btb_target__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->BTB__DOT__btb_target[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__BTB__DOT__btb_target__v256) {
        vlSelf->BTB__DOT__btb_target[__Vdlyvdim0__BTB__DOT__btb_target__v256] 
            = __Vdlyvval__BTB__DOT__btb_target__v256;
    }
    if (__Vdlyvset__BTB__DOT__btb_valid__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->BTB__DOT__btb_valid[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__BTB__DOT__btb_valid__v256) {
        vlSelf->BTB__DOT__btb_valid[__Vdlyvdim0__BTB__DOT__btb_valid__v256] = 1U;
    }
    if (__Vdlyvset__BTB__DOT__btb_tag__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->BTB__DOT__btb_tag[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__BTB__DOT__btb_tag__v256) {
        vlSelf->BTB__DOT__btb_tag[__Vdlyvdim0__BTB__DOT__btb_tag__v256] 
            = __Vdlyvval__BTB__DOT__btb_tag__v256;
    }
    vlSelf->outs_valid = ((IData)(vlSelf->rd_ena) & 
                          (vlSelf->BTB__DOT__btb_valid
                           [(0xffU & (vlSelf->rd_sel 
                                      >> 2U))] & (vlSelf->BTB__DOT__btb_tag
                                                  [
                                                  (0xffU 
                                                   & (vlSelf->rd_sel 
                                                      >> 2U))] 
                                                  == 
                                                  (vlSelf->rd_sel 
                                                   >> 0xaU))));
    vlSelf->out_data = ((IData)(vlSelf->outs_valid)
                         ? vlSelf->BTB__DOT__btb_target
                        [(0xffU & (vlSelf->rd_sel >> 2U))]
                         : 0U);
}

void VBTB___024root___eval_nba(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBTB___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VBTB___024root___eval_triggers__ico(VBTB___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB___024root___dump_triggers__ico(VBTB___024root* vlSelf);
#endif  // VL_DEBUG
void VBTB___024root___eval_triggers__act(VBTB___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB___024root___dump_triggers__act(VBTB___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB___024root___dump_triggers__nba(VBTB___024root* vlSelf);
#endif  // VL_DEBUG

void VBTB___024root___eval(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval\n"); );
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
        VBTB___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VBTB___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 250, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VBTB___024root___eval_ico(vlSelf);
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
            VBTB___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VBTB___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 250, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VBTB___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VBTB___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 250, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VBTB___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VBTB___024root___eval_debug_assertions(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval_debug_assertions\n"); );
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
