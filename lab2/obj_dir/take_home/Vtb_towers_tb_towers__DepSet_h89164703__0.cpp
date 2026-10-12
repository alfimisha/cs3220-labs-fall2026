// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_towers.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_towers__Syms.h"
#include "Vtb_towers__Syms.h"
#include "Vtb_towers_tb_towers.h"

VL_INLINE_OPT void Vtb_towers_tb_towers___nba_sequent__TOP__tb_towers__0(Vtb_towers_tb_towers* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_towers_tb_towers___nba_sequent__TOP__tb_towers__0\n"); );
    // Body
    vlSelf->__PVT__jalr = (IData)(((0U == (0x380U & 
                                           vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U])) 
                                   & (0x67U == (0x7fU 
                                                & ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                    << 5U) 
                                                   | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                      >> 0x1bU))))));
}
