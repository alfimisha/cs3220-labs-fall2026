// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram_burst_tests.h for the primary calling header

#include "verilated.h"

#include "Vtb_axi4_ram_burst_tests__Syms.h"
#include "Vtb_axi4_ram_burst_tests___024root.h"

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_static__TOP(Vtb_axi4_ram_burst_tests___024root* vlSelf);

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_static(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_static\n"); );
    // Body
    Vtb_axi4_ram_burst_tests___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_static__TOP(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_pipe_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg = 0U;
    VL_CONST_W_1X(16384,vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_written,0x00000000);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_reg = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg = 0U;
}

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__1 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__1 
        = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0 
        = (1U & VL_RAND_RESET_I(1));
    vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0 
        = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4000U, vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__i)) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__j 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__i;
        while (VL_LTS_III(32, vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__j, 
                          ((IData)(0x80U) + vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__i))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[(0x3fffU 
                                                                 & vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__j)] = 0U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__j 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__j);
        }
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__i 
            = ((IData)(0x80U) + vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__i);
    }
}

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_final(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_triggers__stl(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__stl(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_stl(Vtb_axi4_ram_burst_tests___024root* vlSelf);

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_settle(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_axi4_ram_burst_tests___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_axi4_ram_burst_tests___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_axi4_ram_burst_tests.v", 60, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_axi4_ram_burst_tests___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__stl(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_axi4_ram_burst_tests___024root___act_comb__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf);

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_stl(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tests___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__ico(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__act(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge reset)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__nba(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge reset)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___ctor_var_reset(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->edge_pass = VL_RAND_RESET_I(1);
    vlSelf->corner_pass = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__1 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__1 = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0 = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0 = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = VL_RAND_RESET_I(3);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = VL_RAND_RESET_I(4);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = VL_RAND_RESET_I(3);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = VL_RAND_RESET_I(3);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = VL_RAND_RESET_I(4);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = VL_RAND_RESET_I(3);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut_rst = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__errors = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__edge_fail = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_watch_en = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__wr_inflight = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__wr_data_phase = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__b_outstanding = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__b_hold_viol = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_viol_addr = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_n = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_last = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__expv[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__rlast_count = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__w = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__tmp = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__tlast = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc1__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc1__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc1__DOT__l = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc1__DOT__okc = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc2__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc3__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc3__DOT__okc = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc4__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc4__DOT__l = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__DX = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__DY = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_data = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_last = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__got = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__l = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__w = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__drain = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc6__DOT__l = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__l = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__pre_err = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__accepted = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__bgot = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__l = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__bgot = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__accepted = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__bgot = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__bseen = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__w = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg = VL_RAND_RESET_I(3);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next = VL_RAND_RESET_I(3);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg = VL_RAND_RESET_I(3);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next = VL_RAND_RESET_I(3);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_next = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_reg = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_next = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr = VL_RAND_RESET_I(16);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_next = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(16384, vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_written);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_reg = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg = VL_RAND_RESET_I(2);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr = VL_RAND_RESET_I(16);
    vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__addr = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__burst = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__wrap_mask = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__Vfuncout = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__addr = VL_RAND_RESET_I(16);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__burst = VL_RAND_RESET_I(2);
    vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__wrap_mask = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
