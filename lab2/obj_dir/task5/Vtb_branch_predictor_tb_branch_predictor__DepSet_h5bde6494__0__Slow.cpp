// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_branch_predictor.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_branch_predictor__Syms.h"
#include "Vtb_branch_predictor_tb_branch_predictor.h"

VL_ATTR_COLD void Vtb_branch_predictor_tb_branch_predictor___ctor_var_reset(Vtb_branch_predictor_tb_branch_predictor* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_branch_predictor_tb_branch_predictor___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->fetch_inst = VL_RAND_RESET_I(32);
    vlSelf->fetch_id = VL_RAND_RESET_I(32);
    vlSelf->redirect = VL_RAND_RESET_I(1);
    vlSelf->stall = VL_RAND_RESET_I(1);
    vlSelf->gp = VL_RAND_RESET_I(32);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->branch_pc = VL_RAND_RESET_I(32);
    vlSelf->branch_id = VL_RAND_RESET_I(32);
    vlSelf->operand1 = VL_RAND_RESET_I(32);
    vlSelf->operand2 = VL_RAND_RESET_I(32);
    vlSelf->branch_flag = VL_RAND_RESET_I(1);
    vlSelf->actual_pc = VL_RAND_RESET_I(32);
    vlSelf->branches = VL_RAND_RESET_I(32);
    vlSelf->correct = VL_RAND_RESET_I(32);
    vlSelf->retired_inst = VL_RAND_RESET_I(32);
    vlSelf->retired_pc = VL_RAND_RESET_I(32);
}
