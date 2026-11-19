// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "verilated.h"

#include "Vsystolic_array__Syms.h"
#include "Vsystolic_array___024root.h"

void Vsystolic_array___024root___eval_act(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsystolic_array___024root___nba_sequent__TOP__0(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay;
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay = 0;
    CData/*5:0*/ __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay;
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v0;
    __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v0 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v1;
    __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v1 = 0;
    CData/*0:0*/ __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
    __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0;
    CData/*0:0*/ __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
    __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0;
    CData/*0:0*/ __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v0;
    __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v0 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v1;
    __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v1 = 0;
    CData/*0:0*/ __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
    __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0;
    CData/*0:0*/ __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
    __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0;
    CData/*0:0*/ __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v0;
    __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v0 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v1;
    __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v1 = 0;
    CData/*0:0*/ __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
    __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0;
    CData/*0:0*/ __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
    __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0;
    CData/*0:0*/ __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v0;
    __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v0 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v1;
    __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v1 = 0;
    CData/*0:0*/ __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
    __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0;
    CData/*0:0*/ __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 = 0;
    CData/*7:0*/ __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
    __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0;
    CData/*0:0*/ __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 = 0;
    // Body
    __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter 
        = vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter 
        = vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter 
        = vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter 
        = vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay;
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay;
    __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed
           [0U]);
    __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed
           [0U]);
    __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed
           [0U]);
    __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed
           [0U]);
    __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg));
    __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg));
    __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg));
    __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg));
    __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & ((~ (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter)) 
              & (((IData)(vlSelf->systolic_array__DOT__so_01_11) 
                  | (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__bypass_en)) 
                 & ((IData)(1U) + (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter)))));
    __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & ((~ (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter)) 
              & (((IData)(vlSelf->systolic_array__DOT__so_00_10) 
                  | (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__bypass_en)) 
                 & ((IData)(1U) + (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter)))));
    __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & ((~ (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter)) 
              & (((IData)(vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg) 
                  | (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__bypass_en)) 
                 & ((IData)(1U) + (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter)))));
    __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & ((~ (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter)) 
              & (((IData)(vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg) 
                  | (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__bypass_en)) 
                 & ((IData)(1U) + (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter)))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = ((9U & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay)) 
           | ((4U & (((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                      << 2U) & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                << 1U))) | (2U & ((
                                                   (~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                                   & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay)) 
                                                  << 1U))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = ((7U & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay)) 
           | (8U & (((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                     << 3U) & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                               << 1U))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = ((0xeU & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay)) 
           | ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
              & (IData)(vlSelf->systolic_array__DOT__rst_accumulator_rdy)));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = ((0x39U & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
           | ((4U & (((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                      << 2U) & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                << 1U))) | (2U & ((
                                                   (~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                                   & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
                                                  << 1U))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = ((0x27U & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
           | ((0x10U & (((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                         << 4U) & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                   << 1U))) | (8U & 
                                               (((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                                 << 3U) 
                                                & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                                   << 1U)))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = ((0x1fU & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
           | (0x20U & (((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                        << 5U) & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                  << 1U))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = ((0x3eU & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
           | ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
              & (IData)(vlSelf->systolic_array__DOT__stream_out_rdy)));
    vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__en_reg 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__multiplier_done));
    vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__en_reg 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__multiplier_done));
    vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__en_reg 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__multiplier_done));
    vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__en_reg 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__multiplier_done));
    vlSelf->systolic_array__DOT__mac_10__DOT__rst_accumulator_out 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__rst_00_10));
    vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_out 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__so_01_11));
    vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_out 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__so_00_10));
    vlSelf->systolic_array__DOT__mac_11__DOT__rst_accumulator_out 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__rst_01_11));
    vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[0U] 
        = __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[1U] 
        = __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[0U] 
        = __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[1U] 
        = __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[0U] 
        = __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[1U] 
        = __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[0U] 
        = __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[1U] 
        = __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    if (vlSelf->systolic_array__DOT__rst) {
        __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v1 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v1 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v1 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v1 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v0 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v0 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v0 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v0 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0U;
        __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0U;
        vlSelf->systolic_array__DOT__mac_11__DOT__col_data_out = 0U;
        vlSelf->systolic_array__DOT__mac_11__DOT__row_data_out = 0U;
        vlSelf->systolic_array__DOT__mac_10__DOT__col_data_out = 0U;
        vlSelf->systolic_array__DOT__mac_01__DOT__row_data_out = 0U;
        vlSelf->systolic_array__DOT__psum_00 = 0U;
        vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter 
            = __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter;
        vlSelf->systolic_array__DOT__psum_10 = 0U;
    } else {
        __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 
            = vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed
            [0U];
        __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v1 
            = vlSelf->systolic_array__DOT__mac_11__DOT__psum
            [0U];
        __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 
            = vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed
            [0U];
        __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v1 
            = vlSelf->systolic_array__DOT__mac_10__DOT__psum
            [0U];
        __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 
            = vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed
            [0U];
        __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v1 
            = vlSelf->systolic_array__DOT__mac_01__DOT__psum
            [0U];
        __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 
            = vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed
            [0U];
        __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v1 
            = vlSelf->systolic_array__DOT__mac_00__DOT__psum
            [0U];
        __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 
            = vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__mult;
        __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v0 
            = vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add;
        __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v0 
            = vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add;
        __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v0 
            = vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add;
        __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v0 
            = vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add;
        __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 
            = vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__mult;
        __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 
            = vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__mult;
        __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 
            = vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__mult;
        vlSelf->systolic_array__DOT__mac_11__DOT__col_data_out 
            = vlSelf->systolic_array__DOT__col_01_11;
        vlSelf->systolic_array__DOT__mac_11__DOT__row_data_out 
            = vlSelf->systolic_array__DOT__row_10_11;
        vlSelf->systolic_array__DOT__mac_10__DOT__col_data_out 
            = vlSelf->systolic_array__DOT__col_00_10;
        vlSelf->systolic_array__DOT__mac_01__DOT__row_data_out 
            = vlSelf->systolic_array__DOT__row_00_01;
        vlSelf->systolic_array__DOT__psum_00 = ((IData)(vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter)
                                                 ? (IData)(vlSelf->systolic_array__DOT__psum_01)
                                                 : 
                                                ((IData)(vlSelf->systolic_array__DOT__mac_00__DOT__stream_started)
                                                  ? (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__psum_reg)
                                                  : 0U));
        vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter 
            = __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter;
        vlSelf->systolic_array__DOT__psum_10 = ((IData)(vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter)
                                                 ? (IData)(vlSelf->systolic_array__DOT__psum_11)
                                                 : 
                                                ((IData)(vlSelf->systolic_array__DOT__mac_10__DOT__stream_started)
                                                  ? (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__psum_reg)
                                                  : 0U));
    }
    vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter 
        = __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter;
    vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg 
        = (1U & (~ (IData)(vlSelf->systolic_array__DOT__rst)));
    vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg 
        = (1U & (~ (IData)(vlSelf->systolic_array__DOT__rst)));
    vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg 
        = (1U & (~ (IData)(vlSelf->systolic_array__DOT__rst)));
    vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg 
        = (1U & (~ (IData)(vlSelf->systolic_array__DOT__rst)));
    vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__so_01_11));
    vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg 
        = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
           & (IData)(vlSelf->systolic_array__DOT__so_00_10));
    vlSelf->systolic_array__DOT__rst_accumulator_rdy 
        = vlSelf->rst_accumulator_rdy_in;
    vlSelf->systolic_array__DOT__stream_out_rdy = vlSelf->stream_out_rdy_in_in;
    vlSelf->systolic_array__DOT__rst_00_10 = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                              & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                                 >> 3U));
    vlSelf->systolic_array__DOT__rst_01_11 = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                              & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg));
    vlSelf->systolic_array__DOT__mac_00__DOT__bypass_en 
        = vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter;
    vlSelf->systolic_array__DOT__mac_10__DOT__bypass_en 
        = vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter;
    vlSelf->row_data_out = (((IData)(vlSelf->systolic_array__DOT__psum_10) 
                             << 8U) | (IData)(vlSelf->systolic_array__DOT__psum_00));
    vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay;
    if (vlSelf->systolic_array__DOT__rst) {
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__mult = 0U;
        vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add = 0U;
        vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add = 0U;
        vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add = 0U;
        vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add = 0U;
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__mult = 0U;
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__mult = 0U;
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__mult = 0U;
        vlSelf->systolic_array__DOT__mac_00__DOT__psum_reg = 0U;
        vlSelf->systolic_array__DOT__mac_00__DOT__psum[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v0;
        vlSelf->systolic_array__DOT__mac_00__DOT__psum[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v1;
        vlSelf->systolic_array__DOT__mac_00__DOT__stream_started = 0U;
        vlSelf->systolic_array__DOT__psum_01 = 0U;
        vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter 
            = __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter;
        vlSelf->systolic_array__DOT__mac_10__DOT__psum_reg = 0U;
        vlSelf->systolic_array__DOT__mac_10__DOT__psum[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v0;
        vlSelf->systolic_array__DOT__mac_10__DOT__psum[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v1;
        vlSelf->systolic_array__DOT__mac_10__DOT__stream_started = 0U;
        vlSelf->systolic_array__DOT__psum_11 = 0U;
    } else {
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__mult 
            = (0xffU & ((0xffU & (IData)(vlSelf->systolic_array__DOT__row_data_in)) 
                        * (0xffU & (IData)(vlSelf->systolic_array__DOT__col_data_in))));
        vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add 
            = (0xffU & ((IData)(vlSelf->systolic_array__DOT__mac_11__DOT__mult_out) 
                        + (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__adder_in_B)));
        vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add 
            = (0xffU & ((IData)(vlSelf->systolic_array__DOT__mac_10__DOT__mult_out) 
                        + (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__adder_in_B)));
        vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add 
            = (0xffU & ((IData)(vlSelf->systolic_array__DOT__mac_01__DOT__mult_out) 
                        + (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__adder_in_B)));
        vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add 
            = (0xffU & ((IData)(vlSelf->systolic_array__DOT__mac_00__DOT__mult_out) 
                        + (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__adder_in_B)));
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__mult 
            = (0xffU & ((0xffU & ((IData)(vlSelf->systolic_array__DOT__row_data_in) 
                                  >> 8U)) * (IData)(vlSelf->systolic_array__DOT__col_00_10)));
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__mult 
            = (0xffU & ((IData)(vlSelf->systolic_array__DOT__row_00_01) 
                        * (0xffU & ((IData)(vlSelf->systolic_array__DOT__col_data_in) 
                                    >> 8U))));
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__mult 
            = (0xffU & ((IData)(vlSelf->systolic_array__DOT__row_10_11) 
                        * (IData)(vlSelf->systolic_array__DOT__col_01_11)));
        vlSelf->systolic_array__DOT__mac_00__DOT__psum_reg 
            = vlSelf->systolic_array__DOT__mac_00__DOT__psum
            [1U];
        vlSelf->systolic_array__DOT__mac_00__DOT__psum[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v0;
        vlSelf->systolic_array__DOT__mac_00__DOT__psum[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_00__DOT__psum__v1;
        if ((1U & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg))) {
            vlSelf->systolic_array__DOT__mac_00__DOT__stream_started = 1U;
        }
        vlSelf->systolic_array__DOT__psum_01 = ((IData)(vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->systolic_array__DOT__mac_01__DOT__stream_started)
                                                  ? (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__psum_reg)
                                                  : 0U));
        vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter 
            = __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter;
        vlSelf->systolic_array__DOT__mac_10__DOT__psum_reg 
            = vlSelf->systolic_array__DOT__mac_10__DOT__psum
            [1U];
        vlSelf->systolic_array__DOT__mac_10__DOT__psum[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v0;
        vlSelf->systolic_array__DOT__mac_10__DOT__psum[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_10__DOT__psum__v1;
        if (vlSelf->systolic_array__DOT__so_00_10) {
            vlSelf->systolic_array__DOT__mac_10__DOT__stream_started = 1U;
        }
        vlSelf->systolic_array__DOT__psum_11 = ((IData)(vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->systolic_array__DOT__mac_11__DOT__stream_started)
                                                  ? (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__psum_reg)
                                                  : 0U));
    }
    vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter 
        = __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter;
    vlSelf->systolic_array__DOT__mac_10__DOT__adder_in_B 
        = ((IData)(vlSelf->systolic_array__DOT__rst_00_10)
            ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__mac_00__DOT__adder_in_B 
        = ((8U & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay))
            ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__mac_11__DOT__adder_in_B 
        = ((IData)(vlSelf->systolic_array__DOT__rst_01_11)
            ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add));
    vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg 
        = (1U & ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                 & (IData)(vlSelf->systolic_array__DOT__control_rst_accumulator_rdy)));
    vlSelf->systolic_array__DOT__mac_01__DOT__bypass_en 
        = vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter;
    vlSelf->systolic_array__DOT__so_00_10 = (1U & (
                                                   (~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                                   & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg)));
    vlSelf->systolic_array__DOT__mac_11__DOT__bypass_en 
        = vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter;
    if (vlSelf->systolic_array__DOT__rst) {
        vlSelf->systolic_array__DOT__mac_11__DOT__mult_out = 0U;
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelf->systolic_array__DOT__mac_10__DOT__mult_out = 0U;
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelf->systolic_array__DOT__mac_01__DOT__mult_out = 0U;
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelf->systolic_array__DOT__mac_00__DOT__mult_out = 0U;
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelf->systolic_array__DOT__col_00_10 = 0U;
        vlSelf->systolic_array__DOT__row_00_01 = 0U;
        vlSelf->systolic_array__DOT__row_10_11 = 0U;
        vlSelf->systolic_array__DOT__col_01_11 = 0U;
        vlSelf->systolic_array__DOT__mac_01__DOT__psum_reg = 0U;
        vlSelf->systolic_array__DOT__mac_01__DOT__psum[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v0;
        vlSelf->systolic_array__DOT__mac_01__DOT__psum[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v1;
        vlSelf->systolic_array__DOT__mac_01__DOT__stream_started = 0U;
        vlSelf->systolic_array__DOT__mac_11__DOT__psum_reg = 0U;
    } else {
        vlSelf->systolic_array__DOT__mac_11__DOT__mult_out 
            = ((IData)(vlSelf->systolic_array__DOT__mac_11__DOT__multiplier_done)
                ? vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed
               [1U] : 0U);
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelf->systolic_array__DOT__mac_10__DOT__mult_out 
            = ((IData)(vlSelf->systolic_array__DOT__mac_10__DOT__multiplier_done)
                ? vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed
               [1U] : 0U);
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelf->systolic_array__DOT__mac_01__DOT__mult_out 
            = ((IData)(vlSelf->systolic_array__DOT__mac_01__DOT__multiplier_done)
                ? vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed
               [1U] : 0U);
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelf->systolic_array__DOT__mac_00__DOT__mult_out 
            = ((IData)(vlSelf->systolic_array__DOT__mac_00__DOT__multiplier_done)
                ? vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed
               [1U] : 0U);
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelf->systolic_array__DOT__col_00_10 = (0xffU 
                                                  & (IData)(vlSelf->systolic_array__DOT__col_data_in));
        vlSelf->systolic_array__DOT__row_00_01 = (0xffU 
                                                  & (IData)(vlSelf->systolic_array__DOT__row_data_in));
        vlSelf->systolic_array__DOT__row_10_11 = (0xffU 
                                                  & ((IData)(vlSelf->systolic_array__DOT__row_data_in) 
                                                     >> 8U));
        vlSelf->systolic_array__DOT__col_01_11 = (0xffU 
                                                  & ((IData)(vlSelf->systolic_array__DOT__col_data_in) 
                                                     >> 8U));
        vlSelf->systolic_array__DOT__mac_01__DOT__psum_reg 
            = vlSelf->systolic_array__DOT__mac_01__DOT__psum
            [0U];
        vlSelf->systolic_array__DOT__mac_01__DOT__psum[0U] 
            = __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v0;
        vlSelf->systolic_array__DOT__mac_01__DOT__psum[1U] 
            = __Vdlyvval__systolic_array__DOT__mac_01__DOT__psum__v1;
        if ((2U & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg))) {
            vlSelf->systolic_array__DOT__mac_01__DOT__stream_started = 1U;
        }
        vlSelf->systolic_array__DOT__mac_11__DOT__psum_reg 
            = vlSelf->systolic_array__DOT__mac_11__DOT__psum
            [0U];
    }
    vlSelf->systolic_array__DOT__mac_11__DOT__psum[0U] 
        = __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v0;
    vlSelf->systolic_array__DOT__mac_11__DOT__psum[1U] 
        = __Vdlyvval__systolic_array__DOT__mac_11__DOT__psum__v1;
    vlSelf->systolic_array__DOT__row_data_in = vlSelf->row_data_in_in;
    vlSelf->systolic_array__DOT__col_data_in = vlSelf->col_data_in_in;
    vlSelf->systolic_array__DOT__control_rst_accumulator_rdy 
        = (((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg) 
            << 1U) | (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                            >> 3U)));
    vlSelf->systolic_array__DOT__mac_01__DOT__adder_in_B 
        = ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg)
            ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add));
    if (vlSelf->systolic_array__DOT__rst) {
        vlSelf->systolic_array__DOT__mac_11__DOT__stream_started = 0U;
    } else if (vlSelf->systolic_array__DOT__so_01_11) {
        vlSelf->systolic_array__DOT__mac_11__DOT__stream_started = 1U;
    }
    vlSelf->systolic_array__DOT__so_01_11 = ((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                             & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                                                >> 1U));
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg 
        = ((IData)(vlSelf->systolic_array__DOT__rst)
            ? 0U : (3U & (- (IData)((1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                           >> 5U))))));
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay;
    vlSelf->systolic_array__DOT__rst = vlSelf->rst_in;
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
}

void Vsystolic_array___024root___eval_nba(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsystolic_array___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vsystolic_array___024root___eval_triggers__act(Vsystolic_array___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__act(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__nba(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG

void Vsystolic_array___024root___eval(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval\n"); );
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
            Vsystolic_array___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsystolic_array___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("systolic_array.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vsystolic_array___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsystolic_array___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("systolic_array.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsystolic_array___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsystolic_array___024root___eval_debug_assertions(Vsystolic_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_in & 0xfeU))) {
        Verilated::overWidthError("rst_in");}
    if (VL_UNLIKELY((vlSelf->rst_accumulator_rdy_in 
                     & 0xfeU))) {
        Verilated::overWidthError("rst_accumulator_rdy_in");}
    if (VL_UNLIKELY((vlSelf->stream_out_rdy_in_in & 0xfeU))) {
        Verilated::overWidthError("stream_out_rdy_in_in");}
}
#endif  // VL_DEBUG
