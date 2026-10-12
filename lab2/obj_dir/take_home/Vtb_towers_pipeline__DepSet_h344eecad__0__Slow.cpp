// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_towers.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtb_towers__Syms.h"
#include "Vtb_towers_pipeline.h"

extern const VlWide<21>/*671:0*/ Vtb_towers__ConstPool__CONST_h560f9a6b_0;

VL_ATTR_COLD void Vtb_towers_pipeline___eval_initial__TOP__tb_towers__dut(Vtb_towers_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_towers_pipeline___eval_initial__TOP__tb_towers__dut\n"); );
    // Body
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(21, Vtb_towers__ConstPool__CONST_h560f9a6b_0)
                 ,  &(vlSelf->__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(21, Vtb_towers__ConstPool__CONST_h560f9a6b_0)
                 ,  &(vlSelf->__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*3:0*/, 64> Vtb_towers__ConstPool__TABLE_hcaa37eff_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtb_towers__ConstPool__TABLE_h51279bb7_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_towers__ConstPool__TABLE_h9a816032_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_towers__ConstPool__TABLE_h085e32d7_0;

VL_ATTR_COLD void Vtb_towers_pipeline___stl_sequent__TOP__tb_towers__dut__0(Vtb_towers_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_towers_pipeline___stl_sequent__TOP__tb_towers__dut__0\n"); );
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
    // Body
    vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0 
        = (((- (IData)((1U & (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                              >> 0xaU)))) << 0xbU) 
           | (0x7ffU & ((vlSelf->__PVT__my_FE_stage__DOT__FE_latch[5U] 
                         << 1U) | (vlSelf->__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   >> 0x1fU))));
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = ((IData)(4U) 
                                                  + vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__pht_idx_fe = (0x3ffU 
                                                   & ((vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                       >> 2U) 
                                                      ^ (IData)(vlSelf->__PVT__my_FE_stage__DOT__bhr_fe)));
    vlSelf->__PVT__my_FE_stage__DOT__is_btb_valid = 
        (vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_valid
         [(0xffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                    >> 2U))] & (vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_tag
                                [(0xffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))] 
                                == (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                                    >> 0xaU)));
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
    vlSelf->__PVT__my_FE_stage__DOT__pht_prediction_FE 
        = (1U & (vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT
                 [vlSelf->__PVT__my_FE_stage__DOT__pht_idx_fe] 
                 >> 1U));
    vlSelf->__PVT__my_FE_stage__DOT__target_btb_pred 
        = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_btb_valid)
            ? vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_target
           [(0xffU & (vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch 
                      >> 2U))] : 0U);
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
    vlSelf->__PVT__my_FE_stage__DOT__btb_hit = ((IData)(vlSelf->__PVT__my_FE_stage__DOT__is_btb_valid) 
                                                & (IData)(vlSelf->__PVT__my_FE_stage__DOT__pht_prediction_FE));
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
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = Vtb_towers__ConstPool__TABLE_hcaa37eff_0
        [__Vtableidx1];
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vtb_towers__ConstPool__TABLE_h51279bb7_0[__Vtableidx1];
    __Vtableidx2 = vlSelf->__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = Vtb_towers__ConstPool__TABLE_h9a816032_0
        [__Vtableidx2];
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = Vtb_towers__ConstPool__TABLE_h085e32d7_0
        [__Vtableidx2];
}

VL_ATTR_COLD void Vtb_towers_pipeline___ctor_var_reset(Vtb_towers_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_towers_pipeline___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(172, vlSelf->__PVT__my_FE_stage__DOT__FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__valid_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__inst_count_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__pcplus_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__stall_pipe_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__pht_idx_fe = VL_RAND_RESET_I(10);
    vlSelf->__PVT__my_FE_stage__DOT__pht_prediction_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__bhr_fe = VL_RAND_RESET_I(8);
    vlSelf->__PVT__my_FE_stage__DOT__btb_hit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__target_btb_pred = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__is_btb_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__pht__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_target[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_tag[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__btb_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__my_FE_stage__DOT__btb__DOT__unnamedblk1__DOT__i = 0;
    VL_RAND_RESET_W(284, vlSelf->__PVT__my_DE_stage__DOT__DE_latch);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_RAND_RESET_I(32);
    vlSelf->my_DE_stage__DOT____VdfgExtracted_hee942bf4__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(173, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch);
    VL_RAND_RESET_W(172, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__Vdlyvdim0__my_MEM_stage__DOT__dmem__v0 = 0;
    vlSelf->__Vdlyvval__my_MEM_stage__DOT__dmem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__my_MEM_stage__DOT__dmem__v0 = 0;
}
