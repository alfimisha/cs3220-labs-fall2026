// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_branch_predictor.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_branch_predictor__Syms.h"
#include "Vtb_branch_predictor__Syms.h"
#include "Vtb_branch_predictor___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_branch_predictor___024root___dump_triggers__ico(Vtb_branch_predictor___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_branch_predictor___024root___eval_triggers__ico(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_branch_predictor___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_branch_predictor___024root___ico_sequent__TOP__0(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->correct = vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.correct_branch_count;
    vlSelf->branches = vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.branch_count;
    vlSelf->gp = vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[3U];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_branch_predictor___024root___dump_triggers__act(Vtb_branch_predictor___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_branch_predictor___024root___eval_triggers__act(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_branch_predictor___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_branch_predictor___024root___nba_sequent__TOP__0(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->fetch_id = vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_count_FE;
    vlSelf->pc = vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__PC_FE_latch;
    vlSelf->fetch_inst = vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__inst_FE;
    vlSelf->branches = vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.branch_count;
    vlSelf->correct = vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.correct_branch_count;
}

VL_INLINE_OPT void Vtb_branch_predictor___024root___nba_sequent__TOP__1(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->retired_pc = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                           << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                        >> 0xcU));
    vlSelf->retired_inst = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                             << 0x14U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                          >> 0xcU));
}

VL_INLINE_OPT void Vtb_branch_predictor___024root___nba_sequent__TOP__2(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->branch_flag = (IData)((0U != (0x60000U 
                                          & vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[1U])));
    vlSelf->operand2 = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                         << 0xdU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                     >> 0x13U));
    vlSelf->operand1 = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                         << 0xdU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x13U));
    vlSelf->branch_id = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                          << 0xdU) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x13U));
    vlSelf->branch_pc = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                          << 7U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    >> 0x19U));
    vlSelf->inst = ((vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                     << 7U) | (vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               >> 0x19U));
}

VL_INLINE_OPT void Vtb_branch_predictor___024root___nba_sequent__TOP__3(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->actual_pc = vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__br_target_AGEX;
    vlSelf->redirect = (1U & (vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                              >> 0xaU));
}

VL_INLINE_OPT void Vtb_branch_predictor___024root___nba_sequent__TOP__4(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->stall = vlSymsp->TOP__tb_branch_predictor__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE;
}

VL_INLINE_OPT void Vtb_branch_predictor___024root___nba_sequent__TOP__5(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->gp = vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage.last_WB_value[3U];
}

void Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__0(Vtb_branch_predictor_pipeline* vlSelf);
void Vtb_branch_predictor_AGEX_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_AGEX_stage__0(Vtb_branch_predictor_AGEX_STAGE* vlSelf);
void Vtb_branch_predictor_WB_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_WB_stage__0(Vtb_branch_predictor_WB_STAGE* vlSelf);
void Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__1(Vtb_branch_predictor_pipeline* vlSelf);
void Vtb_branch_predictor_AGEX_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_AGEX_stage__1(Vtb_branch_predictor_AGEX_STAGE* vlSelf);
void Vtb_branch_predictor_WB_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_WB_stage__1(Vtb_branch_predictor_WB_STAGE* vlSelf);
void Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__2(Vtb_branch_predictor_pipeline* vlSelf);
void Vtb_branch_predictor_AGEX_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_AGEX_stage__2(Vtb_branch_predictor_AGEX_STAGE* vlSelf);
void Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__3(Vtb_branch_predictor_pipeline* vlSelf);
void Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__4(Vtb_branch_predictor_pipeline* vlSelf);
void Vtb_branch_predictor_WB_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_WB_stage__2(Vtb_branch_predictor_WB_STAGE* vlSelf);

void Vtb_branch_predictor___024root___eval_nba(Vtb_branch_predictor___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_branch_predictor___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__0((&vlSymsp->TOP__tb_branch_predictor__dut));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtb_branch_predictor_AGEX_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_AGEX_stage__0((&vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage));
        Vtb_branch_predictor_WB_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_WB_stage__0((&vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage));
        Vtb_branch_predictor___024root___nba_sequent__TOP__0(vlSelf);
        Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__1((&vlSymsp->TOP__tb_branch_predictor__dut));
        Vtb_branch_predictor_AGEX_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_AGEX_stage__1((&vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage));
        Vtb_branch_predictor___024root___nba_sequent__TOP__1(vlSelf);
        Vtb_branch_predictor_WB_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_WB_stage__1((&vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage));
        Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__2((&vlSymsp->TOP__tb_branch_predictor__dut));
        Vtb_branch_predictor___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_branch_predictor_AGEX_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_AGEX_stage__2((&vlSymsp->TOP__tb_branch_predictor__dut__my_AGEX_stage));
        Vtb_branch_predictor___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__3((&vlSymsp->TOP__tb_branch_predictor__dut));
        Vtb_branch_predictor___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_branch_predictor_pipeline___nba_sequent__TOP__tb_branch_predictor__dut__4((&vlSymsp->TOP__tb_branch_predictor__dut));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtb_branch_predictor_WB_STAGE___nba_sequent__TOP__tb_branch_predictor__dut__my_WB_stage__2((&vlSymsp->TOP__tb_branch_predictor__dut__my_WB_stage));
        Vtb_branch_predictor___024root___nba_sequent__TOP__5(vlSelf);
    }
}
