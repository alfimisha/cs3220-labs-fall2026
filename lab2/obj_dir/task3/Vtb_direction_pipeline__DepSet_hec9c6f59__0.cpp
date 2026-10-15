// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_direction.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_direction__Syms.h"
#include "Vtb_direction__Syms.h"
#include "Vtb_direction_pipeline.h"

VL_INLINE_OPT void Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__0(Vtb_direction_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__PC_FE_latch;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = 0;
    IData/*31:0*/ __Vilp;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__inst_count_FE;
    __Vdly__my_FE_stage__DOT__inst_count_FE = 0;
    CData/*7:0*/ __Vdly__my_FE_stage__DOT__bhr_fe;
    __Vdly__my_FE_stage__DOT__bhr_fe = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v0;
    __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__my_FE_stage__DOT__pht__DOT__PHT__v1024;
    __Vdlyvdim0__my_FE_stage__DOT__pht__DOT__PHT__v1024 = 0;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__pht__DOT__PHT__v1024;
    __Vdlyvval__my_FE_stage__DOT__pht__DOT__PHT__v1024 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1024;
    __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1024 = 0;
    SData/*9:0*/ __Vdlyvdim0__my_FE_stage__DOT__pht__DOT__PHT__v1025;
    __Vdlyvdim0__my_FE_stage__DOT__pht__DOT__PHT__v1025 = 0;
    CData/*1:0*/ __Vdlyvval__my_FE_stage__DOT__pht__DOT__PHT__v1025;
    __Vdlyvval__my_FE_stage__DOT__pht__DOT__PHT__v1025 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1025;
    __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1025 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v0;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_target__v256;
    __Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_target__v256 = 0;
    IData/*31:0*/ __Vdlyvval__my_FE_stage__DOT__btb__DOT__btb_target__v256;
    __Vdlyvval__my_FE_stage__DOT__btb__DOT__btb_target__v256 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v256;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v256 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v0;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_tag__v256;
    __Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_tag__v256 = 0;
    IData/*21:0*/ __Vdlyvval__my_FE_stage__DOT__btb__DOT__btb_tag__v256;
    __Vdlyvval__my_FE_stage__DOT__btb__DOT__btb_tag__v256 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v256;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v256 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v0;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_valid__v256;
    __Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_valid__v256 = 0;
    CData/*0:0*/ __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v256;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v256 = 0;
    // Body
    __Vdly__my_FE_stage__DOT__inst_count_FE = vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v256 = 0U;
    __Vdly__my_FE_stage__DOT__bhr_fe = vlSelf->__PVT__my_FE_stage__DOT__bhr_fe;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v256 = 0U;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v256 = 0U;
    __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v0 = 0U;
    __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1024 = 0U;
    __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1025 = 0U;
    __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch;
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
        = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U];
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__i = 0x400U;
        vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__unnamedblk1__DOT__i = 0x100U;
        vlSelf->__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__inst_count_FE = 1U;
        __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v0 = 1U;
        __Vdly__my_FE_stage__DOT__bhr_fe = 0U;
        __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v0 = 1U;
        __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v0 = 1U;
        __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v0 = 1U;
        __Vdly__my_FE_stage__DOT__PC_FE_latch = 0x200U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = 0U;
    } else {
        vlSelf->__PVT__cycle_count = ((IData)(1U) + vlSelf->__PVT__cycle_count);
        if ((1U & (~ (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                      >> 0xcU)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__my_FE_stage__DOT__stall_pipe_FE)))) {
                __Vdly__my_FE_stage__DOT__inst_count_FE 
                    = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__btb_hit)
                        ? ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE)
                        : ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE));
            }
        }
        if ((0x800U & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])) {
            __Vdlyvval__my_FE_stage__DOT__btb__DOT__btb_target__v256 
                = vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[0U];
            __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v256 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_target__v256 
                = (0xffU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                            >> 2U));
            __Vdly__my_FE_stage__DOT__bhr_fe = ((0xfeU 
                                                 & ((IData)(vlSelf->__PVT__my_FE_stage__DOT__bhr_fe) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                                                      >> 0xaU)));
            __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v256 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_valid__v256 
                = (0xffU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                            >> 2U));
            __Vdlyvval__my_FE_stage__DOT__btb__DOT__btb_tag__v256 
                = (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                   >> 0xaU);
            __Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v256 = 1U;
            __Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_tag__v256 
                = (0xffU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[1U] 
                            >> 2U));
            if ((0x400U & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])) {
                if ((3U != vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT
                     [(0x3ffU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])])) {
                    __Vdlyvval__my_FE_stage__DOT__pht__DOT__PHT__v1024 
                        = (3U & ((IData)(1U) + vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT
                                 [(0x3ffU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])]));
                    __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1024 = 1U;
                    __Vdlyvdim0__my_FE_stage__DOT__pht__DOT__PHT__v1024 
                        = (0x3ffU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U]);
                }
            } else if ((0U != vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT
                        [(0x3ffU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])])) {
                __Vdlyvval__my_FE_stage__DOT__pht__DOT__PHT__v1025 
                    = (3U & (vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT
                             [(0x3ffU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U])] 
                             - (IData)(1U)));
                __Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1025 = 1U;
                __Vdlyvdim0__my_FE_stage__DOT__pht__DOT__PHT__v1025 
                    = (0x3ffU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U]);
            }
        }
        if ((0x1000U & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U])) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = 
                ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[3U] 
                  << 0x14U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_FE[2U] 
                               >> 0xcU));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] = 0U;
        } else if (vlSelf->__PVT__my_FE_stage__DOT__stall_pipe_FE) {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch;
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U];
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
                = vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U];
        } else {
            __Vdly__my_FE_stage__DOT__PC_FE_latch = 
                ((IData)(vlSelf->__PVT__my_FE_stage__DOT__btb_hit)
                  ? vlSelf->__PVT__my_FE_stage__DOT__target_btb_pred
                  : vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE);
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                = (IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__pht_idx_fe)) 
                            << 0x21U) | (((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__pht_prediction_FE)) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(vlSelf->__PVT__my_FE_stage__DOT__btb_hit)
                                                             ? vlSelf->__PVT__my_FE_stage__DOT__target_btb_pred
                                                             : 
                                                            ((IData)(4U) 
                                                             + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))))));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                    << 0xbU) | (IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__pht_idx_fe)) 
                                          << 0x21U) 
                                         | (((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__pht_prediction_FE)) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((IData)(vlSelf->__PVT__my_FE_stage__DOT__btb_hit)
                                                                ? vlSelf->__PVT__my_FE_stage__DOT__target_btb_pred
                                                                : 
                                                               ((IData)(4U) 
                                                                + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))))) 
                                        >> 0x20U)));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                = ((vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
                    >> 0x15U) | (((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                                 << 0xbU));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                = ((((IData)(4U) + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch) 
                    >> 0x15U) | ((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                                 << 0xbU));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                              << 0x20U) | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                    >> 0x15U) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U] 
                = (((IData)(vlSelf->__PVT__my_FE_stage__DOT__valid_FE) 
                    << 0xbU) | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__inst_FE)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                         >> 0x20U)) 
                                >> 0x15U));
        }
        if (((~ (IData)(vlSelf->__PVT__my_FE_stage__DOT__stall_pipe_FE)) 
             & (IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                            >> 0x12U)))));
        }
        if ((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0x25U)))) {
            vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x1fU & (IData)(
                                                       (vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 0x20U))))) 
                   & vlSelf->__PVT__my_DE_stage__DOT__in_use_regs);
        }
    }
    if ((0x40U & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U])) {
        vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 
            = ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                << 0x18U) | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                             >> 8U));
        vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 1U;
        vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 
            = (0x3fffU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                          >> 0xaU));
    }
    if (__Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_target[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_target__v256) {
        vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_target[__Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_target__v256] 
            = __Vdlyvval__my_FE_stage__DOT__btb__DOT__btb_target__v256;
    }
    vlSelf->__PVT__my_FE_stage__DOT__bhr_fe = __Vdly__my_FE_stage__DOT__bhr_fe;
    if (__Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_valid__v256) {
        vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[__Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_valid__v256] = 1U;
    }
    if (__Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0xffU)) {
            vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__my_FE_stage__DOT__btb__DOT__btb_tag__v256) {
        vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[__Vdlyvdim0__my_FE_stage__DOT__btb__DOT__btb_tag__v256] 
            = __Vdlyvval__my_FE_stage__DOT__btb__DOT__btb_tag__v256;
    }
    if (__Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3ffU)) {
            vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT[__Vilp] = 1U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1024) {
        vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT[__Vdlyvdim0__my_FE_stage__DOT__pht__DOT__PHT__v1024] 
            = __Vdlyvval__my_FE_stage__DOT__pht__DOT__PHT__v1024;
    }
    if (__Vdlyvset__my_FE_stage__DOT__pht__DOT__PHT__v1025) {
        vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT[__Vdlyvdim0__my_FE_stage__DOT__pht__DOT__PHT__v1025] 
            = __Vdlyvval__my_FE_stage__DOT__pht__DOT__PHT__v1025;
    }
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE 
        = __Vdly__my_FE_stage__DOT__inst_count_FE;
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = __Vdly__my_FE_stage__DOT__PC_FE_latch;
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__inst_FE = vlSelf->__PVT__my_FE_stage__DOT__imem
        [(0x3fffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U))];
    vlSelf->__PVT__my_FE_stage__DOT__is_btb_valid = 
        (vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_valid
         [(0xffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                    >> 2U))] & (vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_tag
                                [(0xffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))] 
                                == (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                    >> 0xaU)));
    vlSelf->__PVT__my_FE_stage__DOT__pht_idx_fe = (0x3ffU 
                                                   & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                       >> 2U) 
                                                      ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__bhr_fe)));
    vlSelf->__PVT__my_FE_stage__DOT__target_btb_pred 
        = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_btb_valid)
            ? vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_target
           [(0xffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                      >> 2U))] : 0U);
    vlSelf->__PVT__my_FE_stage__DOT__pht_prediction_FE 
        = (1U & (vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT
                 [vlSelf->__PVT__my_FE_stage__DOT__pht_idx_fe] 
                 >> 1U));
    vlSelf->__PVT__my_FE_stage__DOT__btb_hit = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_btb_valid) 
                                                & (IData)(vlSelf->__PVT__my_FE_stage__DOT__pht_prediction_FE));
}

