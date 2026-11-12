// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram_tests__Syms.h"


void Vtb_axi4_ram_tests___024root__trace_chg_sub_0(Vtb_axi4_ram_tests___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi4_ram_tests___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_axi4_ram_tests___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_tests___024root*>(voidSelf);
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_axi4_ram_tests___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi4_ram_tests___024root__trace_chg_sub_0(Vtb_axi4_ram_tests___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awid),8);
        bufp->chgSData(oldp+1,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awaddr),16);
        bufp->chgCData(oldp+2,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awlen),8);
        bufp->chgCData(oldp+3,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awsize),3);
        bufp->chgCData(oldp+4,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awburst),2);
        bufp->chgBit(oldp+5,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awlock));
        bufp->chgCData(oldp+6,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awcache),4);
        bufp->chgCData(oldp+7,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awprot),3);
        bufp->chgBit(oldp+8,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awvalid));
        bufp->chgIData(oldp+9,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_wdata),32);
        bufp->chgCData(oldp+10,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_wstrb),4);
        bufp->chgBit(oldp+11,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_wlast));
        bufp->chgBit(oldp+12,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_wvalid));
        bufp->chgBit(oldp+13,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_bready));
        bufp->chgCData(oldp+14,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_arid),8);
        bufp->chgSData(oldp+15,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_araddr),16);
        bufp->chgCData(oldp+16,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_arlen),8);
        bufp->chgCData(oldp+17,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_arsize),3);
        bufp->chgCData(oldp+18,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_arburst),2);
        bufp->chgBit(oldp+19,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_arlock));
        bufp->chgCData(oldp+20,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_arcache),4);
        bufp->chgCData(oldp+21,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_arprot),3);
        bufp->chgBit(oldp+22,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_arvalid));
        bufp->chgBit(oldp+23,(vlSelf->tb_axi4_ram_tests__DOT__s_axi_rready));
        bufp->chgBit(oldp+24,(vlSelf->tb_axi4_ram_tests__DOT__force_rst));
        bufp->chgIData(oldp+25,(vlSelf->tb_axi4_ram_tests__DOT__errors),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_axi4_ram_tests__DOT__edge_fail),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_axi4_ram_tests__DOT__corner_fail),32);
        bufp->chgCData(oldp+28,(vlSelf->tb_axi4_ram_tests__DOT__last_bid),8);
        bufp->chgIData(oldp+29,(vlSelf->tb_axi4_ram_tests__DOT__last_rdata),32);
        bufp->chgCData(oldp+30,(vlSelf->tb_axi4_ram_tests__DOT__last_rid),8);
        bufp->chgBit(oldp+31,(vlSelf->tb_axi4_ram_tests__DOT__last_rlast));
        bufp->chgCData(oldp+32,(vlSelf->tb_axi4_ram_tests__DOT__last_bresp),2);
        bufp->chgCData(oldp+33,(vlSelf->tb_axi4_ram_tests__DOT__last_rresp),2);
        bufp->chgBit(oldp+34,(vlSelf->tb_axi4_ram_tests__DOT__mon_en));
        bufp->chgIData(oldp+35,(vlSelf->tb_axi4_ram_tests__DOT__w),32);
        bufp->chgIData(oldp+36,(vlSelf->tb_axi4_ram_tests__DOT__bcount),32);
        bufp->chgIData(oldp+37,(vlSelf->tb_axi4_ram_tests__DOT__corner1__DOT__DX),32);
        bufp->chgIData(oldp+38,(vlSelf->tb_axi4_ram_tests__DOT__corner1__DOT__DY),32);
        bufp->chgIData(oldp+39,(vlSelf->tb_axi4_ram_tests__DOT__corner1__DOT__cap_data),32);
        bufp->chgBit(oldp+40,(vlSelf->tb_axi4_ram_tests__DOT__corner1__DOT__cap_last));
        bufp->chgBit(oldp+41,(vlSelf->tb_axi4_ram_tests__DOT__corner1__DOT__got));
        bufp->chgIData(oldp+42,(vlSelf->tb_axi4_ram_tests__DOT__corner1__DOT__cw),32);
        bufp->chgIData(oldp+43,(vlSelf->tb_axi4_ram_tests__DOT__corner1__DOT__drain),32);
        bufp->chgIData(oldp+44,(vlSelf->tb_axi4_ram_tests__DOT__corner2__DOT__D1),32);
        bufp->chgIData(oldp+45,(vlSelf->tb_axi4_ram_tests__DOT__corner2__DOT__D2),32);
        bufp->chgIData(oldp+46,(vlSelf->tb_axi4_ram_tests__DOT__corner2__DOT__cbcount),32);
        bufp->chgIData(oldp+47,(vlSelf->tb_axi4_ram_tests__DOT__corner2__DOT__cw),32);
        bufp->chgSData(oldp+48,(vlSelf->tb_axi4_ram_tests__DOT__corner3__DOT__PA),16);
        bufp->chgIData(oldp+49,(vlSelf->tb_axi4_ram_tests__DOT__corner3__DOT__cap_data),32);
        bufp->chgCData(oldp+50,(vlSelf->tb_axi4_ram_tests__DOT__corner3__DOT__cap_resp),2);
        bufp->chgBit(oldp+51,(vlSelf->tb_axi4_ram_tests__DOT__corner3__DOT__cap_last));
        bufp->chgBit(oldp+52,(vlSelf->tb_axi4_ram_tests__DOT__corner3__DOT__got));
        bufp->chgIData(oldp+53,(vlSelf->tb_axi4_ram_tests__DOT__corner3__DOT__cw),32);
        bufp->chgSData(oldp+54,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_tests__DOT__s_axi_awaddr) 
                                            >> 2U))),14);
        bufp->chgSData(oldp+55,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_tests__DOT__s_axi_araddr) 
                                            >> 2U))),14);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+56,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_state_next));
        bufp->chgCData(oldp+57,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_state_next),2);
        bufp->chgBit(oldp+58,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en));
        bufp->chgBit(oldp+59,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__mem_rd_en));
        bufp->chgCData(oldp+60,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_id_next),8);
        bufp->chgSData(oldp+61,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_addr_next),16);
        bufp->chgCData(oldp+62,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_count_next),8);
        bufp->chgCData(oldp+63,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_size_next),3);
        bufp->chgCData(oldp+64,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_burst_next),2);
        bufp->chgCData(oldp+65,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_id_next),8);
        bufp->chgSData(oldp+66,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_addr_next),16);
        bufp->chgCData(oldp+67,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_count_next),8);
        bufp->chgCData(oldp+68,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_size_next),3);
        bufp->chgCData(oldp+69,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_burst_next),2);
        bufp->chgSData(oldp+70,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_wrap_mask_next),16);
        bufp->chgSData(oldp+71,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_wrap_mask_next),16);
        bufp->chgSData(oldp+72,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__next_addr__Vstatic__incr),16);
        bufp->chgBit(oldp+73,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_next));
        bufp->chgBit(oldp+74,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_next));
        bufp->chgCData(oldp+75,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_bid_next),8);
        bufp->chgBit(oldp+76,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_bvalid_next));
        bufp->chgBit(oldp+77,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_next));
        bufp->chgCData(oldp+78,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_next),8);
        bufp->chgBit(oldp+79,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_next));
        bufp->chgBit(oldp+80,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_next));
        bufp->chgBit(oldp+81,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_next));
        bufp->chgCData(oldp+82,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next),2);
        bufp->chgBit(oldp+83,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en));
        bufp->chgCData(oldp+84,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_next),8);
        bufp->chgSData(oldp+85,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_next),16);
        bufp->chgCData(oldp+86,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_next),8);
        bufp->chgCData(oldp+87,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_next),3);
        bufp->chgCData(oldp+88,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_next),2);
        bufp->chgCData(oldp+89,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_next),8);
        bufp->chgSData(oldp+90,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_next),16);
        bufp->chgCData(oldp+91,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_next),8);
        bufp->chgCData(oldp+92,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_next),3);
        bufp->chgCData(oldp+93,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_next),2);
        bufp->chgSData(oldp+94,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_wrap_mask_next),16);
        bufp->chgSData(oldp+95,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_wrap_mask_next),16);
        bufp->chgSData(oldp+96,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__next_addr__Vstatic__incr),16);
        bufp->chgBit(oldp+97,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_next));
        bufp->chgBit(oldp+98,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_next));
        bufp->chgCData(oldp+99,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_bid_next),8);
        bufp->chgBit(oldp+100,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_bvalid_next));
        bufp->chgBit(oldp+101,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+102,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg));
        bufp->chgBit(oldp+103,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg));
        bufp->chgCData(oldp+104,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_bid_reg),8);
        bufp->chgBit(oldp+105,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_bvalid_reg));
        bufp->chgBit(oldp+106,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg));
        bufp->chgCData(oldp+107,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg),8);
        bufp->chgIData(oldp+108,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg),32);
        bufp->chgCData(oldp+109,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg),2);
        bufp->chgBit(oldp+110,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg));
        bufp->chgBit(oldp+111,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg));
        bufp->chgCData(oldp+112,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_bid_reg),8);
        bufp->chgBit(oldp+113,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_bvalid_reg));
        bufp->chgCData(oldp+114,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_pipe_reg),8);
        bufp->chgIData(oldp+115,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rdata_pipe_reg),32);
        bufp->chgCData(oldp+116,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rresp_pipe_reg),2);
        bufp->chgBit(oldp+117,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_pipe_reg));
        bufp->chgBit(oldp+118,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_pipe_reg));
        bufp->chgBit(oldp+119,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_reg));
        bufp->chgBit(oldp+120,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg));
        bufp->chgBit(oldp+121,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg));
        bufp->chgBit(oldp+122,(vlSelf->tb_axi4_ram_tests__DOT__stab_fail));
        bufp->chgBit(oldp+123,(vlSelf->tb_axi4_ram_tests__DOT__mon_r_armed));
        bufp->chgBit(oldp+124,(vlSelf->tb_axi4_ram_tests__DOT__mon_b_armed));
        bufp->chgIData(oldp+125,(vlSelf->tb_axi4_ram_tests__DOT__mon_rdata),32);
        bufp->chgCData(oldp+126,(vlSelf->tb_axi4_ram_tests__DOT__mon_bid),8);
        bufp->chgBit(oldp+127,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg));
        bufp->chgCData(oldp+128,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg),2);
        bufp->chgCData(oldp+129,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_id_reg),8);
        bufp->chgSData(oldp+130,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg),16);
        bufp->chgCData(oldp+131,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg),8);
        bufp->chgCData(oldp+132,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_size_reg),3);
        bufp->chgCData(oldp+133,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_burst_reg),2);
        bufp->chgCData(oldp+134,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_id_reg),8);
        bufp->chgSData(oldp+135,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg),16);
        bufp->chgCData(oldp+136,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg),8);
        bufp->chgCData(oldp+137,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_size_reg),3);
        bufp->chgCData(oldp+138,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_burst_reg),2);
        bufp->chgSData(oldp+139,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_wrap_mask_reg),16);
        bufp->chgSData(oldp+140,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_wrap_mask_reg),16);
        bufp->chgCData(oldp+141,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_pipe_reg),8);
        bufp->chgIData(oldp+142,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg),32);
        bufp->chgBit(oldp+143,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg));
        bufp->chgBit(oldp+144,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg));
        bufp->chgWData(oldp+145,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__mem_written),16384);
        bufp->chgCData(oldp+657,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg),2);
        bufp->chgSData(oldp+658,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg) 
                                             >> 2U))),14);
        bufp->chgSData(oldp+659,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg) 
                                             >> 2U))),14);
        bufp->chgBit(oldp+660,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg));
        bufp->chgCData(oldp+661,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg),2);
        bufp->chgBit(oldp+662,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_rd_en));
        bufp->chgCData(oldp+663,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_reg),8);
        bufp->chgSData(oldp+664,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg),16);
        bufp->chgCData(oldp+665,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg),8);
        bufp->chgCData(oldp+666,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_reg),3);
        bufp->chgCData(oldp+667,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_reg),2);
        bufp->chgCData(oldp+668,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_reg),8);
        bufp->chgSData(oldp+669,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg),16);
        bufp->chgCData(oldp+670,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg),8);
        bufp->chgCData(oldp+671,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_reg),3);
        bufp->chgCData(oldp+672,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_reg),2);
        bufp->chgSData(oldp+673,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_wrap_mask_reg),16);
        bufp->chgSData(oldp+674,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_wrap_mask_reg),16);
        bufp->chgCData(oldp+675,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_reg),8);
        bufp->chgCData(oldp+676,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_next),8);
        bufp->chgIData(oldp+677,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rdata_reg),32);
        bufp->chgBit(oldp+678,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_reg));
        bufp->chgBit(oldp+679,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_next));
        bufp->chgBit(oldp+680,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_reg));
        bufp->chgBit(oldp+681,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_next));
        bufp->chgWData(oldp+682,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_written),16384);
        bufp->chgCData(oldp+1194,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rresp_reg),2);
        bufp->chgSData(oldp+1195,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg) 
                                              >> 2U))),14);
        bufp->chgSData(oldp+1196,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg) 
                                              >> 2U))),14);
    }
    bufp->chgBit(oldp+1197,(vlSelf->clk));
    bufp->chgBit(oldp+1198,(vlSelf->reset));
    bufp->chgBit(oldp+1199,(vlSelf->done));
    bufp->chgBit(oldp+1200,(vlSelf->edge_pass));
    bufp->chgBit(oldp+1201,(vlSelf->corner_pass));
    bufp->chgBit(oldp+1202,(vlSelf->tb_axi4_ram_tests__DOT__dut_rst));
    bufp->chgIData(oldp+1203,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__i),32);
    bufp->chgIData(oldp+1204,(vlSelf->tb_axi4_ram_tests__DOT__dut__DOT__j),32);
    bufp->chgIData(oldp+1205,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__i),32);
    bufp->chgIData(oldp+1206,(vlSelf->tb_axi4_ram_tests__DOT__dut_pipe__DOT__j),32);
}

void Vtb_axi4_ram_tests___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root__trace_cleanup\n"); );
    // Init
    Vtb_axi4_ram_tests___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_tests___024root*>(voidSelf);
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
