// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direction.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_direction__Syms.h"
#include "Vtb_direction__Syms.h"
#include "Vtb_direction_tb_direction.h"

void Vtb_direction_tb_direction___ctor_var_reset(Vtb_direction_tb_direction* vlSelf);

Vtb_direction_tb_direction::Vtb_direction_tb_direction(Vtb_direction__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_direction_tb_direction___ctor_var_reset(this);
}

void Vtb_direction_tb_direction::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_direction_tb_direction::~Vtb_direction_tb_direction() {
}
