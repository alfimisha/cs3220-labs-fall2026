// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPHT_1BIT.h for the primary calling header

#include "verilated.h"

#include "VPHT_1BIT__Syms.h"
#include "VPHT_1BIT___024root.h"

VL_INLINE_OPT void VPHT_1BIT___024root___ico_sequent__TOP__0(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->out = vlSelf->PHT_1BIT__DOT__PHT[vlSelf->rd_sel];
}

void VPHT_1BIT___024root___eval_ico(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VPHT_1BIT___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VPHT_1BIT___024root___eval_act(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___eval_act\n"); );
}

VL_INLINE_OPT void VPHT_1BIT___024root___nba_sequent__TOP__0(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__PHT_1BIT__DOT__PHT__v0;
    __Vdlyvset__PHT_1BIT__DOT__PHT__v0 = 0;
    IData/*31:0*/ __Vilp;
    SData/*9:0*/ __Vdlyvdim0__PHT_1BIT__DOT__PHT__v1024;
    __Vdlyvdim0__PHT_1BIT__DOT__PHT__v1024 = 0;
    CData/*0:0*/ __Vdlyvval__PHT_1BIT__DOT__PHT__v1024;
    __Vdlyvval__PHT_1BIT__DOT__PHT__v1024 = 0;
    CData/*0:0*/ __Vdlyvset__PHT_1BIT__DOT__PHT__v1024;
    __Vdlyvset__PHT_1BIT__DOT__PHT__v1024 = 0;
    SData/*9:0*/ __Vdlyvdim0__PHT_1BIT__DOT__PHT__v1025;
    __Vdlyvdim0__PHT_1BIT__DOT__PHT__v1025 = 0;
    CData/*0:0*/ __Vdlyvval__PHT_1BIT__DOT__PHT__v1025;
    __Vdlyvval__PHT_1BIT__DOT__PHT__v1025 = 0;
    CData/*0:0*/ __Vdlyvset__PHT_1BIT__DOT__PHT__v1025;
    __Vdlyvset__PHT_1BIT__DOT__PHT__v1025 = 0;
    // Body
    __Vdlyvset__PHT_1BIT__DOT__PHT__v0 = 0U;
    __Vdlyvset__PHT_1BIT__DOT__PHT__v1024 = 0U;
    __Vdlyvset__PHT_1BIT__DOT__PHT__v1025 = 0U;
    if (vlSelf->reset) {
        vlSelf->PHT_1BIT__DOT__i = 0x400U;
        __Vdlyvset__PHT_1BIT__DOT__PHT__v0 = 1U;
    } else if (vlSelf->wr_ena) {
        if (vlSelf->wr_data) {
            if ((1U & (~ vlSelf->PHT_1BIT__DOT__PHT
                       [vlSelf->wr_sel]))) {
                __Vdlyvval__PHT_1BIT__DOT__PHT__v1024 
                    = (1U & ((IData)(1U) + vlSelf->PHT_1BIT__DOT__PHT
                             [vlSelf->wr_sel]));
                __Vdlyvset__PHT_1BIT__DOT__PHT__v1024 = 1U;
                __Vdlyvdim0__PHT_1BIT__DOT__PHT__v1024 
                    = vlSelf->wr_sel;
            }
        } else if (vlSelf->PHT_1BIT__DOT__PHT[vlSelf->wr_sel]) {
            __Vdlyvval__PHT_1BIT__DOT__PHT__v1025 = 
                (1U & (vlSelf->PHT_1BIT__DOT__PHT[vlSelf->wr_sel] 
                       - (IData)(1U)));
            __Vdlyvset__PHT_1BIT__DOT__PHT__v1025 = 1U;
            __Vdlyvdim0__PHT_1BIT__DOT__PHT__v1025 
                = vlSelf->wr_sel;
        }
    }
    if (__Vdlyvset__PHT_1BIT__DOT__PHT__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3ffU)) {
            vlSelf->PHT_1BIT__DOT__PHT[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__PHT_1BIT__DOT__PHT__v1024) {
        vlSelf->PHT_1BIT__DOT__PHT[__Vdlyvdim0__PHT_1BIT__DOT__PHT__v1024] 
            = __Vdlyvval__PHT_1BIT__DOT__PHT__v1024;
    }
    if (__Vdlyvset__PHT_1BIT__DOT__PHT__v1025) {
        vlSelf->PHT_1BIT__DOT__PHT[__Vdlyvdim0__PHT_1BIT__DOT__PHT__v1025] 
            = __Vdlyvval__PHT_1BIT__DOT__PHT__v1025;
    }
    vlSelf->out = vlSelf->PHT_1BIT__DOT__PHT[vlSelf->rd_sel];
}

void VPHT_1BIT___024root___eval_nba(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VPHT_1BIT___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VPHT_1BIT___024root___eval_triggers__ico(VPHT_1BIT___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPHT_1BIT___024root___dump_triggers__ico(VPHT_1BIT___024root* vlSelf);
#endif  // VL_DEBUG
void VPHT_1BIT___024root___eval_triggers__act(VPHT_1BIT___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPHT_1BIT___024root___dump_triggers__act(VPHT_1BIT___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VPHT_1BIT___024root___dump_triggers__nba(VPHT_1BIT___024root* vlSelf);
#endif  // VL_DEBUG

void VPHT_1BIT___024root___eval(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___eval\n"); );
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
        VPHT_1BIT___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VPHT_1BIT___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 297, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VPHT_1BIT___024root___eval_ico(vlSelf);
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
            VPHT_1BIT___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VPHT_1BIT___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 297, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VPHT_1BIT___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VPHT_1BIT___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 297, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VPHT_1BIT___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VPHT_1BIT___024root___eval_debug_assertions(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->rd_sel & 0xfc00U))) {
        Verilated::overWidthError("rd_sel");}
    if (VL_UNLIKELY((vlSelf->wr_sel & 0xfc00U))) {
        Verilated::overWidthError("wr_sel");}
    if (VL_UNLIKELY((vlSelf->wr_data & 0xfeU))) {
        Verilated::overWidthError("wr_data");}
    if (VL_UNLIKELY((vlSelf->wr_ena & 0xfeU))) {
        Verilated::overWidthError("wr_ena");}
}
#endif  // VL_DEBUG