VL_INLINE_OPT void Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__1(Vtb_direction_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__1\n"); );
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] = 0U;
    } else {
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                << 6U) | (0x3fU & vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U]));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                        vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x3fffU 
                                                         & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                            >> 0xaU))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                                        >> 8U))))) 
                                      >> 0x20U)) << 6U));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = (((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                 << 0x1eU) | (0x3fffffc0U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[2U] 
                                             >> 2U))) 
               | ((IData)(((((QData)((IData)(vlSelf->__PVT__my_MEM_stage__DOT__dmem
                                             [(0x3fffU 
                                               & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                  >> 0xaU))])) 
                             << 0x20U) | (QData)((IData)(
                                                         ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[1U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                           >> 0x20U)) >> 0x1aU));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                         >> 2U)) | ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[3U] 
                                                     >> 2U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                         >> 2U)) | ((vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[4U] 
                                                     >> 2U))));
        vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch[5U] 
            = ((0x3fU & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                         >> 2U)) | (0x1fc0U & (vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__AGEX_latch[5U] 
                                               >> 2U)));
    }
    if (vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0;
    }
}

extern const VlWide<9>/*287:0*/ Vtb_direction__ConstPool__CONST_hf857ef52_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtb_direction__ConstPool__TABLE_hcaa37eff_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtb_direction__ConstPool__TABLE_h51279bb7_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_direction__ConstPool__TABLE_h9a816032_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_direction__ConstPool__TABLE_h085e32d7_0;

