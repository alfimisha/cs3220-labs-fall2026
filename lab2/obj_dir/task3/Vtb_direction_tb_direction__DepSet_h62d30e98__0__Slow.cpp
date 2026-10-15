// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direction.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_direction__Syms.h"
#include "Vtb_direction_tb_direction.h"

VL_ATTR_COLD void Vtb_direction_tb_direction___ctor_var_reset(Vtb_direction_tb_direction* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_direction_tb_direction___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->fetch_inst = VL_RAND_RESET_I(32);
    vlSelf->fetch_id = VL_RAND_RESET_I(32);
    vlSelf->gp = VL_RAND_RESET_I(32);
    vlSelf->redirect = VL_RAND_RESET_I(1);
    vlSelf->stall = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->branch_pc = VL_RAND_RESET_I(32);
    vlSelf->branch_id = VL_RAND_RESET_I(32);
    vlSelf->operand1 = VL_RAND_RESET_I(32);
    vlSelf->operand2 = VL_RAND_RESET_I(32);
    vlSelf->branch_flag = VL_RAND_RESET_I(1);
    vlSelf->actual_pc = VL_RAND_RESET_I(32);
    vlSelf->retired_inst = VL_RAND_RESET_I(32);
    vlSelf->history = VL_RAND_RESET_I(8);
    vlSelf->fetch_index = VL_RAND_RESET_I(10);
    vlSelf->write_index = VL_RAND_RESET_I(10);
    vlSelf->prediction = VL_RAND_RESET_I(1);
    vlSelf->bhr_write = VL_RAND_RESET_I(1);
    vlSelf->pht_write = VL_RAND_RESET_I(1);
    vlSelf->pht_data = VL_RAND_RESET_I(1);
    vlSelf->bhr_data = VL_RAND_RESET_I(32);
}
