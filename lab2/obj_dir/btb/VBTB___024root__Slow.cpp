// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBTB.h for the primary calling header

#include "verilated.h"

#include "VBTB__Syms.h"
#include "VBTB__Syms.h"
#include "VBTB___024root.h"

void VBTB___024root___ctor_var_reset(VBTB___024root* vlSelf);

VBTB___024root::VBTB___024root(VBTB__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VBTB___024root___ctor_var_reset(this);
}

void VBTB___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VBTB___024root::~VBTB___024root() {
}
