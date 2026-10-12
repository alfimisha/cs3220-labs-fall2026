// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPHT_1BIT.h for the primary calling header

#include "verilated.h"

#include "VPHT_1BIT__Syms.h"
#include "VPHT_1BIT__Syms.h"
#include "VPHT_1BIT___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VPHT_1BIT___024root___dump_triggers__stl(VPHT_1BIT___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VPHT_1BIT___024root___eval_triggers__stl(VPHT_1BIT___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPHT_1BIT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPHT_1BIT___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VPHT_1BIT___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
