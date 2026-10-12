// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBHR.h for the primary calling header

#include "verilated.h"

#include "VBHR__Syms.h"
#include "VBHR__Syms.h"
#include "VBHR___024root.h"

void VBHR___024root___ctor_var_reset(VBHR___024root* vlSelf);

VBHR___024root::VBHR___024root(VBHR__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VBHR___024root___ctor_var_reset(this);
}

void VBHR___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VBHR___024root::~VBHR___024root() {
}
