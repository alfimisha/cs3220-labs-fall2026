// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram_burst_tests__Syms.h"


void Vtb_axi4_ram_burst_tests___024root__trace_chg_sub_0(Vtb_axi4_ram_burst_tests___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi4_ram_burst_tests___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_axi4_ram_burst_tests___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst_tests___024root*>(voidSelf);
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_axi4_ram_burst_tests___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi4_ram_burst_tests___024root__trace_chg_sub_0(Vtb_axi4_ram_burst_tests___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->tb_axi4_ram_burst_tests__DOT__edge_fail),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_axi4_ram_burst_tests__DOT__rlast_count),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_axi4_ram_burst_tests__DOT__k),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_axi4_ram_burst_tests__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_axi4_ram_burst_tests__DOT__tmp),32);
        bufp->chgBit(oldp+5,(vlSelf->tb_axi4_ram_burst_tests__DOT__tlast));
        bufp->chgIData(oldp+6,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc1__DOT__k),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc1__DOT__rd),32);
        bufp->chgBit(oldp+8,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc1__DOT__l));
        bufp->chgBit(oldp+9,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc1__DOT__okc));
        bufp->chgIData(oldp+10,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc2__DOT__k),32);
        bufp->chgBit(oldp+11,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc));
        bufp->chgIData(oldp+12,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc3__DOT__k),32);
        bufp->chgBit(oldp+13,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc3__DOT__okc));
        bufp->chgIData(oldp+14,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc4__DOT__k),32);
        bufp->chgIData(oldp+15,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd),32);
        bufp->chgBit(oldp+16,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc4__DOT__l));
        bufp->chgBit(oldp+17,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc));
        bufp->chgIData(oldp+18,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__DX),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__DY),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_data),32);
        bufp->chgIData(oldp+21,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__rd),32);
        bufp->chgBit(oldp+22,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_last));
        bufp->chgBit(oldp+23,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__got));
        bufp->chgBit(oldp+24,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__l));
        bufp->chgIData(oldp+25,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__w),32);
        bufp->chgIData(oldp+26,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc5__DOT__drain),32);
        bufp->chgIData(oldp+27,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc6__DOT__k),32);
        bufp->chgIData(oldp+28,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd),32);
        bufp->chgBit(oldp+29,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc6__DOT__l));
        bufp->chgBit(oldp+30,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc));
        bufp->chgIData(oldp+31,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__pre_err),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+32,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid),8);
        bufp->chgSData(oldp+33,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr),16);
        bufp->chgCData(oldp+34,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen),8);
        bufp->chgCData(oldp+35,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize),3);
        bufp->chgCData(oldp+36,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst),2);
        bufp->chgBit(oldp+37,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock));
        bufp->chgCData(oldp+38,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache),4);
        bufp->chgCData(oldp+39,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot),3);
        bufp->chgBit(oldp+40,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid));
        bufp->chgIData(oldp+41,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata),32);
        bufp->chgCData(oldp+42,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb),4);
        bufp->chgBit(oldp+43,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast));
        bufp->chgBit(oldp+44,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid));
        bufp->chgBit(oldp+45,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready));
        bufp->chgCData(oldp+46,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid),8);
        bufp->chgSData(oldp+47,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr),16);
        bufp->chgCData(oldp+48,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen),8);
        bufp->chgCData(oldp+49,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize),3);
        bufp->chgCData(oldp+50,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst),2);
        bufp->chgBit(oldp+51,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock));
        bufp->chgCData(oldp+52,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache),4);
        bufp->chgCData(oldp+53,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot),3);
        bufp->chgBit(oldp+54,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid));
        bufp->chgBit(oldp+55,(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready));
        bufp->chgBit(oldp+56,(vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst));
        bufp->chgIData(oldp+57,(vlSelf->tb_axi4_ram_burst_tests__DOT__errors),32);
        bufp->chgIData(oldp+58,(vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail),32);
        bufp->chgBit(oldp+59,(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_watch_en));
        bufp->chgIData(oldp+60,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[0]),32);
        bufp->chgIData(oldp+61,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[1]),32);
        bufp->chgIData(oldp+62,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[2]),32);
        bufp->chgIData(oldp+63,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[3]),32);
        bufp->chgIData(oldp+64,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[4]),32);
        bufp->chgIData(oldp+65,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[5]),32);
        bufp->chgIData(oldp+66,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[6]),32);
        bufp->chgIData(oldp+67,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[7]),32);
        bufp->chgIData(oldp+68,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[8]),32);
        bufp->chgIData(oldp+69,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[9]),32);
        bufp->chgIData(oldp+70,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[10]),32);
        bufp->chgIData(oldp+71,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[11]),32);
        bufp->chgIData(oldp+72,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[12]),32);
        bufp->chgIData(oldp+73,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[13]),32);
        bufp->chgIData(oldp+74,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[14]),32);
        bufp->chgIData(oldp+75,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[15]),32);
        bufp->chgIData(oldp+76,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[16]),32);
        bufp->chgIData(oldp+77,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[17]),32);
        bufp->chgIData(oldp+78,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[18]),32);
        bufp->chgIData(oldp+79,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[19]),32);
        bufp->chgIData(oldp+80,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[20]),32);
        bufp->chgIData(oldp+81,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[21]),32);
        bufp->chgIData(oldp+82,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[22]),32);
        bufp->chgIData(oldp+83,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[23]),32);
        bufp->chgIData(oldp+84,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[24]),32);
        bufp->chgIData(oldp+85,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[25]),32);
        bufp->chgIData(oldp+86,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[26]),32);
        bufp->chgIData(oldp+87,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[27]),32);
        bufp->chgIData(oldp+88,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[28]),32);
        bufp->chgIData(oldp+89,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[29]),32);
        bufp->chgIData(oldp+90,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[30]),32);
        bufp->chgIData(oldp+91,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[31]),32);
        bufp->chgIData(oldp+92,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_n),32);
        bufp->chgBit(oldp+93,(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_last));
        bufp->chgIData(oldp+94,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[0]),32);
        bufp->chgIData(oldp+95,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[1]),32);
        bufp->chgIData(oldp+96,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[2]),32);
        bufp->chgIData(oldp+97,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[3]),32);
        bufp->chgIData(oldp+98,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[4]),32);
        bufp->chgIData(oldp+99,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[5]),32);
        bufp->chgIData(oldp+100,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[6]),32);
        bufp->chgIData(oldp+101,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[7]),32);
        bufp->chgIData(oldp+102,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[8]),32);
        bufp->chgIData(oldp+103,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[9]),32);
        bufp->chgIData(oldp+104,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[10]),32);
        bufp->chgIData(oldp+105,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[11]),32);
        bufp->chgIData(oldp+106,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[12]),32);
        bufp->chgIData(oldp+107,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[13]),32);
        bufp->chgIData(oldp+108,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[14]),32);
        bufp->chgIData(oldp+109,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[15]),32);
        bufp->chgIData(oldp+110,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[16]),32);
        bufp->chgIData(oldp+111,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[17]),32);
        bufp->chgIData(oldp+112,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[18]),32);
        bufp->chgIData(oldp+113,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[19]),32);
        bufp->chgIData(oldp+114,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[20]),32);
        bufp->chgIData(oldp+115,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[21]),32);
        bufp->chgIData(oldp+116,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[22]),32);
        bufp->chgIData(oldp+117,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[23]),32);
        bufp->chgIData(oldp+118,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[24]),32);
        bufp->chgIData(oldp+119,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[25]),32);
        bufp->chgIData(oldp+120,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[26]),32);
        bufp->chgIData(oldp+121,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[27]),32);
        bufp->chgIData(oldp+122,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[28]),32);
        bufp->chgIData(oldp+123,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[29]),32);
        bufp->chgIData(oldp+124,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[30]),32);
        bufp->chgIData(oldp+125,(vlSelf->tb_axi4_ram_burst_tests__DOT__expv[31]),32);
        bufp->chgIData(oldp+126,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__k),32);
        bufp->chgIData(oldp+127,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd),32);
        bufp->chgBit(oldp+128,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__l));
        bufp->chgBit(oldp+129,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc));
        bufp->chgSData(oldp+130,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr) 
                                             >> 2U))),14);
        bufp->chgSData(oldp+131,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr) 
                                             >> 2U))),14);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+132,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k),32);
        bufp->chgIData(oldp+133,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd),32);
        bufp->chgBit(oldp+134,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l));
        bufp->chgBit(oldp+135,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc));
        bufp->chgBit(oldp+136,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__accepted));
        bufp->chgBit(oldp+137,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__bgot));
        bufp->chgBit(oldp+138,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__bseen));
        bufp->chgIData(oldp+139,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err),32);
        bufp->chgIData(oldp+140,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k),32);
        bufp->chgIData(oldp+141,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd),32);
        bufp->chgBit(oldp+142,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l));
        bufp->chgBit(oldp+143,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc));
        bufp->chgBit(oldp+144,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__accepted));
        bufp->chgBit(oldp+145,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__bgot));
        bufp->chgIData(oldp+146,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k),32);
        bufp->chgIData(oldp+147,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd),32);
        bufp->chgBit(oldp+148,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__l));
        bufp->chgBit(oldp+149,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc));
        bufp->chgBit(oldp+150,(vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__bgot));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+151,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next));
        bufp->chgCData(oldp+152,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next),2);
        bufp->chgBit(oldp+153,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en));
        bufp->chgBit(oldp+154,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en));
        bufp->chgCData(oldp+155,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next),8);
        bufp->chgSData(oldp+156,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next),16);
        bufp->chgCData(oldp+157,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next),8);
        bufp->chgCData(oldp+158,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next),3);
        bufp->chgCData(oldp+159,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next),2);
        bufp->chgCData(oldp+160,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next),8);
        bufp->chgSData(oldp+161,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next),16);
        bufp->chgCData(oldp+162,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next),8);
        bufp->chgCData(oldp+163,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next),3);
        bufp->chgCData(oldp+164,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next),2);
        bufp->chgSData(oldp+165,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_next),16);
        bufp->chgSData(oldp+166,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_next),16);
        bufp->chgSData(oldp+167,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr),16);
        bufp->chgBit(oldp+168,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next));
        bufp->chgBit(oldp+169,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next));
        bufp->chgCData(oldp+170,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next),8);
        bufp->chgBit(oldp+171,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next));
        bufp->chgBit(oldp+172,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next));
        bufp->chgCData(oldp+173,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next),8);
        bufp->chgBit(oldp+174,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next));
        bufp->chgBit(oldp+175,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+176,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg));
        bufp->chgBit(oldp+177,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg));
        bufp->chgCData(oldp+178,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_reg),8);
        bufp->chgBit(oldp+179,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg));
        bufp->chgBit(oldp+180,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg));
        bufp->chgCData(oldp+181,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg),8);
        bufp->chgIData(oldp+182,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg),32);
        bufp->chgCData(oldp+183,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_reg),2);
        bufp->chgBit(oldp+184,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg));
        bufp->chgBit(oldp+185,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg));
        bufp->chgBit(oldp+186,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg));
        bufp->chgCData(oldp+187,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg),2);
        bufp->chgCData(oldp+188,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg),8);
        bufp->chgSData(oldp+189,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg),16);
        bufp->chgCData(oldp+190,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg),8);
        bufp->chgCData(oldp+191,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg),3);
        bufp->chgCData(oldp+192,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg),2);
        bufp->chgCData(oldp+193,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg),8);
        bufp->chgSData(oldp+194,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg),16);
        bufp->chgCData(oldp+195,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg),8);
        bufp->chgCData(oldp+196,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg),3);
        bufp->chgCData(oldp+197,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg),2);
        bufp->chgSData(oldp+198,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_reg),16);
        bufp->chgSData(oldp+199,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_reg),16);
        bufp->chgCData(oldp+200,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_pipe_reg),8);
        bufp->chgIData(oldp+201,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg),32);
        bufp->chgBit(oldp+202,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg));
        bufp->chgBit(oldp+203,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg));
        bufp->chgWData(oldp+204,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_written),16384);
        bufp->chgCData(oldp+716,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg),2);
        bufp->chgSData(oldp+717,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg) 
                                             >> 2U))),14);
        bufp->chgSData(oldp+718,((0x3fffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                                             >> 2U))),14);
    }
    bufp->chgBit(oldp+719,(vlSelf->clk));
    bufp->chgBit(oldp+720,(vlSelf->reset));
    bufp->chgBit(oldp+721,(vlSelf->done));
    bufp->chgBit(oldp+722,(vlSelf->edge_pass));
    bufp->chgBit(oldp+723,(vlSelf->corner_pass));
    bufp->chgBit(oldp+724,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut_rst));
    bufp->chgBit(oldp+725,(vlSelf->tb_axi4_ram_burst_tests__DOT__wr_inflight));
    bufp->chgBit(oldp+726,(vlSelf->tb_axi4_ram_burst_tests__DOT__wr_data_phase));
    bufp->chgBit(oldp+727,(vlSelf->tb_axi4_ram_burst_tests__DOT__b_outstanding));
    bufp->chgBit(oldp+728,(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol));
    bufp->chgBit(oldp+729,(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol));
    bufp->chgBit(oldp+730,(vlSelf->tb_axi4_ram_burst_tests__DOT__b_hold_viol));
    bufp->chgSData(oldp+731,(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_viol_addr),16);
    bufp->chgIData(oldp+732,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__i),32);
    bufp->chgIData(oldp+733,(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__j),32);
}

void Vtb_axi4_ram_burst_tests___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root__trace_cleanup\n"); );
    // Init
    Vtb_axi4_ram_burst_tests___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst_tests___024root*>(voidSelf);
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
