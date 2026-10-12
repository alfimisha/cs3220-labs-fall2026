// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_branch_predictor.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_branch_predictor__Syms.h"
#include "Vtb_branch_predictor__Syms.h"
#include "Vtb_branch_predictor___024root.h"

void Vtb_branch_predictor___024root___ctor_var_reset(Vtb_branch_predictor___024root* vlSelf);

Vtb_branch_predictor___024root::Vtb_branch_predictor___024root(Vtb_branch_predictor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_branch_predictor___024root___ctor_var_reset(this);
}

void Vtb_branch_predictor___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_branch_predictor___024root::~Vtb_branch_predictor___024root() {
}