VL_INLINE_OPT void Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__2(Vtb_direction_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__2\n"); );
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h9aae73f3__0;
    my_DE_stage__DOT____VdfgTmp_h9aae73f3__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h476f3bef__0;
    my_DE_stage__DOT____VdfgTmp_h476f3bef__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h7995c6be__0;
    my_DE_stage__DOT____VdfgTmp_h7995c6be__0 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgTmp_h1f31becc__0;
    my_DE_stage__DOT____VdfgTmp_h1f31becc__0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_he7f91e62__0;
    VlWide<6>/*191:0*/ __Vtemp_hd91b47a3__0;
    // Body
    __Vtemp_he7f91e62__0[0U] = ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                 ? vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                 : ((1U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                     ? vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0
                                     : ((4U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                            >> 0xaU)))) 
                                             << 0xbU) 
                                            | ((0x7e0U 
                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                   << 1U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     >> 0x12U))))
                                         : ((5U == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                >> 0xaU)))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 7U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                          << 1U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x12U)))))
                                             : ((3U 
                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                 ? 
                                                (0xfffff000U 
                                                 & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                     << 0x15U) 
                                                    | (0x1ff000U 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0xbU))))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                                  >> 0xaU)))) 
                                                   << 0x14U) 
                                                  | ((0xff000U 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0xbU)) 
                                                     | ((0x800U 
                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                            >> 0x14U)) 
                                                        | (0x7feU 
                                                           & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                              << 1U)))))
                                                  : 0U))))));
    __Vtemp_hd91b47a3__0[0U] = (IData)((((QData)((IData)(
                                                         ((0x1cU 
                                                           == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x1dU 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1eU 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x1fU 
                                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x20U 
                                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | (0x21U 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            ((0x19U 
                                                              == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x1aU 
                                                                 == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | (0x1bU 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               (0x17U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (0x18U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            >> 0x12U)))) 
                                                        << 0x2bU) 
                                                       | (0x7ffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))));
    __Vtemp_hd91b47a3__0[1U] = ((__Vtemp_he7f91e62__0[0U] 
                                 << 0x15U) | (IData)(
                                                     ((((QData)((IData)(
                                                                        ((0x1cU 
                                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | ((0x1dU 
                                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1eU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x1fU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x20U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x21U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))) 
                                                        << 0x34U) 
                                                       | (((QData)((IData)(
                                                                           ((0x19U 
                                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x1aU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))))) 
                                                           << 0x33U) 
                                                          | (((QData)((IData)(
                                                                              (0x17U 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                              << 0x32U) 
                                                             | (((QData)((IData)(
                                                                                (0x18U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                                 << 0x31U) 
                                                                | (((QData)((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE)) 
                                                                    << 0x30U) 
                                                                   | (((QData)((IData)(
                                                                                (0x1fU 
                                                                                & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x12U)))) 
                                                                       << 0x2bU) 
                                                                      | (0x7ffffffffffULL 
                                                                         & (((QData)((IData)(
                                                                                vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U])))))))))) 
                                                      >> 0x20U)));
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[8U];
    } else if (vlSelf->__PVT__my_FE_stage__DOT__stall_pipe_FE) {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[2U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[3U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[4U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[5U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[6U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[7U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = Vtb_direction__ConstPool__CONST_hf857ef52_0[8U];
    } else {
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = __Vtemp_hd91b47a3__0[0U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = __Vtemp_hd91b47a3__0[1U];
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = ((__Vtemp_he7f91e62__0[0U] >> 0xbU) | 
               (vlSelf->__PVT__my_DE_stage__DOT__regs
                [(0x1fU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                            << 1U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 0x1fU)))] 
                << 0x15U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = ((vlSelf->__PVT__my_DE_stage__DOT__regs
                [(0x1fU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                            << 1U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      >> 0x1fU)))] 
                >> 0xbU) | ((IData)((((QData)((IData)(
                                                      ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                        << 0x15U) 
                                                       | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                          >> 0xbU)))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                  [
                                                                  (0x1fU 
                                                                   & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      >> 0x1aU))])))) 
                            << 0x15U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = (((IData)((((QData)((IData)(((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                            << 0x15U) 
                                           | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                              >> 0xbU)))) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->__PVT__my_DE_stage__DOT__regs
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                          >> 0x1aU))])))) 
                >> 0xbU) | ((IData)(((((QData)((IData)(
                                                       ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                         << 0x15U) 
                                                        | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                           >> 0xbU)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                   [
                                                                   (0x1fU 
                                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       >> 0x1aU))]))) 
                                     >> 0x20U)) << 0x15U));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = ((0xf8000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                               << 0x10U)) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE) 
                                              << 0x15U) 
                                             | ((IData)(
                                                        ((((QData)((IData)(
                                                                           ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                                             << 0x15U) 
                                                                            | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                                               >> 0xbU)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->__PVT__my_DE_stage__DOT__regs
                                                                            [
                                                                            (0x1fU 
                                                                             & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 0x1aU))]))) 
                                                         >> 0x20U)) 
                                                >> 0xbU)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = (((0x7ff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                               << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                             >> 0x10U)) 
               | (0xf8000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                 << 0x10U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = (((0x7ff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                               << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 0x10U)) 
               | (0xf8000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                 << 0x10U)));
        vlSelf->__PVT__my_DE_stage__DOT__DE_latch[8U] 
            = (((0x7ff0000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                               << 0x10U)) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                             >> 0x10U)) 
               | (0x8000000U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                << 0x10U)));
    }
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[0U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[1U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[2U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[3U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] = 
        vlSelf->__Vdly__my_FE_stage__DOT__FE_latch[5U];
    vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0 
        = (((- (IData)((1U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                              >> 0xaU)))) << 0xbU) 
           | (0x7ffU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                         << 1U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   >> 0x1fU))));
    my_DE_stage__DOT____VdfgTmp_h9aae73f3__0 = (IData)(
                                                       (0x19800U 
                                                        == 
                                                        (0x383f800U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h476f3bef__0 = (IData)(
                                                       (0x2819800U 
                                                        == 
                                                        (0x383f800U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    my_DE_stage__DOT____VdfgTmp_h7995c6be__0 = (IData)(
                                                       ((0x800000U 
                                                         == 
                                                         (0x3800000U 
                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                        & (0U 
                                                           == 
                                                           (0x7f0U 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))));
    my_DE_stage__DOT____VdfgTmp_h1f31becc__0 = (IData)(
                                                       (0x2809800U 
                                                        == 
                                                        (0x383f800U 
                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])));
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgTmp_h9aae73f3__0) 
                                                 & (0U 
                                                    == 
                                                    (0x7f0U 
                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                 ? 1U
                                                 : 
                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h9aae73f3__0) 
                                                  & (0x200U 
                                                     == 
                                                     (0x7f0U 
                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                  ? 2U
                                                  : 
                                                 ((IData)(
                                                          ((0x3819800U 
                                                            == 
                                                            (0x383f800U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                           & (0U 
                                                              == 
                                                              (0x7f0U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                   ? 3U
                                                   : 
                                                  ((IData)(
                                                           ((0x3019800U 
                                                             == 
                                                             (0x383f800U 
                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                            & (0U 
                                                               == 
                                                               (0x7f0U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                    ? 4U
                                                    : 
                                                   ((IData)(
                                                            ((0x2019800U 
                                                              == 
                                                              (0x383f800U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                             & (0U 
                                                                == 
                                                                (0x7f0U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                     ? 5U
                                                     : 
                                                    ((IData)(
                                                             ((0x1019800U 
                                                               == 
                                                               (0x383f800U 
                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0x7f0U 
                                                                  & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                      ? 6U
                                                      : 
                                                     ((IData)(
                                                              ((0x1819800U 
                                                                == 
                                                                (0x383f800U 
                                                                 & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0x7f0U 
                                                                   & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U]))))
                                                       ? 7U
                                                       : 
                                                      (((IData)(my_DE_stage__DOT____VdfgTmp_h476f3bef__0) 
                                                        & (0x200U 
                                                           == 
                                                           (0x7f0U 
                                                            & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                        ? 8U
                                                        : 
                                                       (((IData)(my_DE_stage__DOT____VdfgTmp_h476f3bef__0) 
                                                         & (0U 
                                                            == 
                                                            (0x7f0U 
                                                             & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                         ? 9U
                                                         : 
                                                        ((IData)(
                                                                 ((0x19800U 
                                                                   == 
                                                                   (0x3f800U 
                                                                    & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                  & (IData)(my_DE_stage__DOT____VdfgTmp_h7995c6be__0)))
                                                          ? 0xaU
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgTmp_h9aae73f3__0) 
                                                           & (0x10U 
                                                              == 
                                                              (0x7f0U 
                                                               & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                           ? 0xbU
                                                           : 
                                                          ((IData)(
                                                                   (0x9800U 
                                                                    == 
                                                                    (0x383f800U 
                                                                     & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                            ? 0xcU
                                                            : 
                                                           ((IData)(
                                                                    (0x3809800U 
                                                                     == 
                                                                     (0x383f800U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0xdU
                                                             : 
                                                            ((IData)(
                                                                     (0x3009800U 
                                                                      == 
                                                                      (0x383f800U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                              ? 0xeU
                                                              : 
                                                             ((IData)(
                                                                      (0x2009800U 
                                                                       == 
                                                                       (0x383f800U 
                                                                        & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                               ? 0xfU
                                                               : 
                                                              ((IData)(
                                                                       (0x1009800U 
                                                                        == 
                                                                        (0x383f800U 
                                                                         & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                ? 0x10U
                                                                : 
                                                               ((IData)(
                                                                        (0x1809800U 
                                                                         == 
                                                                         (0x383f800U 
                                                                          & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                 ? 0x11U
                                                                 : 
                                                                (((IData)(my_DE_stage__DOT____VdfgTmp_h1f31becc__0) 
                                                                  & (0x200U 
                                                                     == 
                                                                     (0x7f0U 
                                                                      & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                                  ? 0x12U
                                                                  : 
                                                                 (((IData)(my_DE_stage__DOT____VdfgTmp_h1f31becc__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x7f0U 
                                                                       & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U])))
                                                                   ? 0x13U
                                                                   : 
                                                                  ((IData)(
                                                                           ((0x9800U 
                                                                             == 
                                                                             (0x3f800U 
                                                                              & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])) 
                                                                            & (IData)(my_DE_stage__DOT____VdfgTmp_h7995c6be__0)))
                                                                    ? 0x14U
                                                                    : 
                                                                   ((0x37U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         >> 0xbU)))
                                                                     ? 0x15U
                                                                     : 
                                                                    ((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          >> 0xbU)))
                                                                      ? 0x16U
                                                                      : 
                                                                     ((IData)(
                                                                              (0x1001800U 
                                                                               == 
                                                                               (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                       ? 0x17U
                                                                       : 
                                                                      ((IData)(
                                                                               (0x1011800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                        ? 0x18U
                                                                        : 
                                                                       ((0x6fU 
                                                                         == 
                                                                         (0x7fU 
                                                                          & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             >> 0xbU)))
                                                                         ? 0x19U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x33800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((IData)(
                                                                                (0x31800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((IData)(
                                                                                (0x831800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x2031800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x2831800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                              ? 0x1fU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x3031800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((IData)(
                                                                                (0x3831800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                ? 0x21U
                                                                                : 
                                                                               ((IData)(
                                                                                (0x1039800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x839800U 
                                                                                == 
                                                                                (0x383f800U 
                                                                                & vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = ((
                                                   (0x22U 
                                                    == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      | ((2U 
                                                          == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                         | ((3U 
                                                             == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            | ((4U 
                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                               | ((5U 
                                                                   == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                  | ((6U 
                                                                      == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                     | ((7U 
                                                                         == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                        | ((8U 
                                                                            == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                           | ((9U 
                                                                               == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                              | ((0xaU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xbU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xcU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xdU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xeU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0xfU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x10U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x12U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x13U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x14U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x15U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x16U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x17U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | ((0x19U 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelf->__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))) 
                                                  & (0U 
                                                     != 
                                                     (0x1fU 
                                                      & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                         >> 0x12U))));
    __Vtableidx1 = vlSelf->__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = Vtb_direction__ConstPool__TABLE_hcaa37eff_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vtb_direction__ConstPool__TABLE_h51279bb7_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vtb_direction__ConstPool__TABLE_h9a816032_0
        [__Vtableidx2];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vtb_direction__ConstPool__TABLE_h085e32d7_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__3(Vtb_direction_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__3\n"); );
    // Body
    vlSelf->__PVT__my_FE_stage__DOT__stall_pipe_FE 
        = ((((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE) 
             & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                >> (0x1fU & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                             >> 0x1aU)))) | (((IData)(vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                              & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                                 >> 
                                                 (0x1fU 
                                                  & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                                                      << 1U) 
                                                     | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        >> 0x1fU))))) 
                                             | ((IData)(vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                                & (vlSelf->__PVT__my_DE_stage__DOT__in_use_regs 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 0x12U)))))) 
           | (IData)(vlSymsp->TOP__tb_direction__dut__my_AGEX_stage.__PVT__from_AGEX_to_DE));
}

VL_INLINE_OPT void Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__4(Vtb_direction_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_direction_pipeline___nba_sequent__TOP__tb_direction__dut__4\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v0;
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__my_DE_stage__DOT__regs__v32;
    __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__my_DE_stage__DOT__regs__v32;
    __Vdlyvval__my_DE_stage__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__my_DE_stage__DOT__regs__v32;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0;
    // Body
    __Vdlyvset__my_DE_stage__DOT__regs__v0 = 0U;
    __Vdlyvset__my_DE_stage__DOT__regs__v32 = 0U;
    if (vlSymsp->TOP.reset) {
        __Vdlyvset__my_DE_stage__DOT__regs__v0 = 1U;
    } else if ((1U & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x25U)))) {
        __Vdlyvval__my_DE_stage__DOT__regs__v32 = (IData)(vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE);
        __Vdlyvset__my_DE_stage__DOT__regs__v32 = 1U;
        __Vdlyvdim0__my_DE_stage__DOT__regs__v32 = 
            (0x1fU & (IData)((vlSymsp->TOP__tb_direction__dut__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x20U)));
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[0U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[1U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[2U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[3U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[4U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[5U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[6U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[7U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[8U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[9U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xaU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xbU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xcU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xdU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xeU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0xfU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x10U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x11U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x12U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x13U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x14U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x15U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x16U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x17U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x18U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x19U] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1aU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1bU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1cU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1dU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1eU] = 0U;
        vlSelf->__PVT__my_DE_stage__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__my_DE_stage__DOT__regs__v32) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vdlyvdim0__my_DE_stage__DOT__regs__v32] 
            = __Vdlyvval__my_DE_stage__DOT__regs__v32;
    }
}
