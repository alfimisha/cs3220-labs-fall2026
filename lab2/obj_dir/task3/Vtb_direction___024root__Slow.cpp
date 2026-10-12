// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direction.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_direction__Syms.h"
#include "Vtb_direction__Syms.h"
#include "Vtb_direction___024root.h"

void Vtb_direction___024root___ctor_var_reset(Vtb_direction___024root* vlSelf);

Vtb_direction___024root::Vtb_direction___024root(Vtb_direction__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_direction___024root___ctor_var_reset(this);
}

void Vtb_direction___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_direction___024root::~Vtb_direction___024root() {
}
