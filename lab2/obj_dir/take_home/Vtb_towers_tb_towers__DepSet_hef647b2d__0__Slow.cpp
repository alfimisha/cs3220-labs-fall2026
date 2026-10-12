// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_towers.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_towers__Syms.h"
#include "Vtb_towers_tb_towers.h"

VL_ATTR_COLD void Vtb_towers_tb_towers___ctor_var_reset(Vtb_towers_tb_towers* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_towers_tb_towers___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->gp = VL_RAND_RESET_I(32);
    vlSelf->branch = VL_RAND_RESET_I(1);
    vlSelf->branch_pc = VL_RAND_RESET_I(32);
    vlSelf->fetch_pc = VL_RAND_RESET_I(32);
    vlSelf->fetch_id = VL_RAND_RESET_I(32);
    vlSelf->branch_id = VL_RAND_RESET_I(32);
    vlSelf->stall = VL_RAND_RESET_I(1);
    vlSelf->redirect = VL_RAND_RESET_I(1);
    vlSelf->actual_pc = VL_RAND_RESET_I(32);
    vlSelf->retired = VL_RAND_RESET_I(1);
    vlSelf->finished = VL_RAND_RESET_I(1);
    vlSelf->__PVT__jalr = VL_RAND_RESET_I(1);
}
