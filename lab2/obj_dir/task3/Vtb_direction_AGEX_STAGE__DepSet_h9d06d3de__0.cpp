// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direction.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_direction__Syms.h"
#include "Vtb_direction_AGEX_STAGE.h"

VL_INLINE_OPT void Vtb_direction_AGEX_STAGE___act_sequent__TOP__tb_direction__dut__my_AGEX_stage__1(Vtb_direction_AGEX_STAGE* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_direction_AGEX_STAGE___act_sequent__TOP__tb_direction__dut__my_AGEX_stage__1\n"); );
    // Body
    vlSelf->correct_branch_count = ((IData)(vlSelf->__PVT__from_AGEX_to_DE)
                                     ? vlSelf->correct_branch_count
                                     : ((IData)(1U) 
                                        + vlSelf->correct_branch_count));
}
