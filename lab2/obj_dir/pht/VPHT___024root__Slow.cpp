// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPHT.h for the primary calling header

#include "verilated.h"

#include "VPHT__Syms.h"
#include "VPHT__Syms.h"
#include "VPHT___024root.h"

void VPHT___024root___ctor_var_reset(VPHT___024root* vlSelf);

VPHT___024root::VPHT___024root(VPHT__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPHT___024root___ctor_var_reset(this);
}

void VPHT___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VPHT___024root::~VPHT___024root() {
}
