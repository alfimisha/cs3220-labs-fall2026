// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "verilated.h"

#include "Vsystolic_array__Syms.h"
#include "Vsystolic_array___024root.h"

VL_ATTR_COLD void Vsystolic_array___024root___eval_static(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_initial(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_final(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_triggers__stl(Vsystolic_array___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__stl(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___eval_stl(Vsystolic_array___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array___024root___eval_settle(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vsystolic_array___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vsystolic_array___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("systolic_array.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vsystolic_array___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__stl(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array___024root___stl_sequent__TOP__0(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->systolic_array__DOT__mac_00__DOT__bypass_en 
        = vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter;
    vlSelf->systolic_array__DOT__mac_01__DOT__bypass_en 
        = vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter;
    vlSelf->systolic_array__DOT__mac_10__DOT__bypass_en 
        = vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter;
    vlSelf->systolic_array__DOT__mac_11__DOT__bypass_en 
        = vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter;
    vlSelf->row_data_out = (((IData)(vlSelf->systolic_array__DOT__psum_10) 
                             << 8U) | (IData)(vlSelf->systolic_array__DOT__psum_00));
    vlSelf->systolic_array__DOT__mac_00__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__mac_01__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__mac_10__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__mac_11__DOT__multiplier_done 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelf->systolic_array__DOT__control_rst_accumulator_rdy 
        = (((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg) 
            << 1U) | (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                            >> 3U)));
    vlSelf->systolic_array__DOT__mac_00__DOT__adder_in_B 
        = ((8U & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay))
            ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__mac_01__DOT__adder_in_B 
        = ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg)
            ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__mac_10__DOT__adder_in_B 
        = ((IData)(vlSelf->systolic_array__DOT__rst_00_10)
            ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__mac_11__DOT__adder_in_B 
        = ((IData)(vlSelf->systolic_array__DOT__rst_01_11)
            ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add));
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_stl(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsystolic_array___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__act(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__nba(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array___024root___ctor_var_reset(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_in = VL_RAND_RESET_I(1);
    vlSelf->rst_accumulator_rdy_in = VL_RAND_RESET_I(1);
    vlSelf->stream_out_rdy_in_in = VL_RAND_RESET_I(1);
    vlSelf->row_data_in_in = VL_RAND_RESET_I(16);
    vlSelf->col_data_in_in = VL_RAND_RESET_I(16);
    vlSelf->row_data_out = VL_RAND_RESET_I(16);
    vlSelf->systolic_array__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__rst_accumulator_rdy = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__stream_out_rdy = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__row_data_in = VL_RAND_RESET_I(16);
    vlSelf->systolic_array__DOT__col_data_in = VL_RAND_RESET_I(16);
    vlSelf->systolic_array__DOT__control_rst_accumulator_rdy = VL_RAND_RESET_I(2);
    vlSelf->systolic_array__DOT__row_00_01 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__row_10_11 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__col_00_10 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__col_01_11 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__rst_00_10 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__rst_01_11 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__so_00_10 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__so_01_11 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__psum_00 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__psum_01 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__psum_10 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__psum_11 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay = VL_RAND_RESET_I(4);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay = VL_RAND_RESET_I(6);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg = VL_RAND_RESET_I(2);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_00__DOT__psum[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__mac_00__DOT__psum_reg = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__mult_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__multiplier_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_00__DOT__adder_in_B = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__bypass_en = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_00__DOT__stream_started = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__row_data_out = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_01__DOT__psum[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__mac_01__DOT__psum_reg = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__mult_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__multiplier_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__adder_in_B = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__bypass_en = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__stream_started = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_10__DOT__psum[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__mac_10__DOT__psum_reg = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__mult_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__multiplier_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__adder_in_B = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__bypass_en = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__stream_started = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_11__DOT__psum[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__mac_11__DOT__psum_reg = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__mult_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__multiplier_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__adder_in_B = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__bypass_en = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__stream_started = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
