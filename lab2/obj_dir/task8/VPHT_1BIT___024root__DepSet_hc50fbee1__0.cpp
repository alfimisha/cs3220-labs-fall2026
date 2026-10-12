// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPHT_1BIT.h for the primary calling header

#include "verilated.h"

#include "VPHT_1BIT__Syms.h"
#include "VPHT_1BIT__Syms.h"
#include "VPHT_1BIT___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPHT_1BIT___024root___dump_triggers__ico(VPHT_1BIT___024root* vlSelf);
#endif  // VL_DEBUG

void VPHT_1BIT___024root___eval_triggers__ico(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPHT_1BIT___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPHT_1BIT___024root___dump_triggers__act(VPHT_1BIT___024root* vlSelf);
#endif  // VL_DEBUG

void VPHT_1BIT___024root___eval_triggers__act(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPHT_1BIT___024root___dump_triggers__act(vlSelf);
    }
#endif
}
