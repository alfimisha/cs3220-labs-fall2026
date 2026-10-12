// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBHR.h for the primary calling header

#include "verilated.h"

#include "VBHR__Syms.h"
#include "VBHR___024root.h"

void VBHR___024root___eval_act(VBHR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root___eval_act\n"); );
}

VL_INLINE_OPT void VBHR___024root___nba_sequent__TOP__0(VBHR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__out;
    __Vdly__out = 0;
    // Body
    __Vdly__out = vlSelf->out;
    if (vlSelf->reset) {
        __Vdly__out = 0U;
    } else if (vlSelf->wr_ena) {
        __Vdly__out = ((0xfeU & ((IData)(vlSelf->out) 
                                 << 1U)) | (1U & vlSelf->wr_data));
    }
    vlSelf->out = __Vdly__out;
}

void VBHR___024root___eval_nba(VBHR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBHR___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VBHR___024root___eval_triggers__act(VBHR___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBHR___024root___dump_triggers__act(VBHR___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBHR___024root___dump_triggers__nba(VBHR___024root* vlSelf);
#endif  // VL_DEBUG

void VBHR___024root___eval(VBHR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VBHR___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VBHR___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 190, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VBHR___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VBHR___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 190, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VBHR___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VBHR___024root___eval_debug_assertions(VBHR___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBHR___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->wr_ena & 0xfeU))) {
        Verilated::overWidthError("wr_ena");}
}
#endif  // VL_DEBUG
