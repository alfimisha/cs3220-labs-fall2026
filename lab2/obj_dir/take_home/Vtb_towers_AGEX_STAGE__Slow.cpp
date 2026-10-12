// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_towers.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_towers__Syms.h"
#include "Vtb_towers_AGEX_STAGE.h"
#include "Vtb_towers__Syms.h"

void Vtb_towers_AGEX_STAGE___ctor_var_reset(Vtb_towers_AGEX_STAGE* vlSelf);

Vtb_towers_AGEX_STAGE::Vtb_towers_AGEX_STAGE(Vtb_towers__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_towers_AGEX_STAGE___ctor_var_reset(this);
}

void Vtb_towers_AGEX_STAGE::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_towers_AGEX_STAGE::~Vtb_towers_AGEX_STAGE() {
}
