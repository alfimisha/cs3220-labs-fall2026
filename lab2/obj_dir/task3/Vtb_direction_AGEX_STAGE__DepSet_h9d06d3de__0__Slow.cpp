// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direction.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_direction__Syms.h"
#include "Vtb_direction_AGEX_STAGE.h"

VL_ATTR_COLD void Vtb_direction_AGEX_STAGE___ctor_var_reset(Vtb_direction_AGEX_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_direction_AGEX_STAGE___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_MEM_to_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_WB_to_AGEX = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(282, vlSelf->__PVT__from_DE_latch);
    VL_RAND_RESET_W(175, vlSelf->__PVT__AGEX_latch_out);
    VL_RAND_RESET_W(107, vlSelf->__PVT__from_AGEX_to_FE);
    vlSelf->__PVT__from_AGEX_to_DE = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(175, vlSelf->__PVT__AGEX_latch);
    vlSelf->__PVT__br_cond_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__aluout_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memaddr_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__br_target_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__branch_resolved_AGEX = VL_RAND_RESET_I(1);
    vlSelf->branch_count = VL_RAND_RESET_I(32);
    vlSelf->correct_branch_count = VL_RAND_RESET_I(32);
    vlSelf->__VdfgExtracted_h7fcc4370__0 = VL_RAND_RESET_I(32);
}
