// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_towers.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_towers__Syms.h"
#include "Vtb_towers__Syms.h"
#include "Vtb_towers___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_towers___024root___dump_triggers__ico(Vtb_towers___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_towers___024root___eval_triggers__ico(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_towers___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_towers___024root___ico_sequent__TOP__0(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->gp = vlSymsp->TOP__tb_towers__dut__my_WB_stage.last_WB_value[3U];
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_towers___024root___dump_triggers__act(Vtb_towers___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_towers___024root___eval_triggers__act(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_towers___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_towers___024root___nba_sequent__TOP__0(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->fetch_id = vlSymsp->TOP__tb_towers__dut.__PVT__my_FE_stage__DOT__inst_count_FE;
    vlSelf->fetch_pc = vlSymsp->TOP__tb_towers__dut.__PVT__my_FE_stage__DOT__PC_FE_latch;
}

VL_INLINE_OPT void Vtb_towers___024root___nba_sequent__TOP__1(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->finished = (0x73U == ((vlSymsp->TOP__tb_towers__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                                   << 0x14U) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                                >> 0xcU)));
    vlSelf->retired = (0U != ((vlSymsp->TOP__tb_towers__dut.__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
                               << 0x14U) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                            >> 0xcU)));
}

VL_INLINE_OPT void Vtb_towers___024root___nba_sequent__TOP__2(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->branch_id = ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                          << 0xbU) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x15U));
    vlSelf->branch_pc = ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                          << 5U) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                    >> 0x1bU));
}

VL_INLINE_OPT void Vtb_towers___024root___nba_sequent__TOP__3(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->actual_pc = ((IData)(vlSymsp->TOP__tb_towers.__PVT__jalr)
                          ? (0xfffffffeU & (((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                              << 0xbU) 
                                             | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x15U)) 
                                            + (((- (IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                               >> 0x1aU)))) 
                                                << 0xcU) 
                                               | (0xfffU 
                                                  & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                     >> 0xfU)))))
                          : ((0x6fU == (0x7fU & ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                    >> 0x1bU))))
                              ? (((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                   << 5U) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                             >> 0x1bU)) 
                                 + (((- (IData)((1U 
                                                 & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                    >> 0x1aU)))) 
                                     << 0x15U) | ((0x100000U 
                                                   & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                      >> 6U)) 
                                                  | ((0xff000U 
                                                      & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                         << 5U)) 
                                                     | ((0x800U 
                                                         & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                            >> 4U)) 
                                                        | (0x7feU 
                                                           & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                              >> 0xfU)))))))
                              : (((0x63U == (0x7fU 
                                             & ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                 << 5U) 
                                                | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0x1bU)))) 
                                  & ((0x200U & vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U])
                                      ? ((0x100U & 
                                          vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U])
                                          ? ((0x80U 
                                              & vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U])
                                              ? (((
                                                   vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 0xbU) 
                                                  | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x15U)) 
                                                 >= 
                                                 ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xbU) 
                                                  | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x15U)))
                                              : (((
                                                   vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                   << 0xbU) 
                                                  | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x15U)) 
                                                 < 
                                                 ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xbU) 
                                                  | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x15U))))
                                          : ((0x80U 
                                              & vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U])
                                              ? VL_GTES_III(32, 
                                                            ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                              << 0xbU) 
                                                             | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                                >> 0x15U)), 
                                                            ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                              << 0xbU) 
                                                             | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                                >> 0x15U)))
                                              : VL_LTS_III(32, 
                                                           ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                             << 0xbU) 
                                                            | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                               >> 0x15U)), 
                                                           ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                             << 0xbU) 
                                                            | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                               >> 0x15U)))))
                                      : ((~ (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                             >> 8U)) 
                                         & ((0x80U 
                                             & vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U])
                                             ? (((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  << 0xbU) 
                                                 | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0x15U)) 
                                                != 
                                                ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0xbU) 
                                                 | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x15U)))
                                             : (((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                  << 0xbU) 
                                                 | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0x15U)) 
                                                == 
                                                ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  << 0xbU) 
                                                 | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                    >> 0x15U)))))))
                                  ? (((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                       << 5U) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 >> 0x1bU)) 
                                     + (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                        >> 0x1aU)))) 
                                         << 0xdU) | 
                                        ((0x1000U & 
                                          (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                           >> 0xeU)) 
                                         | ((0x800U 
                                             & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                << 9U)) 
                                            | ((0x7e0U 
                                                & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                   >> 0xfU)) 
                                               | (0x1eU 
                                                  & (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                                     >> 2U)))))))
                                  : ((IData)(4U) + 
                                     ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                       << 5U) | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 >> 0x1bU))))));
    vlSelf->branch = ((0x63U == (0x7fU & ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                           << 5U) | 
                                          (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                           >> 0x1bU)))) 
                      | ((0x6fU == (0x7fU & ((vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[8U] 
                                              << 5U) 
                                             | (vlSymsp->TOP__tb_towers__dut.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                >> 0x1bU)))) 
                         | (IData)(vlSymsp->TOP__tb_towers.__PVT__jalr)));
    vlSelf->redirect = (1U & (vlSymsp->TOP__tb_towers__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                              >> 0xcU));
}

