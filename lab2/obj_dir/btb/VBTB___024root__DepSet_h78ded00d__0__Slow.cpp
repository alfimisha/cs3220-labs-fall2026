// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBTB.h for the primary calling header

#include "verilated.h"

#include "VBTB__Syms.h"
#include "VBTB___024root.h"

VL_ATTR_COLD void VBTB___024root___eval_static(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval_static\n"); );
}

VL_ATTR_COLD void VBTB___024root___eval_initial(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VBTB___024root___eval_final(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval_final\n"); );
}

VL_ATTR_COLD void VBTB___024root___eval_triggers__stl(VBTB___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB___024root___dump_triggers__stl(VBTB___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VBTB___024root___eval_stl(VBTB___024root* vlSelf);

VL_ATTR_COLD void VBTB___024root___eval_settle(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VBTB___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VBTB___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/hice1/araj92/cs3220/cs3220-labs-fall2026/lab2/fe_stage.v", 250, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VBTB___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB___024root___dump_triggers__stl(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VBTB___024root___ico_sequent__TOP__0(VBTB___024root* vlSelf);

VL_ATTR_COLD void VBTB___024root___eval_stl(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VBTB___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB___024root___dump_triggers__ico(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB___024root___dump_triggers__act(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VBTB___024root___dump_triggers__nba(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VBTB___024root___ctor_var_reset(VBTB___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBTB___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->rd_ena = VL_RAND_RESET_I(1);
    vlSelf->rd_sel = VL_RAND_RESET_I(32);
    vlSelf->out_data = VL_RAND_RESET_I(32);
    vlSelf->outs_valid = VL_RAND_RESET_I(1);
    vlSelf->wr_ena = VL_RAND_RESET_I(1);
    vlSelf->wr_sel = VL_RAND_RESET_I(32);
    vlSelf->wr_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->BTB__DOT__btb_target[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->BTB__DOT__btb_tag[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->BTB__DOT__btb_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->BTB__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
