// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_towers.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_towers__Syms.h"
#include "Vtb_towers__Syms.h"
#include "Vtb_towers___024root.h"

VL_ATTR_COLD void Vtb_towers_pipeline___eval_initial__TOP__tb_towers__dut(Vtb_towers_pipeline* vlSelf);

VL_ATTR_COLD void Vtb_towers___024root___eval_initial(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___eval_initial\n"); );
    // Body
    Vtb_towers_pipeline___eval_initial__TOP__tb_towers__dut((&vlSymsp->TOP__tb_towers__dut));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_towers___024root___dump_triggers__stl(Vtb_towers___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_towers___024root___eval_triggers__stl(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_towers___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_towers___024root___stl_sequent__TOP__0(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->finished = (0x73U == ((vlSymsp->TOP__tb_towers__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x14U) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                >> 0xcU)));
    vlSelf->retired = (0U != ((vlSymsp->TOP__tb_towers__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                               << 0x14U) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                            >> 0xcU)));
    vlSelf->branch_id = ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                          << 0xbU) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x15U));
    vlSelf->fetch_id = vlSymsp->TOP__tb_towers__dut.__PVT__my_FE_stage__DOT__inst_count_FE;
    vlSelf->fetch_pc = vlSymsp->TOP__tb_towers__dut.__PVT__my_FE_stage__DOT__PC_FE_latch;
    vlSelf->branch_pc = ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                          << 5U) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    >> 0x1bU));
    vlSelf->gp = vlSymsp->TOP__tb_towers__dut__my_WB_stage.last_WB_value[3U];
}

VL_ATTR_COLD void Vtb_towers_pipeline___stl_sequent__TOP__tb_towers__dut__0(Vtb_towers_pipeline* vlSelf);
void Vtb_towers_WB_STAGE___nba_sequent__TOP__tb_towers__dut__my_WB_stage__1(Vtb_towers_WB_STAGE* vlSelf);
void Vtb_towers_tb_towers___nba_sequent__TOP__tb_towers__0(Vtb_towers_tb_towers* vlSelf);
void Vtb_towers_AGEX_STAGE___nba_sequent__TOP__tb_towers__dut__my_AGEX_stage__2(Vtb_towers_AGEX_STAGE* vlSelf);
void Vtb_towers___024root___nba_sequent__TOP__3(Vtb_towers___024root* vlSelf);
void Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__3(Vtb_towers_pipeline* vlSelf);
void Vtb_towers___024root___nba_sequent__TOP__4(Vtb_towers___024root* vlSelf);

VL_ATTR_COLD void Vtb_towers___024root___eval_stl(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_towers___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtb_towers_pipeline___stl_sequent__TOP__tb_towers__dut__0((&vlSymsp->TOP__tb_towers__dut));
        Vtb_towers_WB_STAGE___nba_sequent__TOP__tb_towers__dut__my_WB_stage__1((&vlSymsp->TOP__tb_towers__dut__my_WB_stage));
        Vtb_towers_tb_towers___nba_sequent__TOP__tb_towers__0((&vlSymsp->TOP__tb_towers));
        Vtb_towers_AGEX_STAGE___nba_sequent__TOP__tb_towers__dut__my_AGEX_stage__2((&vlSymsp->TOP__tb_towers__dut__my_AGEX_stage));
        Vtb_towers___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__3((&vlSymsp->TOP__tb_towers__dut));
        Vtb_towers___024root___nba_sequent__TOP__4(vlSelf);
    }
}