VL_INLINE_OPT void Vtb_towers___024root___nba_sequent__TOP__4(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->stall = vlSymsp->TOP__tb_towers__dut.__PVT__my_FE_stage__DOT__stall_pipe_FE;
}

void Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__0(Vtb_towers_pipeline* vlSelf);
void Vtb_towers_AGEX_STAGE___nba_sequent__TOP__tb_towers__dut__my_AGEX_stage__0(Vtb_towers_AGEX_STAGE* vlSelf);
void Vtb_towers_WB_STAGE___nba_sequent__TOP__tb_towers__dut__my_WB_stage__0(Vtb_towers_WB_STAGE* vlSelf);
void Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__1(Vtb_towers_pipeline* vlSelf);
void Vtb_towers_AGEX_STAGE___nba_sequent__TOP__tb_towers__dut__my_AGEX_stage__1(Vtb_towers_AGEX_STAGE* vlSelf);
void Vtb_towers_WB_STAGE___nba_sequent__TOP__tb_towers__dut__my_WB_stage__1(Vtb_towers_WB_STAGE* vlSelf);
void Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__2(Vtb_towers_pipeline* vlSelf);
void Vtb_towers_tb_towers___nba_sequent__TOP__tb_towers__0(Vtb_towers_tb_towers* vlSelf);
void Vtb_towers_AGEX_STAGE___nba_sequent__TOP__tb_towers__dut__my_AGEX_stage__2(Vtb_towers_AGEX_STAGE* vlSelf);
void Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__3(Vtb_towers_pipeline* vlSelf);
void Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__4(Vtb_towers_pipeline* vlSelf);
void Vtb_towers_WB_STAGE___nba_sequent__TOP__tb_towers__dut__my_WB_stage__2(Vtb_towers_WB_STAGE* vlSelf);

void Vtb_towers___024root___eval_nba(Vtb_towers___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_towers___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__0((&vlSymsp->TOP__tb_towers__dut));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vtb_towers_AGEX_STAGE___nba_sequent__TOP__tb_towers__dut__my_AGEX_stage__0((&vlSymsp->TOP__tb_towers__dut__my_AGEX_stage));
        Vtb_towers_WB_STAGE___nba_sequent__TOP__tb_towers__dut__my_WB_stage__0((&vlSymsp->TOP__tb_towers__dut__my_WB_stage));
        Vtb_towers___024root___nba_sequent__TOP__0(vlSelf);
        Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__1((&vlSymsp->TOP__tb_towers__dut));
        Vtb_towers_AGEX_STAGE___nba_sequent__TOP__tb_towers__dut__my_AGEX_stage__1((&vlSymsp->TOP__tb_towers__dut__my_AGEX_stage));
        Vtb_towers___024root___nba_sequent__TOP__1(vlSelf);
        Vtb_towers_WB_STAGE___nba_sequent__TOP__tb_towers__dut__my_WB_stage__1((&vlSymsp->TOP__tb_towers__dut__my_WB_stage));
        Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__2((&vlSymsp->TOP__tb_towers__dut));
        Vtb_towers___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_towers_tb_towers___nba_sequent__TOP__tb_towers__0((&vlSymsp->TOP__tb_towers));
        Vtb_towers_AGEX_STAGE___nba_sequent__TOP__tb_towers__dut__my_AGEX_stage__2((&vlSymsp->TOP__tb_towers__dut__my_AGEX_stage));
        Vtb_towers___024root___nba_sequent__TOP__3(vlSelf);
        Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__3((&vlSymsp->TOP__tb_towers__dut));
        Vtb_towers___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_towers_pipeline___nba_sequent__TOP__tb_towers__dut__4((&vlSymsp->TOP__tb_towers__dut));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vtb_towers_WB_STAGE___nba_sequent__TOP__tb_towers__dut__my_WB_stage__2((&vlSymsp->TOP__tb_towers__dut__my_WB_stage));
        Vtb_towers___024root___ico_sequent__TOP__0(vlSelf);
    }
}
