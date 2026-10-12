// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPHT.h for the primary calling header

#include "verilated.h"

#include "VPHT__Syms.h"
#include "VPHT___024root.h"

VL_INLINE_OPT void VPHT___024root___ico_sequent__TOP__0(VPHT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->out = (1U & (vlSelf->PHT__DOT__PHT[vlSelf->rd_sel] 
                         >> 1U));
}

void VPHT___024root___eval_ico(VPHT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VPHT___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VPHT___024root___eval_act(VPHT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPHT___024root___nba_sequent__TOP__0(VPHT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__PHT__DOT__PHT__v0;
    __Vdlyvset__PHT__DOT__PHT__v0 = 0;
    IData/*31:0*/ __Vilp;
    CData/*7:0*/ __Vdlyvdim0__PHT__DOT__PHT__v256;
    __Vdlyvdim0__PHT__DOT__PHT__v256 = 0;
    CData/*1:0*/ __Vdlyvval__PHT__DOT__PHT__v256;
    __Vdlyvval__PHT__DOT__PHT__v256 = 0;
    CData/*0:0*/ __Vdlyvset__PHT__DOT__PHT__v256;
    __Vdlyvset__PHT__DOT__PHT__v256 = 0;
    CData/*7:0*/ __Vdlyvdim0__PHT__DOT__PHT__v257;
    __Vdlyvdim0__PHT__DOT__PHT__v257 = 0;
    CData/*1:0*/ __Vdlyvval__PHT__DOT__PHT__v257;
    __Vdlyvval__PHT__DOT__PHT__v257 = 0;
    CData/*0:0*/ __Vdlyvset__PHT__DOT__PHT__v257;
    __Vdlyvset__PHT__DOT__PHT__v257 = 0;
    // Body
    __Vdlyvset__PHT__DOT__PHT__v0 = 0U;
    __Vdlyvset__PHT__DOT__PHT__v256 = 0U;
    __Vdlyvset__PHT__DOT__PHT__v257 = 0U;
    if (vlSelf->reset) {
        vlSelf->PHT__DOT__i = 0x100U;
        __Vdlyvset__PHT__DOT__PHT__v0 = 1U;
    } else if (vlSelf->wr_ena) {
        if (vlSelf->wr_data) {
            if ((3U != vlSelf->PHT__DOT__PHT[vlSelf->wr_sel])) {
                __Vdlyvval__PHT__DOT__PHT__v256 = (3U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      vlSelf->PHT__DOT__PHT
                                                      [vlSelf->wr_sel]));
                __Vdlyvset__PHT__DOT__PHT__v256 = 1U;
                __Vdlyvdim0__PHT__DOT__PHT__v256 = vlSelf->wr_sel;
            }
        } else if ((0U != vlSelf->PHT__DOT__PHT[vlSelf->wr_sel])) {
            __Vdlyvval__PHT__DOT__PHT__v257 = (3U & 
                                               (vlSelf->PHT__DOT__PHT
                                                [vlSelf->wr_sel] 
                                                - (IData)(1U)));
            __Vdlyvset__PHT__DOT__PHT__v257 = 1U;
            __Vdlyvdim0__PHT__DOT__PHT__v257 = vlSelf->wr_sel;
        }
    }
    if (__Vdlyvset__PHT__DOT__PHT__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->PHT__DOT__PHT[__Vilp] = 1U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__PHT__DOT__PHT__v256) {
        vlSelf->PHT__DOT__PHT[__Vdlyvdim0__PHT__DOT__PHT__v256] 
            = __Vdlyvval__PHT__DOT__PHT__v256;
    }
    if (__Vdlyvset__PHT__DOT__PHT__v257) {
        vlSelf->PHT__DOT__PHT[__Vdlyvdim0__PHT__DOT__PHT__v257] 
            = __Vdlyvval__PHT__DOT__PHT__v257;
    }
    vlSelf->out = (1U & (vlSelf->PHT__DOT__PHT[vlSelf->rd_sel] 
                         >> 1U));
}

void VPHT___024root___eval_nba(VPHT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VPHT___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VPHT___024root___eval_triggers__ico(VPHT___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPHT___024root___dump_triggers__ico(VPHT___024root* vlSelf);
#endif  // VL_DEBUG
void VPHT___024root___eval_triggers__act(VPHT___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPHT___024root___dump_triggers__act(VPHT___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPHT___024root___dump_triggers__nba(VPHT___024root* vlSelf);
#endif  // VL_DEBUG

void VPHT___024root___eval(VPHT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT___024root___eval\n"); );
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
        VPHT___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VPHT___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 210, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VPHT___024root___eval_ico(vlSelf);
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
            VPHT___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPHT___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 210, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VPHT___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPHT___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 210, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPHT___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPHT___024root___eval_debug_assertions(VPHT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->wr_data & 0xfeU))) {
        Verilated::overWidthError("wr_data");}
    if (VL_UNLIKELY((vlSelf->wr_ena & 0xfeU))) {
        Verilated::overWidthError("wr_ena");}
}
#endif  // VL_DEBUG
