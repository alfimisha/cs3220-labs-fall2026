// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direction.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_direction__Syms.h"
#include "Vtb_direction__Syms.h"
#include "Vtb_direction___024root.h"

VL_ATTR_COLD void Vtb_direction_pipeline___eval_initial__TOP__tb_direction__dut(Vtb_direction_pipeline* vlSelf);

VL_ATTR_COLD void Vtb_direction___024root___eval_initial(Vtb_direction___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root___eval_initial\n"); );
    // Body
    Vtb_direction_pipeline___eval_initial__TOP__tb_direction__dut((&vlSymsp->TOP__tb_direction__dut));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_direction___024root___dump_triggers__stl(Vtb_direction___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_direction___024root___eval_triggers__stl(Vtb_direction___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_direction___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_direction___024root___stl_sequent__TOP__0(Vtb_direction___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->history = vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__bhr_FE;
    vlSelf->retired_inst = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                             << 0x14U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                          >> 0xcU));
    vlSelf->branch_flag = (IData)((0U != (0x60000U 
                                          & vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])));
    vlSelf->operand2 = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     >> 0x13U));
    vlSelf->operand1 = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                         << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x13U));
    vlSelf->branch_id = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                          << 0xdU) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x13U));
    vlSelf->branch_pc = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                          << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    >> 0x19U));
    vlSelf->inst = ((vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                     << 7U) | (vlSymsp->TOP__tb_direction__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               >> 0x19U));
    vlSelf->gp = vlSymsp->TOP__tb_direction__dut__my_WB_stage.last_WB_value[3U];
    vlSelf->fetch_id = vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_count_FE;
    vlSelf->pc = vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__PC_FE_latch;
}

VL_ATTR_COLD void Vtb_direction___024root___stl_sequent__TOP__1(Vtb_direction___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->fetch_inst = vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__inst_FE;
    vlSelf->fetch_index = vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_index_FE;
    vlSelf->prediction = vlSymsp->TOP__tb_direction__dut.__PVT__my_FE_stage__DOT__pht_prediction_FE;
    vlSelf->actual_pc = vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__br_target_AGEX;
    vlSelf->bhr_data = (1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                              >> 8U));
    vlSelf->pht_data = (1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                              >> 8U));
    vlSelf->pht_write = (1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                               >> 9U));
    vlSelf->bhr_write = (1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                               >> 9U));
    vlSelf->write_index = (0xffU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U]);
    vlSelf->redirect = (1U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                              >> 0xaU));
}

VL_ATTR_COLD void Vtb_direction_pipeline___stl_sequent__TOP__tb_direction__dut__0(Vtb_direction_pipeline* vlSelf);
void Vtb_direction_WB_STAGE___nba_sequent__TOP__tb_direction__dut__my_WB_stage__1(Vtb_direction_WB_STAGE* vlSelf);
void Vtb_direction_AGEX_STAGE___nba_sequent__TOP__tb_direction__dut__my_AGEX_stage__2(Vtb_direction_AGEX_STAGE* vlSelf);
void Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__3(Vtb_direction_pipeline* vlSelf);
void Vtb_direction___024root___nba_sequent__TOP__4(Vtb_direction___024root* vlSelf);

VL_ATTR_COLD void Vtb_direction___024root___eval_stl(Vtb_direction___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_direction___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_direction___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtb_direction_pipeline___stl_sequent__TOP__tb_direction__dut__0((&vlSymsp->TOP__tb_direction__dut));
        Vtb_direction_WB_STAGE___nba_sequent__TOP__tb_direction__dut__my_WB_stage__1((&vlSymsp->TOP__tb_direction__dut__my_WB_stage));
        Vtb_direction_AGEX_STAGE___nba_sequent__TOP__tb_direction__dut__my_AGEX_stage__2((&vlSymsp->TOP__tb_direction__dut__my_AGEX_stage));
        Vtb_direction___024root___stl_sequent__TOP__1(vlSelf);
        Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__3((&vlSymsp->TOP__tb_direction__dut));
        Vtb_direction___024root___nba_sequent__TOP__4(vlSelf);
    }
}
