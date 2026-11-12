// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram__Syms.h"


VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_init_sub__TOP__0(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+945,"clk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_init_sub__TOP__tb_axi4_ram__0(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_init_sub__TOP__tb_axi4_ram__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+945,"clk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBus(c+950,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+951,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+952,"STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+953,"ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"PIPELINE_OUTPUT", false,-1, 31,0);
    tracep->declBus(c+955,"s_axi_awid", false,-1, 7,0);
    tracep->declBus(c+2,"s_axi_awaddr", false,-1, 15,0);
    tracep->declBus(c+3,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+956,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+957,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+958,"s_axi_awlock", false,-1);
    tracep->declBus(c+959,"s_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+960,"s_axi_awprot", false,-1, 2,0);
    tracep->declBit(c+4,"s_axi_awvalid", false,-1);
    tracep->declBit(c+5,"s_axi_awready", false,-1);
    tracep->declBus(c+6,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"s_axi_wlast", false,-1);
    tracep->declBit(c+9,"s_axi_wvalid", false,-1);
    tracep->declBit(c+10,"s_axi_wready", false,-1);
    tracep->declBus(c+11,"s_axi_bid", false,-1, 7,0);
    tracep->declBus(c+961,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+12,"s_axi_bvalid", false,-1);
    tracep->declBit(c+13,"s_axi_bready", false,-1);
    tracep->declBus(c+962,"s_axi_arid", false,-1, 7,0);
    tracep->declBus(c+14,"s_axi_araddr", false,-1, 15,0);
    tracep->declBus(c+15,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+956,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+957,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+958,"s_axi_arlock", false,-1);
    tracep->declBus(c+959,"s_axi_arcache", false,-1, 3,0);
    tracep->declBus(c+960,"s_axi_arprot", false,-1, 2,0);
    tracep->declBit(c+16,"s_axi_arvalid", false,-1);
    tracep->declBit(c+17,"s_axi_arready", false,-1);
    tracep->declBus(c+18,"s_axi_rid", false,-1, 7,0);
    tracep->declBus(c+19,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+20,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+21,"s_axi_rlast", false,-1);
    tracep->declBit(c+22,"s_axi_rvalid", false,-1);
    tracep->declBit(c+23,"s_axi_rready", false,-1);
    tracep->declBit(c+947,"correct_V", false,-1);
    tracep->declBit(c+948,"correct_V_ap_vld", false,-1);
    tracep->pushNamePrefix("axi4_tester_inst ");
    tracep->declBus(c+963,"ap_ST_fsm_state1", false,-1, 23,0);
    tracep->declBus(c+964,"ap_ST_fsm_state2", false,-1, 23,0);
    tracep->declBus(c+965,"ap_ST_fsm_state3", false,-1, 23,0);
    tracep->declBus(c+966,"ap_ST_fsm_state4", false,-1, 23,0);
    tracep->declBus(c+967,"ap_ST_fsm_state5", false,-1, 23,0);
    tracep->declBus(c+968,"ap_ST_fsm_state6", false,-1, 23,0);
    tracep->declBus(c+969,"ap_ST_fsm_state7", false,-1, 23,0);
    tracep->declBus(c+970,"ap_ST_fsm_state8", false,-1, 23,0);
    tracep->declBus(c+971,"ap_ST_fsm_state9", false,-1, 23,0);
    tracep->declBus(c+972,"ap_ST_fsm_state10", false,-1, 23,0);
    tracep->declBus(c+973,"ap_ST_fsm_state11", false,-1, 23,0);
    tracep->declBus(c+974,"ap_ST_fsm_state12", false,-1, 23,0);
    tracep->declBus(c+975,"ap_ST_fsm_state13", false,-1, 23,0);
    tracep->declBus(c+976,"ap_ST_fsm_state14", false,-1, 23,0);
    tracep->declBus(c+977,"ap_ST_fsm_state15", false,-1, 23,0);
    tracep->declBus(c+978,"ap_ST_fsm_state16", false,-1, 23,0);
    tracep->declBus(c+979,"ap_ST_fsm_state17", false,-1, 23,0);
    tracep->declBus(c+980,"ap_ST_fsm_state18", false,-1, 23,0);
    tracep->declBus(c+981,"ap_ST_fsm_state19", false,-1, 23,0);
    tracep->declBus(c+982,"ap_ST_fsm_state20", false,-1, 23,0);
    tracep->declBus(c+983,"ap_ST_fsm_state21", false,-1, 23,0);
    tracep->declBus(c+984,"ap_ST_fsm_state22", false,-1, 23,0);
    tracep->declBus(c+985,"ap_ST_fsm_state23", false,-1, 23,0);
    tracep->declBus(c+986,"ap_ST_fsm_state24", false,-1, 23,0);
    tracep->declBus(c+987,"C_M_AXI_DATA_IN_OUT_V_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+950,"C_M_AXI_DATA_IN_OUT_V_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+950,"C_M_AXI_DATA_IN_OUT_V_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_DATA_IN_OUT_V_AWUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_DATA_IN_OUT_V_ARUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_DATA_IN_OUT_V_WUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_DATA_IN_OUT_V_RUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_DATA_IN_OUT_V_BUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"C_M_AXI_DATA_IN_OUT_V_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+954,"C_M_AXI_DATA_IN_OUT_V_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+954,"C_M_AXI_DATA_IN_OUT_V_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+988,"C_M_AXI_DATA_IN_OUT_V_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+950,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+952,"C_M_AXI_DATA_IN_OUT_V_WSTRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+952,"C_M_AXI_WSTRB_WIDTH", false,-1, 31,0);
    tracep->declBit(c+945,"ap_clk", false,-1);
    tracep->declBit(c+949,"ap_rst_n", false,-1);
    tracep->declBit(c+4,"m_axi_data_in_out_V_AWVALID", false,-1);
    tracep->declBit(c+5,"m_axi_data_in_out_V_AWREADY", false,-1);
    tracep->declBus(c+24,"m_axi_data_in_out_V_AWADDR", false,-1, 31,0);
    tracep->declBus(c+989,"m_axi_data_in_out_V_AWID", false,-1, 0,0);
    tracep->declBus(c+3,"m_axi_data_in_out_V_AWLEN", false,-1, 7,0);
    tracep->declBus(c+956,"m_axi_data_in_out_V_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+957,"m_axi_data_in_out_V_AWBURST", false,-1, 1,0);
    tracep->declBus(c+961,"m_axi_data_in_out_V_AWLOCK", false,-1, 1,0);
    tracep->declBus(c+959,"m_axi_data_in_out_V_AWCACHE", false,-1, 3,0);
    tracep->declBus(c+960,"m_axi_data_in_out_V_AWPROT", false,-1, 2,0);
    tracep->declBus(c+990,"m_axi_data_in_out_V_AWQOS", false,-1, 3,0);
    tracep->declBus(c+990,"m_axi_data_in_out_V_AWREGION", false,-1, 3,0);
    tracep->declBus(c+989,"m_axi_data_in_out_V_AWUSER", false,-1, 0,0);
    tracep->declBit(c+9,"m_axi_data_in_out_V_WVALID", false,-1);
    tracep->declBit(c+10,"m_axi_data_in_out_V_WREADY", false,-1);
    tracep->declBus(c+6,"m_axi_data_in_out_V_WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"m_axi_data_in_out_V_WSTRB", false,-1, 3,0);
    tracep->declBit(c+8,"m_axi_data_in_out_V_WLAST", false,-1);
    tracep->declBus(c+989,"m_axi_data_in_out_V_WID", false,-1, 0,0);
    tracep->declBus(c+989,"m_axi_data_in_out_V_WUSER", false,-1, 0,0);
    tracep->declBit(c+16,"m_axi_data_in_out_V_ARVALID", false,-1);
    tracep->declBit(c+17,"m_axi_data_in_out_V_ARREADY", false,-1);
    tracep->declBus(c+25,"m_axi_data_in_out_V_ARADDR", false,-1, 31,0);
    tracep->declBus(c+989,"m_axi_data_in_out_V_ARID", false,-1, 0,0);
    tracep->declBus(c+15,"m_axi_data_in_out_V_ARLEN", false,-1, 7,0);
    tracep->declBus(c+956,"m_axi_data_in_out_V_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+957,"m_axi_data_in_out_V_ARBURST", false,-1, 1,0);
    tracep->declBus(c+961,"m_axi_data_in_out_V_ARLOCK", false,-1, 1,0);
    tracep->declBus(c+959,"m_axi_data_in_out_V_ARCACHE", false,-1, 3,0);
    tracep->declBus(c+960,"m_axi_data_in_out_V_ARPROT", false,-1, 2,0);
    tracep->declBus(c+990,"m_axi_data_in_out_V_ARQOS", false,-1, 3,0);
    tracep->declBus(c+990,"m_axi_data_in_out_V_ARREGION", false,-1, 3,0);
    tracep->declBus(c+989,"m_axi_data_in_out_V_ARUSER", false,-1, 0,0);
    tracep->declBit(c+22,"m_axi_data_in_out_V_RVALID", false,-1);
    tracep->declBit(c+23,"m_axi_data_in_out_V_RREADY", false,-1);
    tracep->declBus(c+19,"m_axi_data_in_out_V_RDATA", false,-1, 31,0);
    tracep->declBit(c+21,"m_axi_data_in_out_V_RLAST", false,-1);
    tracep->declBus(c+26,"m_axi_data_in_out_V_RID", false,-1, 0,0);
    tracep->declBus(c+991,"m_axi_data_in_out_V_RUSER", false,-1, 0,0);
    tracep->declBus(c+20,"m_axi_data_in_out_V_RRESP", false,-1, 1,0);
    tracep->declBit(c+12,"m_axi_data_in_out_V_BVALID", false,-1);
    tracep->declBit(c+13,"m_axi_data_in_out_V_BREADY", false,-1);
    tracep->declBus(c+961,"m_axi_data_in_out_V_BRESP", false,-1, 1,0);
    tracep->declBus(c+27,"m_axi_data_in_out_V_BID", false,-1, 0,0);
    tracep->declBus(c+992,"m_axi_data_in_out_V_BUSER", false,-1, 0,0);
    tracep->declBus(c+947,"correct_V", false,-1, 0,0);
    tracep->declBit(c+948,"correct_V_ap_vld", false,-1);
    tracep->declBit(c+946,"ap_rst_n_inv", false,-1);
    tracep->declBus(c+28,"addr_address0", false,-1, 9,0);
    tracep->declBit(c+29,"addr_ce0", false,-1);
    tracep->declBus(c+30,"addr_q0", false,-1, 9,0);
    tracep->declBus(c+31,"test_data_V_address0", false,-1, 9,0);
    tracep->declBit(c+32,"test_data_V_ce0", false,-1);
    tracep->declBus(c+33,"test_data_V_q0", false,-1, 31,0);
    tracep->declBit(c+34,"data_in_out_V_blk_n_AW", false,-1);
    tracep->declBus(c+35,"ap_CS_fsm", false,-1, 23,0);
    tracep->declBit(c+36,"ap_CS_fsm_state4", false,-1);
    tracep->declBit(c+37,"data_in_out_V_blk_n_W", false,-1);
    tracep->declBit(c+38,"ap_CS_fsm_state5", false,-1);
    tracep->declBit(c+39,"data_in_out_V_blk_n_B", false,-1);
    tracep->declBit(c+40,"ap_CS_fsm_state10", false,-1);
    tracep->declBit(c+41,"data_in_out_V_blk_n_AR", false,-1);
    tracep->declBit(c+42,"ap_CS_fsm_state13", false,-1);
    tracep->declBit(c+43,"data_in_out_V_blk_n_R", false,-1);
    tracep->declBit(c+44,"ap_CS_fsm_state20", false,-1);
    tracep->declBit(c+45,"data_in_out_V_AWVALID", false,-1);
    tracep->declBit(c+46,"data_in_out_V_AWREADY", false,-1);
    tracep->declBus(c+47,"data_in_out_V_AWADDR", false,-1, 31,0);
    tracep->declBit(c+48,"data_in_out_V_WVALID", false,-1);
    tracep->declBit(c+49,"data_in_out_V_WREADY", false,-1);
    tracep->declBit(c+50,"data_in_out_V_ARVALID", false,-1);
    tracep->declBit(c+51,"data_in_out_V_ARREADY", false,-1);
    tracep->declBus(c+47,"data_in_out_V_ARADDR", false,-1, 31,0);
    tracep->declBit(c+52,"data_in_out_V_RVALID", false,-1);
    tracep->declBit(c+53,"data_in_out_V_RREADY", false,-1);
    tracep->declBus(c+54,"data_in_out_V_RDATA", false,-1, 31,0);
    tracep->declBit(c+958,"data_in_out_V_RLAST", false,-1);
    tracep->declBus(c+958,"data_in_out_V_RID", false,-1, 0,0);
    tracep->declBus(c+989,"data_in_out_V_RUSER", false,-1, 0,0);
    tracep->declBus(c+55,"data_in_out_V_RRESP", false,-1, 1,0);
    tracep->declBit(c+56,"data_in_out_V_BVALID", false,-1);
    tracep->declBit(c+57,"data_in_out_V_BREADY", false,-1);
    tracep->declBus(c+58,"data_in_out_V_BRESP", false,-1, 1,0);
    tracep->declBus(c+958,"data_in_out_V_BID", false,-1, 0,0);
    tracep->declBus(c+989,"data_in_out_V_BUSER", false,-1, 0,0);
    tracep->declBus(c+59,"reg_213", false,-1, 9,0);
    tracep->declBit(c+60,"ap_CS_fsm_state3", false,-1);
    tracep->declBit(c+61,"ap_CS_fsm_state12", false,-1);
    tracep->declBus(c+62,"i_fu_223_p2", false,-1, 10,0);
    tracep->declBus(c+63,"i_reg_301", false,-1, 10,0);
    tracep->declBit(c+64,"ap_CS_fsm_state2", false,-1);
    tracep->declBus(c+65,"icmp_ln13_fu_217_p2", false,-1, 0,0);
    tracep->declBus(c+66,"test_data_V_load_reg_316", false,-1, 31,0);
    tracep->declBus(c+67,"i_1_fu_252_p2", false,-1, 10,0);
    tracep->declBus(c+68,"i_1_reg_330", false,-1, 10,0);
    tracep->declBit(c+69,"ap_CS_fsm_state11", false,-1);
    tracep->declQuad(c+70,"zext_ln22_fu_258_p1", false,-1, 63,0);
    tracep->declQuad(c+72,"zext_ln22_reg_335", false,-1, 63,0);
    tracep->declBus(c+74,"icmp_ln19_fu_246_p2", false,-1, 0,0);
    tracep->declBus(c+75,"data_in_out_V_addr_1_1_reg_351", false,-1, 31,0);
    tracep->declBus(c+76,"i_2_fu_280_p2", false,-1, 10,0);
    tracep->declBus(c+77,"i_2_reg_359", false,-1, 10,0);
    tracep->declBit(c+78,"ap_CS_fsm_state22", false,-1);
    tracep->declBus(c+79,"icmp_ln26_fu_274_p2", false,-1, 0,0);
    tracep->declBus(c+80,"data_from_mem_V_address0", false,-1, 9,0);
    tracep->declBit(c+81,"data_from_mem_V_ce0", false,-1);
    tracep->declBit(c+82,"data_from_mem_V_we0", false,-1);
    tracep->declBus(c+83,"data_from_mem_V_q0", false,-1, 31,0);
    tracep->declBus(c+84,"i_0_reg_166", false,-1, 10,0);
    tracep->declBit(c+85,"ap_CS_fsm_state1", false,-1);
    tracep->declBus(c+86,"i1_0_reg_177", false,-1, 10,0);
    tracep->declBit(c+82,"ap_CS_fsm_state21", false,-1);
    tracep->declBus(c+87,"i2_0_reg_188", false,-1, 10,0);
    tracep->declBit(c+88,"ap_CS_fsm_state23", false,-1);
    tracep->declBus(c+89,"icmp_ln883_fu_292_p2", false,-1, 0,0);
    tracep->declBus(c+90,"storemerge_reg_199", false,-1, 0,0);
    tracep->declQuad(c+91,"zext_ln16_fu_229_p1", false,-1, 63,0);
    tracep->declQuad(c+93,"zext_ln28_fu_286_p1", false,-1, 63,0);
    tracep->declQuad(c+95,"zext_ln16_1_fu_235_p1", false,-1, 63,0);
    tracep->declQuad(c+95,"zext_ln22_1_fu_263_p1", false,-1, 63,0);
    tracep->declBit(c+948,"ap_CS_fsm_state24", false,-1);
    tracep->declBus(c+97,"ap_NS_fsm", false,-1, 23,0);
    tracep->pushNamePrefix("addr_U ");
    tracep->declBus(c+993,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+994,"AddressRange", false,-1, 31,0);
    tracep->declBus(c+993,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->declBus(c+28,"address0", false,-1, 9,0);
    tracep->declBit(c+29,"ce0", false,-1);
    tracep->declBus(c+30,"q0", false,-1, 9,0);
    tracep->pushNamePrefix("axi4_tester_addr_rom_U ");
    tracep->declBus(c+993,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+993,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+994,"MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+28,"addr0", false,-1, 9,0);
    tracep->declBit(c+29,"ce0", false,-1);
    tracep->declBus(c+30,"q0", false,-1, 9,0);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4_tester_data_in_out_V_m_axi_U ");
    tracep->declBus(c+954,"CONSERVATIVE", false,-1, 31,0);
    tracep->declBus(c+951,"NUM_READ_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+951,"NUM_WRITE_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+951,"MAX_READ_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+951,"MAX_WRITE_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+950,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"C_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+950,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_AWUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_ARUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_WUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_RUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_BUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"C_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+954,"C_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+988,"C_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+950,"USER_DW", false,-1, 31,0);
    tracep->declBus(c+950,"USER_AW", false,-1, 31,0);
    tracep->declBus(c+995,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBit(c+945,"ACLK", false,-1);
    tracep->declBit(c+946,"ARESET", false,-1);
    tracep->declBit(c+996,"ACLK_EN", false,-1);
    tracep->declBus(c+989,"AWID", false,-1, 0,0);
    tracep->declBus(c+24,"AWADDR", false,-1, 31,0);
    tracep->declBus(c+3,"AWLEN", false,-1, 7,0);
    tracep->declBus(c+956,"AWSIZE", false,-1, 2,0);
    tracep->declBus(c+957,"AWBURST", false,-1, 1,0);
    tracep->declBus(c+961,"AWLOCK", false,-1, 1,0);
    tracep->declBus(c+959,"AWCACHE", false,-1, 3,0);
    tracep->declBus(c+960,"AWPROT", false,-1, 2,0);
    tracep->declBus(c+990,"AWQOS", false,-1, 3,0);
    tracep->declBus(c+990,"AWREGION", false,-1, 3,0);
    tracep->declBus(c+989,"AWUSER", false,-1, 0,0);
    tracep->declBit(c+4,"AWVALID", false,-1);
    tracep->declBit(c+5,"AWREADY", false,-1);
    tracep->declBus(c+989,"WID", false,-1, 0,0);
    tracep->declBus(c+6,"WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"WSTRB", false,-1, 3,0);
    tracep->declBit(c+8,"WLAST", false,-1);
    tracep->declBus(c+989,"WUSER", false,-1, 0,0);
    tracep->declBit(c+9,"WVALID", false,-1);
    tracep->declBit(c+10,"WREADY", false,-1);
    tracep->declBus(c+27,"BID", false,-1, 0,0);
    tracep->declBus(c+961,"BRESP", false,-1, 1,0);
    tracep->declBus(c+992,"BUSER", false,-1, 0,0);
    tracep->declBit(c+12,"BVALID", false,-1);
    tracep->declBit(c+13,"BREADY", false,-1);
    tracep->declBus(c+989,"ARID", false,-1, 0,0);
    tracep->declBus(c+25,"ARADDR", false,-1, 31,0);
    tracep->declBus(c+15,"ARLEN", false,-1, 7,0);
    tracep->declBus(c+956,"ARSIZE", false,-1, 2,0);
    tracep->declBus(c+957,"ARBURST", false,-1, 1,0);
    tracep->declBus(c+961,"ARLOCK", false,-1, 1,0);
    tracep->declBus(c+959,"ARCACHE", false,-1, 3,0);
    tracep->declBus(c+960,"ARPROT", false,-1, 2,0);
    tracep->declBus(c+990,"ARQOS", false,-1, 3,0);
    tracep->declBus(c+990,"ARREGION", false,-1, 3,0);
    tracep->declBus(c+989,"ARUSER", false,-1, 0,0);
    tracep->declBit(c+16,"ARVALID", false,-1);
    tracep->declBit(c+17,"ARREADY", false,-1);
    tracep->declBus(c+26,"RID", false,-1, 0,0);
    tracep->declBus(c+19,"RDATA", false,-1, 31,0);
    tracep->declBus(c+20,"RRESP", false,-1, 1,0);
    tracep->declBit(c+21,"RLAST", false,-1);
    tracep->declBus(c+991,"RUSER", false,-1, 0,0);
    tracep->declBit(c+22,"RVALID", false,-1);
    tracep->declBit(c+23,"RREADY", false,-1);
    tracep->declBus(c+958,"I_AWID", false,-1, 0,0);
    tracep->declBus(c+47,"I_AWADDR", false,-1, 31,0);
    tracep->declBus(c+987,"I_AWLEN", false,-1, 31,0);
    tracep->declBus(c+960,"I_AWSIZE", false,-1, 2,0);
    tracep->declBus(c+961,"I_AWBURST", false,-1, 1,0);
    tracep->declBus(c+961,"I_AWLOCK", false,-1, 1,0);
    tracep->declBus(c+990,"I_AWCACHE", false,-1, 3,0);
    tracep->declBus(c+960,"I_AWPROT", false,-1, 2,0);
    tracep->declBus(c+990,"I_AWQOS", false,-1, 3,0);
    tracep->declBus(c+990,"I_AWREGION", false,-1, 3,0);
    tracep->declBus(c+958,"I_AWUSER", false,-1, 0,0);
    tracep->declBit(c+45,"I_AWVALID", false,-1);
    tracep->declBit(c+46,"I_AWREADY", false,-1);
    tracep->declBus(c+958,"I_WID", false,-1, 0,0);
    tracep->declBus(c+66,"I_WDATA", false,-1, 31,0);
    tracep->declBit(c+958,"I_WLAST", false,-1);
    tracep->declBus(c+997,"I_WSTRB", false,-1, 3,0);
    tracep->declBus(c+958,"I_WUSER", false,-1, 0,0);
    tracep->declBit(c+48,"I_WVALID", false,-1);
    tracep->declBit(c+49,"I_WREADY", false,-1);
    tracep->declBus(c+958,"I_BID", false,-1, 0,0);
    tracep->declBus(c+58,"I_BRESP", false,-1, 1,0);
    tracep->declBus(c+989,"I_BUSER", false,-1, 0,0);
    tracep->declBit(c+56,"I_BVALID", false,-1);
    tracep->declBit(c+57,"I_BREADY", false,-1);
    tracep->declBus(c+958,"I_ARID", false,-1, 0,0);
    tracep->declBus(c+47,"I_ARADDR", false,-1, 31,0);
    tracep->declBus(c+987,"I_ARLEN", false,-1, 31,0);
    tracep->declBus(c+960,"I_ARSIZE", false,-1, 2,0);
    tracep->declBus(c+961,"I_ARBURST", false,-1, 1,0);
    tracep->declBus(c+961,"I_ARLOCK", false,-1, 1,0);
    tracep->declBus(c+990,"I_ARCACHE", false,-1, 3,0);
    tracep->declBus(c+960,"I_ARPROT", false,-1, 2,0);
    tracep->declBus(c+990,"I_ARQOS", false,-1, 3,0);
    tracep->declBus(c+990,"I_ARREGION", false,-1, 3,0);
    tracep->declBus(c+958,"I_ARUSER", false,-1, 0,0);
    tracep->declBit(c+50,"I_ARVALID", false,-1);
    tracep->declBit(c+51,"I_ARREADY", false,-1);
    tracep->declBus(c+958,"I_RID", false,-1, 0,0);
    tracep->declBus(c+54,"I_RDATA", false,-1, 31,0);
    tracep->declBus(c+55,"I_RRESP", false,-1, 1,0);
    tracep->declBit(c+958,"I_RLAST", false,-1);
    tracep->declBus(c+989,"I_RUSER", false,-1, 0,0);
    tracep->declBit(c+52,"I_RVALID", false,-1);
    tracep->declBit(c+53,"I_RREADY", false,-1);
    tracep->declBus(c+24,"AWADDR_Dummy", false,-1, 31,0);
    tracep->declBus(c+3,"AWLEN_Dummy", false,-1, 7,0);
    tracep->declBit(c+98,"AWVALID_Dummy", false,-1);
    tracep->declBit(c+99,"AWREADY_Dummy", false,-1);
    tracep->declBus(c+6,"WDATA_Dummy", false,-1, 31,0);
    tracep->declBus(c+7,"WSTRB_Dummy", false,-1, 3,0);
    tracep->declBit(c+8,"WLAST_Dummy", false,-1);
    tracep->declBit(c+9,"WVALID_Dummy", false,-1);
    tracep->declBit(c+10,"WREADY_Dummy", false,-1);
    tracep->pushNamePrefix("bus_read ");
    tracep->declBus(c+951,"NUM_READ_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+951,"MAX_READ_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+950,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"C_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+950,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_ARUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_RUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"C_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+954,"C_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+988,"C_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+950,"USER_DW", false,-1, 31,0);
    tracep->declBus(c+950,"USER_AW", false,-1, 31,0);
    tracep->declBus(c+995,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBit(c+945,"ACLK", false,-1);
    tracep->declBit(c+946,"ARESET", false,-1);
    tracep->declBit(c+996,"ACLK_EN", false,-1);
    tracep->declBus(c+989,"ARID", false,-1, 0,0);
    tracep->declBus(c+25,"ARADDR", false,-1, 31,0);
    tracep->declBus(c+15,"ARLEN", false,-1, 7,0);
    tracep->declBus(c+956,"ARSIZE", false,-1, 2,0);
    tracep->declBus(c+957,"ARBURST", false,-1, 1,0);
    tracep->declBus(c+961,"ARLOCK", false,-1, 1,0);
    tracep->declBus(c+959,"ARCACHE", false,-1, 3,0);
    tracep->declBus(c+960,"ARPROT", false,-1, 2,0);
    tracep->declBus(c+990,"ARQOS", false,-1, 3,0);
    tracep->declBus(c+990,"ARREGION", false,-1, 3,0);
    tracep->declBus(c+989,"ARUSER", false,-1, 0,0);
    tracep->declBit(c+16,"ARVALID", false,-1);
    tracep->declBit(c+17,"ARREADY", false,-1);
    tracep->declBus(c+26,"RID", false,-1, 0,0);
    tracep->declBus(c+19,"RDATA", false,-1, 31,0);
    tracep->declBus(c+20,"RRESP", false,-1, 1,0);
    tracep->declBit(c+21,"RLAST", false,-1);
    tracep->declBus(c+991,"RUSER", false,-1, 0,0);
    tracep->declBit(c+22,"RVALID", false,-1);
    tracep->declBit(c+23,"RREADY", false,-1);
    tracep->declBit(c+50,"rreq_valid", false,-1);
    tracep->declBit(c+51,"rreq_ack", false,-1);
    tracep->declBus(c+47,"rreq_addr", false,-1, 31,0);
    tracep->declBus(c+987,"rreq_length", false,-1, 31,0);
    tracep->declBus(c+990,"rreq_cache", false,-1, 3,0);
    tracep->declBus(c+960,"rreq_prot", false,-1, 2,0);
    tracep->declBus(c+990,"rreq_qos", false,-1, 3,0);
    tracep->declBus(c+990,"rreq_region", false,-1, 3,0);
    tracep->declBus(c+958,"rreq_user", false,-1, 0,0);
    tracep->declBus(c+54,"rdata_data", false,-1, 31,0);
    tracep->declBus(c+55,"rrsp", false,-1, 1,0);
    tracep->declBit(c+52,"rdata_valid", false,-1);
    tracep->declBit(c+53,"rdata_ack", false,-1);
    tracep->declBus(c+950,"USER_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+952,"USER_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+998,"USER_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+950,"BUS_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+952,"BUS_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+998,"BUS_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+952,"NUM_READ_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+999,"BOUNDARY_BEATS", false,-1, 9,0);
    tracep->declBus(c+1000,"calc_data_width__Vstatic__y", false,-1, 31,0);
    tracep->declBus(c+1001,"log2__Vstatic__n", false,-1, 31,0);
    tracep->declBus(c+1002,"log2__Vstatic__m", false,-1, 31,0);
    tracep->declQuad(c+100,"rreq_data", false,-1, 63,0);
    tracep->declQuad(c+102,"rs2f_rreq_data", false,-1, 63,0);
    tracep->declBit(c+104,"rs2f_rreq_valid", false,-1);
    tracep->declBit(c+105,"rs2f_rreq_ack", false,-1);
    tracep->declQuad(c+106,"fifo_rreq_data", false,-1, 63,0);
    tracep->declBus(c+108,"tmp_addr", false,-1, 31,0);
    tracep->declBus(c+109,"tmp_len", false,-1, 31,0);
    tracep->declBus(c+110,"align_len", false,-1, 31,0);
    tracep->declBus(c+111,"arlen_tmp", false,-1, 7,0);
    tracep->declBus(c+112,"araddr_tmp", false,-1, 31,0);
    tracep->declBus(c+113,"start_addr", false,-1, 31,0);
    tracep->declBus(c+114,"start_addr_buf", false,-1, 31,0);
    tracep->declBus(c+115,"end_addr", false,-1, 31,0);
    tracep->declBus(c+116,"end_addr_buf", false,-1, 31,0);
    tracep->declBus(c+117,"sect_addr", false,-1, 31,0);
    tracep->declBus(c+118,"sect_addr_buf", false,-1, 31,0);
    tracep->declBus(c+119,"sect_end", false,-1, 1,0);
    tracep->declBus(c+120,"sect_end_buf", false,-1, 1,0);
    tracep->declBus(c+121,"burst_end", false,-1, 1,0);
    tracep->declBus(c+122,"start_to_4k", false,-1, 9,0);
    tracep->declBus(c+123,"sect_len", false,-1, 9,0);
    tracep->declBus(c+124,"sect_len_buf", false,-1, 9,0);
    tracep->declBus(c+125,"beat_len_buf", false,-1, 9,0);
    tracep->declBus(c+126,"sect_cnt", false,-1, 19,0);
    tracep->declBus(c+127,"ar2r_ardata", false,-1, 1,0);
    tracep->declBit(c+128,"fifo_rctl_r", false,-1);
    tracep->declBit(c+129,"zero_len_event", false,-1);
    tracep->declBit(c+130,"negative_len_event", false,-1);
    tracep->declBit(c+131,"invalid_len_event", false,-1);
    tracep->declBit(c+132,"invalid_len_event_reg1", false,-1);
    tracep->declBit(c+133,"invalid_len_event_reg2", false,-1);
    tracep->declBit(c+134,"fifo_rreq_valid", false,-1);
    tracep->declBit(c+135,"fifo_rreq_valid_buf", false,-1);
    tracep->declBit(c+136,"fifo_rreq_read", false,-1);
    tracep->declBit(c+128,"fifo_burst_w", false,-1);
    tracep->declBit(c+1003,"fifo_resp_w", false,-1);
    tracep->declBit(c+16,"ARVALID_Dummy", false,-1);
    tracep->declBit(c+137,"ready_for_sect", false,-1);
    tracep->declBit(c+136,"next_rreq", false,-1);
    tracep->declBit(c+138,"ready_for_rreq", false,-1);
    tracep->declBit(c+139,"rreq_handling", false,-1);
    tracep->declBit(c+140,"first_sect", false,-1);
    tracep->declBit(c+141,"last_sect", false,-1);
    tracep->declBit(c+142,"next_sect", false,-1);
    tracep->declQuad(c+143,"fifo_rresp_rdata", false,-1, 34,0);
    tracep->declQuad(c+145,"data_pack", false,-1, 34,0);
    tracep->declBus(c+147,"tmp_data", false,-1, 31,0);
    tracep->declQuad(c+148,"rs_rrsp_rdata", false,-1, 33,0);
    tracep->declQuad(c+150,"rdata_data_pack", false,-1, 33,0);
    tracep->declBus(c+1004,"len_cnt", false,-1, 7,0);
    tracep->declBus(c+152,"ar2r_rdata", false,-1, 1,0);
    tracep->declBus(c+153,"tmp_resp", false,-1, 1,0);
    tracep->declBus(c+154,"resp_buf", false,-1, 1,0);
    tracep->declBit(c+155,"tmp_last", false,-1);
    tracep->declBit(c+156,"tmp_last_2", false,-1);
    tracep->declBit(c+157,"need_rlast", false,-1);
    tracep->declBit(c+158,"fifo_rctl_ready", false,-1);
    tracep->declBit(c+159,"beat_valid", false,-1);
    tracep->declBit(c+160,"next_beat", false,-1);
    tracep->declBit(c+1005,"burst_valid", false,-1);
    tracep->declBit(c+996,"fifo_burst_ready", false,-1);
    tracep->declBit(c+1006,"next_burst", false,-1);
    tracep->declBit(c+161,"rdata_ack_t", false,-1);
    tracep->declBit(c+162,"rdata_valid_t", false,-1);
    tracep->pushNamePrefix("buff_rdata ");
    tracep->declQuad(c+1007,"MEM_STYLE", false,-1, 39,0);
    tracep->declBus(c+1009,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+953,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1010,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+996,"sclk_en", false,-1);
    tracep->declBit(c+23,"if_full_n", false,-1);
    tracep->declBit(c+996,"if_write_ce", false,-1);
    tracep->declBit(c+22,"if_write", false,-1);
    tracep->declQuad(c+143,"if_din", false,-1, 34,0);
    tracep->declBit(c+159,"if_empty_n", false,-1);
    tracep->declBit(c+996,"if_read_ce", false,-1);
    tracep->declBit(c+160,"if_read", false,-1);
    tracep->declQuad(c+145,"if_dout", false,-1, 34,0);
    tracep->declQuad(c+163,"q_buf", false,-1, 34,0);
    tracep->declBus(c+165,"waddr", false,-1, 7,0);
    tracep->declBus(c+166,"raddr", false,-1, 7,0);
    tracep->declBus(c+167,"wnext", false,-1, 7,0);
    tracep->declBus(c+168,"rnext", false,-1, 7,0);
    tracep->declBit(c+169,"push", false,-1);
    tracep->declBit(c+170,"pop", false,-1);
    tracep->declBus(c+171,"usedw", false,-1, 7,0);
    tracep->declBit(c+23,"full_n", false,-1);
    tracep->declBit(c+172,"empty_n", false,-1);
    tracep->declQuad(c+173,"q_tmp", false,-1, 34,0);
    tracep->declBit(c+175,"show_ahead", false,-1);
    tracep->declQuad(c+145,"dout_buf", false,-1, 34,0);
    tracep->declBit(c+159,"dout_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_equal_gen ");
    tracep->declBus(c+176,"data_buf", false,-1, 31,0);
    tracep->declBit(c+177,"ready_for_data", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("could_multi_bursts ");
    tracep->declBus(c+25,"araddr_buf", false,-1, 31,0);
    tracep->declBus(c+15,"arlen_buf", false,-1, 7,0);
    tracep->declBus(c+178,"loop_cnt", false,-1, 5,0);
    tracep->declBit(c+179,"sect_handling", false,-1);
    tracep->declBit(c+180,"last_loop", false,-1);
    tracep->declBit(c+128,"next_loop", false,-1);
    tracep->declBit(c+181,"ready_for_loop", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_rctl ");
    tracep->declBus(c+998,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+1011,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+952,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+945,"sclk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+996,"sclk_en", false,-1);
    tracep->declBit(c+157,"empty_n", false,-1);
    tracep->declBit(c+158,"full_n", false,-1);
    tracep->declBit(c+156,"rdreq", false,-1);
    tracep->declBit(c+128,"wrreq", false,-1);
    tracep->declBus(c+152,"q", false,-1, 1,0);
    tracep->declBus(c+127,"data", false,-1, 1,0);
    tracep->declBit(c+182,"push", false,-1);
    tracep->declBit(c+183,"pop", false,-1);
    tracep->declBit(c+184,"full_cond", false,-1);
    tracep->declBit(c+185,"data_vld", false,-1);
    tracep->declBus(c+186,"pout", false,-1, 3,0);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+187+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBus(c+202,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_rreq ");
    tracep->declBus(c+1012,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+995,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+988,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+945,"sclk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+996,"sclk_en", false,-1);
    tracep->declBit(c+134,"empty_n", false,-1);
    tracep->declBit(c+105,"full_n", false,-1);
    tracep->declBit(c+136,"rdreq", false,-1);
    tracep->declBit(c+104,"wrreq", false,-1);
    tracep->declQuad(c+106,"q", false,-1, 63,0);
    tracep->declQuad(c+102,"data", false,-1, 63,0);
    tracep->declBit(c+203,"push", false,-1);
    tracep->declBit(c+204,"pop", false,-1);
    tracep->declBit(c+205,"full_cond", false,-1);
    tracep->declBit(c+206,"data_vld", false,-1);
    tracep->declBus(c+207,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+208+i*2,"mem", true,(i+0), 63,0);
    }
    tracep->declBus(c+218,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_rdata ");
    tracep->declBus(c+1013,"N", false,-1, 31,0);
    tracep->declBit(c+945,"sclk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declQuad(c+148,"s_data", false,-1, 33,0);
    tracep->declBit(c+162,"s_valid", false,-1);
    tracep->declBit(c+161,"s_ready", false,-1);
    tracep->declQuad(c+150,"m_data", false,-1, 33,0);
    tracep->declBit(c+52,"m_valid", false,-1);
    tracep->declBit(c+53,"m_ready", false,-1);
    tracep->declBus(c+1014,"ZERO", false,-1, 1,0);
    tracep->declBus(c+1015,"ONE", false,-1, 1,0);
    tracep->declBus(c+957,"TWO", false,-1, 1,0);
    tracep->declQuad(c+150,"data_p1", false,-1, 33,0);
    tracep->declQuad(c+219,"data_p2", false,-1, 33,0);
    tracep->declBit(c+221,"load_p1", false,-1);
    tracep->declBit(c+222,"load_p2", false,-1);
    tracep->declBit(c+223,"load_p1_from_p2", false,-1);
    tracep->declBit(c+161,"s_ready_t", false,-1);
    tracep->declBus(c+224,"state", false,-1, 1,0);
    tracep->declBus(c+225,"next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_rreq ");
    tracep->declBus(c+1012,"N", false,-1, 31,0);
    tracep->declBit(c+945,"sclk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declQuad(c+100,"s_data", false,-1, 63,0);
    tracep->declBit(c+50,"s_valid", false,-1);
    tracep->declBit(c+51,"s_ready", false,-1);
    tracep->declQuad(c+102,"m_data", false,-1, 63,0);
    tracep->declBit(c+104,"m_valid", false,-1);
    tracep->declBit(c+105,"m_ready", false,-1);
    tracep->declBus(c+1014,"ZERO", false,-1, 1,0);
    tracep->declBus(c+1015,"ONE", false,-1, 1,0);
    tracep->declBus(c+957,"TWO", false,-1, 1,0);
    tracep->declQuad(c+102,"data_p1", false,-1, 63,0);
    tracep->declQuad(c+226,"data_p2", false,-1, 63,0);
    tracep->declBit(c+228,"load_p1", false,-1);
    tracep->declBit(c+229,"load_p2", false,-1);
    tracep->declBit(c+230,"load_p1_from_p2", false,-1);
    tracep->declBit(c+51,"s_ready_t", false,-1);
    tracep->declBus(c+231,"state", false,-1, 1,0);
    tracep->declBus(c+232,"next", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("bus_write ");
    tracep->declBus(c+951,"NUM_WRITE_OUTSTANDING", false,-1, 31,0);
    tracep->declBus(c+951,"MAX_WRITE_BURST_LENGTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+950,"C_M_AXI_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"C_TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+950,"C_M_AXI_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_AWUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_WUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+987,"C_M_AXI_BUSER_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"C_USER_VALUE", false,-1, 31,0);
    tracep->declBus(c+954,"C_PROT_VALUE", false,-1, 31,0);
    tracep->declBus(c+988,"C_CACHE_VALUE", false,-1, 31,0);
    tracep->declBus(c+950,"USER_DW", false,-1, 31,0);
    tracep->declBus(c+950,"USER_AW", false,-1, 31,0);
    tracep->declBus(c+995,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBit(c+945,"ACLK", false,-1);
    tracep->declBit(c+946,"ARESET", false,-1);
    tracep->declBit(c+996,"ACLK_EN", false,-1);
    tracep->declBus(c+989,"AWID", false,-1, 0,0);
    tracep->declBus(c+24,"AWADDR", false,-1, 31,0);
    tracep->declBus(c+3,"AWLEN", false,-1, 7,0);
    tracep->declBus(c+956,"AWSIZE", false,-1, 2,0);
    tracep->declBus(c+957,"AWBURST", false,-1, 1,0);
    tracep->declBus(c+961,"AWLOCK", false,-1, 1,0);
    tracep->declBus(c+959,"AWCACHE", false,-1, 3,0);
    tracep->declBus(c+960,"AWPROT", false,-1, 2,0);
    tracep->declBus(c+990,"AWQOS", false,-1, 3,0);
    tracep->declBus(c+990,"AWREGION", false,-1, 3,0);
    tracep->declBus(c+989,"AWUSER", false,-1, 0,0);
    tracep->declBit(c+98,"AWVALID", false,-1);
    tracep->declBit(c+99,"AWREADY", false,-1);
    tracep->declBus(c+989,"WID", false,-1, 0,0);
    tracep->declBus(c+6,"WDATA", false,-1, 31,0);
    tracep->declBus(c+7,"WSTRB", false,-1, 3,0);
    tracep->declBit(c+8,"WLAST", false,-1);
    tracep->declBus(c+989,"WUSER", false,-1, 0,0);
    tracep->declBit(c+9,"WVALID", false,-1);
    tracep->declBit(c+10,"WREADY", false,-1);
    tracep->declBus(c+27,"BID", false,-1, 0,0);
    tracep->declBus(c+961,"BRESP", false,-1, 1,0);
    tracep->declBus(c+992,"BUSER", false,-1, 0,0);
    tracep->declBit(c+12,"BVALID", false,-1);
    tracep->declBit(c+13,"BREADY", false,-1);
    tracep->declBit(c+45,"wreq_valid", false,-1);
    tracep->declBit(c+46,"wreq_ack", false,-1);
    tracep->declBus(c+47,"wreq_addr", false,-1, 31,0);
    tracep->declBus(c+987,"wreq_length", false,-1, 31,0);
    tracep->declBus(c+990,"wreq_cache", false,-1, 3,0);
    tracep->declBus(c+960,"wreq_prot", false,-1, 2,0);
    tracep->declBus(c+990,"wreq_qos", false,-1, 3,0);
    tracep->declBus(c+990,"wreq_region", false,-1, 3,0);
    tracep->declBus(c+958,"wreq_user", false,-1, 0,0);
    tracep->declBit(c+48,"wdata_valid", false,-1);
    tracep->declBit(c+49,"wdata_ack", false,-1);
    tracep->declBus(c+997,"wdata_strb", false,-1, 3,0);
    tracep->declBus(c+958,"wdata_user", false,-1, 0,0);
    tracep->declBus(c+66,"wdata_data", false,-1, 31,0);
    tracep->declBit(c+56,"wrsp_valid", false,-1);
    tracep->declBit(c+57,"wrsp_ack", false,-1);
    tracep->declBus(c+58,"wrsp", false,-1, 1,0);
    tracep->declBus(c+950,"USER_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+952,"USER_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+998,"USER_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+950,"BUS_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+952,"BUS_DATA_BYTES", false,-1, 31,0);
    tracep->declBus(c+998,"BUS_ADDR_ALIGN", false,-1, 31,0);
    tracep->declBus(c+952,"NUM_WRITE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"TARGET_ADDR", false,-1, 31,0);
    tracep->declBus(c+999,"BOUNDARY_BEATS", false,-1, 9,0);
    tracep->declBus(c+1016,"calc_data_width__Vstatic__y", false,-1, 31,0);
    tracep->declBus(c+1017,"log2__Vstatic__n", false,-1, 31,0);
    tracep->declBus(c+1018,"log2__Vstatic__m", false,-1, 31,0);
    tracep->declQuad(c+100,"wreq_data", false,-1, 63,0);
    tracep->declQuad(c+233,"rs2f_wreq_data", false,-1, 63,0);
    tracep->declBit(c+235,"rs2f_wreq_valid", false,-1);
    tracep->declBit(c+236,"rs2f_wreq_ack", false,-1);
    tracep->declQuad(c+237,"fifo_wreq_data", false,-1, 63,0);
    tracep->declBus(c+239,"tmp_addr", false,-1, 31,0);
    tracep->declBus(c+240,"tmp_len", false,-1, 31,0);
    tracep->declBus(c+241,"align_len", false,-1, 31,0);
    tracep->declBus(c+242,"awlen_tmp", false,-1, 7,0);
    tracep->declBus(c+243,"awaddr_tmp", false,-1, 31,0);
    tracep->declBus(c+244,"start_addr", false,-1, 31,0);
    tracep->declBus(c+245,"start_addr_buf", false,-1, 31,0);
    tracep->declBus(c+246,"end_addr", false,-1, 31,0);
    tracep->declBus(c+247,"end_addr_buf", false,-1, 31,0);
    tracep->declBus(c+248,"sect_addr", false,-1, 31,0);
    tracep->declBus(c+249,"sect_addr_buf", false,-1, 31,0);
    tracep->declBus(c+250,"sect_end", false,-1, 1,0);
    tracep->declBus(c+251,"sect_end_buf", false,-1, 1,0);
    tracep->declBus(c+252,"burst_end", false,-1, 1,0);
    tracep->declBus(c+253,"start_to_4k", false,-1, 9,0);
    tracep->declBus(c+254,"sect_len", false,-1, 9,0);
    tracep->declBus(c+255,"sect_len_buf", false,-1, 9,0);
    tracep->declBus(c+256,"beat_len_buf", false,-1, 9,0);
    tracep->declBus(c+257,"aw2b_awdata", false,-1, 1,0);
    tracep->declBus(c+258,"sect_cnt", false,-1, 19,0);
    tracep->declBit(c+259,"zero_len_event", false,-1);
    tracep->declBit(c+260,"negative_len_event", false,-1);
    tracep->declBit(c+261,"invalid_len_event", false,-1);
    tracep->declBit(c+262,"invalid_len_event_reg1", false,-1);
    tracep->declBit(c+263,"invalid_len_event_reg2", false,-1);
    tracep->declBit(c+264,"fifo_wreq_valid", false,-1);
    tracep->declBit(c+265,"fifo_wreq_valid_buf", false,-1);
    tracep->declBit(c+266,"fifo_wreq_read", false,-1);
    tracep->declBit(c+267,"fifo_burst_w", false,-1);
    tracep->declBit(c+268,"fifo_resp_w", false,-1);
    tracep->declBit(c+98,"AWVALID_Dummy", false,-1);
    tracep->declBit(c+269,"last_sect_buf", false,-1);
    tracep->declBit(c+270,"ready_for_sect", false,-1);
    tracep->declBit(c+266,"next_wreq", false,-1);
    tracep->declBit(c+271,"ready_for_wreq", false,-1);
    tracep->declBit(c+272,"wreq_handling", false,-1);
    tracep->declBit(c+273,"first_sect", false,-1);
    tracep->declBit(c+274,"last_sect", false,-1);
    tracep->declBit(c+275,"next_sect", false,-1);
    tracep->declQuad(c+276,"fifo_wdata_wstrb", false,-1, 35,0);
    tracep->declQuad(c+278,"data_pack", false,-1, 35,0);
    tracep->declBus(c+280,"tmp_data", false,-1, 31,0);
    tracep->declBus(c+281,"tmp_strb", false,-1, 3,0);
    tracep->declBus(c+282,"len_cnt", false,-1, 7,0);
    tracep->declBus(c+283,"burst_len", false,-1, 7,0);
    tracep->declBit(c+1019,"beat_valid", false,-1);
    tracep->declBit(c+284,"next_data", false,-1);
    tracep->declBit(c+285,"burst_valid", false,-1);
    tracep->declBit(c+286,"fifo_burst_ready", false,-1);
    tracep->declBit(c+287,"next_burst", false,-1);
    tracep->declBit(c+288,"data_valid", false,-1);
    tracep->declBit(c+9,"WVALID_Dummy", false,-1);
    tracep->declBit(c+8,"WLAST_Dummy", false,-1);
    tracep->declBus(c+289,"aw2b_bdata", false,-1, 1,0);
    tracep->declBus(c+290,"bresp_tmp", false,-1, 1,0);
    tracep->declBit(c+291,"next_resp", false,-1);
    tracep->declBit(c+292,"last_resp", false,-1);
    tracep->declBit(c+293,"invalid_event", false,-1);
    tracep->declBit(c+294,"fifo_resp_ready", false,-1);
    tracep->declBit(c+295,"need_wrsp", false,-1);
    tracep->declBit(c+296,"resp_match", false,-1);
    tracep->declBit(c+13,"resp_ready", false,-1);
    tracep->pushNamePrefix("buff_wdata ");
    tracep->declQuad(c+1007,"MEM_STYLE", false,-1, 39,0);
    tracep->declBus(c+1020,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+953,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1010,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+996,"sclk_en", false,-1);
    tracep->declBit(c+49,"if_full_n", false,-1);
    tracep->declBit(c+996,"if_write_ce", false,-1);
    tracep->declBit(c+48,"if_write", false,-1);
    tracep->declQuad(c+276,"if_din", false,-1, 35,0);
    tracep->declBit(c+288,"if_empty_n", false,-1);
    tracep->declBit(c+996,"if_read_ce", false,-1);
    tracep->declBit(c+284,"if_read", false,-1);
    tracep->declQuad(c+278,"if_dout", false,-1, 35,0);
    tracep->declQuad(c+297,"q_buf", false,-1, 35,0);
    tracep->declBus(c+299,"waddr", false,-1, 7,0);
    tracep->declBus(c+300,"raddr", false,-1, 7,0);
    tracep->declBus(c+301,"wnext", false,-1, 7,0);
    tracep->declBus(c+302,"rnext", false,-1, 7,0);
    tracep->declBit(c+303,"push", false,-1);
    tracep->declBit(c+304,"pop", false,-1);
    tracep->declBus(c+305,"usedw", false,-1, 7,0);
    tracep->declBit(c+49,"full_n", false,-1);
    tracep->declBit(c+306,"empty_n", false,-1);
    tracep->declQuad(c+307,"q_tmp", false,-1, 35,0);
    tracep->declBit(c+309,"show_ahead", false,-1);
    tracep->declQuad(c+278,"dout_buf", false,-1, 35,0);
    tracep->declBit(c+288,"dout_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bus_equal_gen ");
    tracep->declBus(c+6,"data_buf", false,-1, 31,0);
    tracep->declBus(c+7,"strb_buf", false,-1, 3,0);
    tracep->declBus(c+242,"tmp_burst_info", false,-1, 7,0);
    tracep->declBit(c+310,"ready_for_data", false,-1);
    tracep->pushNamePrefix("fifo_burst ");
    tracep->declBus(c+953,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+995,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+988,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+945,"sclk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+996,"sclk_en", false,-1);
    tracep->declBit(c+285,"empty_n", false,-1);
    tracep->declBit(c+286,"full_n", false,-1);
    tracep->declBit(c+287,"rdreq", false,-1);
    tracep->declBit(c+267,"wrreq", false,-1);
    tracep->declBus(c+283,"q", false,-1, 7,0);
    tracep->declBus(c+242,"data", false,-1, 7,0);
    tracep->declBit(c+311,"push", false,-1);
    tracep->declBit(c+312,"pop", false,-1);
    tracep->declBit(c+313,"full_cond", false,-1);
    tracep->declBit(c+314,"data_vld", false,-1);
    tracep->declBus(c+315,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+316+i*1,"mem", true,(i+0), 7,0);
    }
    tracep->declBus(c+321,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("could_multi_bursts ");
    tracep->declBus(c+24,"awaddr_buf", false,-1, 31,0);
    tracep->declBus(c+3,"awlen_buf", false,-1, 7,0);
    tracep->declBus(c+322,"loop_cnt", false,-1, 5,0);
    tracep->declBit(c+323,"sect_handling", false,-1);
    tracep->declBit(c+324,"last_loop", false,-1);
    tracep->declBit(c+268,"next_loop", false,-1);
    tracep->declBit(c+325,"ready_for_loop", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_resp ");
    tracep->declBus(c+998,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+1011,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+952,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+945,"sclk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+996,"sclk_en", false,-1);
    tracep->declBit(c+295,"empty_n", false,-1);
    tracep->declBit(c+294,"full_n", false,-1);
    tracep->declBit(c+291,"rdreq", false,-1);
    tracep->declBit(c+268,"wrreq", false,-1);
    tracep->declBus(c+289,"q", false,-1, 1,0);
    tracep->declBus(c+257,"data", false,-1, 1,0);
    tracep->declBit(c+326,"push", false,-1);
    tracep->declBit(c+327,"pop", false,-1);
    tracep->declBit(c+328,"full_cond", false,-1);
    tracep->declBit(c+329,"data_vld", false,-1);
    tracep->declBus(c+330,"pout", false,-1, 3,0);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+331+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBus(c+346,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_resp_to_user ");
    tracep->declBus(c+998,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+995,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+988,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+945,"sclk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+996,"sclk_en", false,-1);
    tracep->declBit(c+56,"empty_n", false,-1);
    tracep->declBit(c+13,"full_n", false,-1);
    tracep->declBit(c+57,"rdreq", false,-1);
    tracep->declBit(c+296,"wrreq", false,-1);
    tracep->declBus(c+58,"q", false,-1, 1,0);
    tracep->declBus(c+290,"data", false,-1, 1,0);
    tracep->declBit(c+347,"push", false,-1);
    tracep->declBit(c+348,"pop", false,-1);
    tracep->declBit(c+349,"full_cond", false,-1);
    tracep->declBit(c+350,"data_vld", false,-1);
    tracep->declBus(c+351,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+352+i*1,"mem", true,(i+0), 1,0);
    }
    tracep->declBus(c+357,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fifo_wreq ");
    tracep->declBus(c+1012,"DATA_BITS", false,-1, 31,0);
    tracep->declBus(c+995,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+988,"DEPTH_BITS", false,-1, 31,0);
    tracep->declBit(c+945,"sclk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+996,"sclk_en", false,-1);
    tracep->declBit(c+264,"empty_n", false,-1);
    tracep->declBit(c+236,"full_n", false,-1);
    tracep->declBit(c+266,"rdreq", false,-1);
    tracep->declBit(c+235,"wrreq", false,-1);
    tracep->declQuad(c+237,"q", false,-1, 63,0);
    tracep->declQuad(c+233,"data", false,-1, 63,0);
    tracep->declBit(c+358,"push", false,-1);
    tracep->declBit(c+359,"pop", false,-1);
    tracep->declBit(c+360,"full_cond", false,-1);
    tracep->declBit(c+361,"data_vld", false,-1);
    tracep->declBus(c+362,"pout", false,-1, 2,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+363+i*2,"mem", true,(i+0), 63,0);
    }
    tracep->declBus(c+373,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs_wreq ");
    tracep->declBus(c+1012,"N", false,-1, 31,0);
    tracep->declBit(c+945,"sclk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declQuad(c+100,"s_data", false,-1, 63,0);
    tracep->declBit(c+45,"s_valid", false,-1);
    tracep->declBit(c+46,"s_ready", false,-1);
    tracep->declQuad(c+233,"m_data", false,-1, 63,0);
    tracep->declBit(c+235,"m_valid", false,-1);
    tracep->declBit(c+236,"m_ready", false,-1);
    tracep->declBus(c+1014,"ZERO", false,-1, 1,0);
    tracep->declBus(c+1015,"ONE", false,-1, 1,0);
    tracep->declBus(c+957,"TWO", false,-1, 1,0);
    tracep->declQuad(c+233,"data_p1", false,-1, 63,0);
    tracep->declQuad(c+374,"data_p2", false,-1, 63,0);
    tracep->declBit(c+376,"load_p1", false,-1);
    tracep->declBit(c+377,"load_p2", false,-1);
    tracep->declBit(c+378,"load_p1_from_p2", false,-1);
    tracep->declBit(c+46,"s_ready_t", false,-1);
    tracep->declBus(c+379,"state", false,-1, 1,0);
    tracep->declBus(c+380,"next", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wreq_throttl ");
    tracep->declBus(c+954,"USED_FIX", false,-1, 31,0);
    tracep->declBus(c+952,"FIX_VALUE", false,-1, 31,0);
    tracep->declBus(c+950,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+950,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+951,"DEPTH", false,-1, 31,0);
    tracep->declBus(c+951,"USER_MAXREQS", false,-1, 31,0);
    tracep->declBus(c+954,"CONSERVATIVE", false,-1, 31,0);
    tracep->declBus(c+954,"AVERAGE_MODE", false,-1, 31,0);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+996,"ce", false,-1);
    tracep->declBus(c+24,"in_addr", false,-1, 31,0);
    tracep->declBus(c+3,"in_len", false,-1, 7,0);
    tracep->declBit(c+98,"in_req_valid", false,-1);
    tracep->declBit(c+99,"out_req_ready", false,-1);
    tracep->declBus(c+24,"out_addr", false,-1, 31,0);
    tracep->declBus(c+3,"out_len", false,-1, 7,0);
    tracep->declBit(c+4,"out_req_valid", false,-1);
    tracep->declBit(c+5,"in_req_ready", false,-1);
    tracep->declBus(c+6,"in_data", false,-1, 31,0);
    tracep->declBus(c+7,"in_strb", false,-1, 3,0);
    tracep->declBit(c+8,"in_last", false,-1);
    tracep->declBit(c+9,"in_data_valid", false,-1);
    tracep->declBit(c+10,"out_data_ready", false,-1);
    tracep->declBus(c+6,"out_data", false,-1, 31,0);
    tracep->declBus(c+7,"out_strb", false,-1, 3,0);
    tracep->declBit(c+8,"out_last", false,-1);
    tracep->declBit(c+9,"out_data_valid", false,-1);
    tracep->declBit(c+10,"in_data_ready", false,-1);
    tracep->declBus(c+1021,"log2__Vstatic__n", false,-1, 31,0);
    tracep->declBus(c+1022,"log2__Vstatic__m", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->declBus(c+954,"threshold", false,-1, 31,0);
    tracep->declBit(c+381,"req_en", false,-1);
    tracep->declBit(c+382,"handshake", false,-1);
    tracep->declBus(c+3,"load_init", false,-1, 7,0);
    tracep->declBus(c+383,"throttl_cnt", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("data_from_mem_V_U ");
    tracep->declBus(c+950,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+994,"AddressRange", false,-1, 31,0);
    tracep->declBus(c+993,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->declBus(c+80,"address0", false,-1, 9,0);
    tracep->declBit(c+81,"ce0", false,-1);
    tracep->declBit(c+82,"we0", false,-1);
    tracep->declBus(c+75,"d0", false,-1, 31,0);
    tracep->declBus(c+83,"q0", false,-1, 31,0);
    tracep->pushNamePrefix("axi4_tester_data_from_mem_V_ram_U ");
    tracep->declBus(c+950,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+993,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+994,"MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+80,"addr0", false,-1, 9,0);
    tracep->declBit(c+81,"ce0", false,-1);
    tracep->declBus(c+75,"d0", false,-1, 31,0);
    tracep->declBit(c+82,"we0", false,-1);
    tracep->declBus(c+83,"q0", false,-1, 31,0);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("test_data_V_U ");
    tracep->declBus(c+950,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+994,"AddressRange", false,-1, 31,0);
    tracep->declBus(c+993,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+946,"reset", false,-1);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->declBus(c+31,"address0", false,-1, 9,0);
    tracep->declBit(c+32,"ce0", false,-1);
    tracep->declBus(c+33,"q0", false,-1, 31,0);
    tracep->pushNamePrefix("axi4_tester_test_data_V_rom_U ");
    tracep->declBus(c+950,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+993,"AWIDTH", false,-1, 31,0);
    tracep->declBus(c+994,"MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+31,"addr0", false,-1, 9,0);
    tracep->declBit(c+32,"ce0", false,-1);
    tracep->declBus(c+33,"q0", false,-1, 31,0);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("axi_ram_inst ");
    tracep->declBus(c+950,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+951,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+952,"STRB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+953,"ID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+954,"PIPELINE_OUTPUT", false,-1, 31,0);
    tracep->declBit(c+945,"clk", false,-1);
    tracep->declBit(c+946,"rst", false,-1);
    tracep->declBus(c+955,"s_axi_awid", false,-1, 7,0);
    tracep->declBus(c+2,"s_axi_awaddr", false,-1, 15,0);
    tracep->declBus(c+3,"s_axi_awlen", false,-1, 7,0);
    tracep->declBus(c+956,"s_axi_awsize", false,-1, 2,0);
    tracep->declBus(c+957,"s_axi_awburst", false,-1, 1,0);
    tracep->declBit(c+958,"s_axi_awlock", false,-1);
    tracep->declBus(c+959,"s_axi_awcache", false,-1, 3,0);
    tracep->declBus(c+960,"s_axi_awprot", false,-1, 2,0);
    tracep->declBit(c+4,"s_axi_awvalid", false,-1);
    tracep->declBit(c+5,"s_axi_awready", false,-1);
    tracep->declBus(c+6,"s_axi_wdata", false,-1, 31,0);
    tracep->declBus(c+7,"s_axi_wstrb", false,-1, 3,0);
    tracep->declBit(c+8,"s_axi_wlast", false,-1);
    tracep->declBit(c+9,"s_axi_wvalid", false,-1);
    tracep->declBit(c+10,"s_axi_wready", false,-1);
    tracep->declBus(c+11,"s_axi_bid", false,-1, 7,0);
    tracep->declBus(c+961,"s_axi_bresp", false,-1, 1,0);
    tracep->declBit(c+12,"s_axi_bvalid", false,-1);
    tracep->declBit(c+13,"s_axi_bready", false,-1);
    tracep->declBus(c+962,"s_axi_arid", false,-1, 7,0);
    tracep->declBus(c+14,"s_axi_araddr", false,-1, 15,0);
    tracep->declBus(c+15,"s_axi_arlen", false,-1, 7,0);
    tracep->declBus(c+956,"s_axi_arsize", false,-1, 2,0);
    tracep->declBus(c+957,"s_axi_arburst", false,-1, 1,0);
    tracep->declBit(c+958,"s_axi_arlock", false,-1);
    tracep->declBus(c+959,"s_axi_arcache", false,-1, 3,0);
    tracep->declBus(c+960,"s_axi_arprot", false,-1, 2,0);
    tracep->declBit(c+16,"s_axi_arvalid", false,-1);
    tracep->declBit(c+17,"s_axi_arready", false,-1);
    tracep->declBus(c+18,"s_axi_rid", false,-1, 7,0);
    tracep->declBus(c+19,"s_axi_rdata", false,-1, 31,0);
    tracep->declBus(c+20,"s_axi_rresp", false,-1, 1,0);
    tracep->declBit(c+21,"s_axi_rlast", false,-1);
    tracep->declBit(c+22,"s_axi_rvalid", false,-1);
    tracep->declBit(c+23,"s_axi_rready", false,-1);
    tracep->declBus(c+1023,"VALID_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+952,"WORD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+953,"WORD_SIZE", false,-1, 31,0);
    tracep->declBus(c+989,"READ_STATE_IDLE", false,-1, 0,0);
    tracep->declBus(c+1024,"READ_STATE_RDATA", false,-1, 0,0);
    tracep->declBus(c+384,"read_state_reg", false,-1, 0,0);
    tracep->declBus(c+385,"read_state_next", false,-1, 0,0);
    tracep->declBus(c+961,"WRITE_STATE_IDLE", false,-1, 1,0);
    tracep->declBus(c+957,"WRITE_STATE_WDATA", false,-1, 1,0);
    tracep->declBus(c+1014,"WRITE_STATE_RESP", false,-1, 1,0);
    tracep->declBus(c+386,"write_state_reg", false,-1, 1,0);
    tracep->declBus(c+387,"write_state_next", false,-1, 1,0);
    tracep->declBit(c+388,"mem_wr_en", false,-1);
    tracep->declBit(c+389,"mem_rd_en", false,-1);
    tracep->declBus(c+390,"read_id_reg", false,-1, 7,0);
    tracep->declBus(c+391,"read_id_next", false,-1, 7,0);
    tracep->declBus(c+392,"read_addr_reg", false,-1, 15,0);
    tracep->declBus(c+393,"read_addr_next", false,-1, 15,0);
    tracep->declBus(c+394,"read_count_reg", false,-1, 7,0);
    tracep->declBus(c+395,"read_count_next", false,-1, 7,0);
    tracep->declBus(c+396,"read_size_reg", false,-1, 2,0);
    tracep->declBus(c+397,"read_size_next", false,-1, 2,0);
    tracep->declBus(c+398,"read_burst_reg", false,-1, 1,0);
    tracep->declBus(c+399,"read_burst_next", false,-1, 1,0);
    tracep->declBus(c+400,"write_id_reg", false,-1, 7,0);
    tracep->declBus(c+401,"write_id_next", false,-1, 7,0);
    tracep->declBus(c+402,"write_addr_reg", false,-1, 15,0);
    tracep->declBus(c+403,"write_addr_next", false,-1, 15,0);
    tracep->declBus(c+404,"write_count_reg", false,-1, 7,0);
    tracep->declBus(c+405,"write_count_next", false,-1, 7,0);
    tracep->declBus(c+406,"write_size_reg", false,-1, 2,0);
    tracep->declBus(c+407,"write_size_next", false,-1, 2,0);
    tracep->declBus(c+408,"write_burst_reg", false,-1, 1,0);
    tracep->declBus(c+409,"write_burst_next", false,-1, 1,0);
    tracep->declBus(c+410,"write_wrap_mask_reg", false,-1, 15,0);
    tracep->declBus(c+411,"write_wrap_mask_next", false,-1, 15,0);
    tracep->declBus(c+412,"read_wrap_mask_reg", false,-1, 15,0);
    tracep->declBus(c+413,"read_wrap_mask_next", false,-1, 15,0);
    tracep->declBus(c+414,"next_addr__Vstatic__incr", false,-1, 15,0);
    tracep->declBit(c+5,"s_axi_awready_reg", false,-1);
    tracep->declBit(c+415,"s_axi_awready_next", false,-1);
    tracep->declBit(c+10,"s_axi_wready_reg", false,-1);
    tracep->declBit(c+416,"s_axi_wready_next", false,-1);
    tracep->declBus(c+11,"s_axi_bid_reg", false,-1, 7,0);
    tracep->declBus(c+417,"s_axi_bid_next", false,-1, 7,0);
    tracep->declBit(c+12,"s_axi_bvalid_reg", false,-1);
    tracep->declBit(c+418,"s_axi_bvalid_next", false,-1);
    tracep->declBit(c+17,"s_axi_arready_reg", false,-1);
    tracep->declBit(c+419,"s_axi_arready_next", false,-1);
    tracep->declBus(c+18,"s_axi_rid_reg", false,-1, 7,0);
    tracep->declBus(c+420,"s_axi_rid_next", false,-1, 7,0);
    tracep->declBus(c+19,"s_axi_rdata_reg", false,-1, 31,0);
    tracep->declBus(c+1025,"s_axi_rdata_next", false,-1, 31,0);
    tracep->declBit(c+21,"s_axi_rlast_reg", false,-1);
    tracep->declBit(c+421,"s_axi_rlast_next", false,-1);
    tracep->declBit(c+22,"s_axi_rvalid_reg", false,-1);
    tracep->declBit(c+422,"s_axi_rvalid_next", false,-1);
    tracep->declBus(c+423,"s_axi_rid_pipe_reg", false,-1, 7,0);
    tracep->declBus(c+424,"s_axi_rdata_pipe_reg", false,-1, 31,0);
    tracep->declBit(c+425,"s_axi_rlast_pipe_reg", false,-1);
    tracep->declBit(c+426,"s_axi_rvalid_pipe_reg", false,-1);
    tracep->declArray(c+427,"mem_written", false,-1, 16383,0);
    tracep->declBus(c+20,"s_axi_rresp_reg", false,-1, 1,0);
    tracep->declBus(c+939,"s_axi_rresp_pipe_reg", false,-1, 1,0);
    tracep->declBus(c+940,"s_axi_awaddr_valid", false,-1, 13,0);
    tracep->declBus(c+941,"s_axi_araddr_valid", false,-1, 13,0);
    tracep->declBus(c+942,"read_addr_valid", false,-1, 13,0);
    tracep->declBus(c+943,"write_addr_valid", false,-1, 13,0);
    tracep->declBus(c+944,"i", false,-1, 31,0);
    tracep->declBus(c+1,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_init_top(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_init_top\n"); );
    // Body
    Vtb_axi4_ram___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("tb_axi4_ram ");
    Vtb_axi4_ram___024root__trace_init_sub__TOP__tb_axi4_ram__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_ram___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_ram___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_register(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_axi4_ram___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_axi4_ram___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_axi4_ram___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_full_sub_0(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_full_top_0\n"); );
    // Init
    Vtb_axi4_ram___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram___024root*>(voidSelf);
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_axi4_ram___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi4_ram___024root__trace_full_sub_0(Vtb_axi4_ram___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__j),32);
    bufp->fullSData(oldp+2,((0xffffU & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf)),16);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf),8);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__tb_axi4_ram.__PVT__s_axi_awvalid));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_awready_reg));
    bufp->fullIData(oldp+6,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__data_buf),32);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__strb_buf),4);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_wready_reg));
    bufp->fullCData(oldp+11,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bid_reg),8);
    bufp->fullBit(oldp+12,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready));
    bufp->fullSData(oldp+14,((0xffffU & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf)),16);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf),8);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_arready_reg));
    bufp->fullCData(oldp+18,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rid_reg),8);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg),32);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rresp_reg),2);
    bufp->fullBit(oldp+21,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n));
    bufp->fullIData(oldp+24,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf),32);
    bufp->fullBit(oldp+26,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rid_reg))));
    bufp->fullBit(oldp+27,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bid_reg))));
    bufp->fullSData(oldp+28,((0x3ffU & ((0x400U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                         ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177)
                                         : ((2U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                             ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166)
                                             : (IData)(vlSymsp->TOP__tb_axi4_ram.axi4_tester_inst__DOT____Vxrand_h9c264d1d__0))))),10);
    bufp->fullBit(oldp+29,((IData)((0U != (0x402U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)))));
    bufp->fullSData(oldp+30,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__addr_q0),10);
    bufp->fullSData(oldp+31,((0x3ffU & ((0x200000U 
                                         & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                         ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)
                                         : ((2U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                             ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166)
                                             : (IData)(vlSymsp->TOP__tb_axi4_ram.axi4_tester_inst__DOT____Vxrand_h9c264d1d__2))))),10);
    bufp->fullBit(oldp+32,((IData)((0U != (0x200002U 
                                           & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)))));
    bufp->fullIData(oldp+33,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__test_data_V_q0),32);
    bufp->fullBit(oldp+34,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 3U)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_awready_reg)))));
    bufp->fullIData(oldp+35,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm),24);
    bufp->fullBit(oldp+36,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 3U))));
    bufp->fullBit(oldp+37,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 4U)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_wready_reg)))));
    bufp->fullBit(oldp+38,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 4U))));
    bufp->fullBit(oldp+39,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 9U)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bvalid_reg)))));
    bufp->fullBit(oldp+40,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 9U))));
    bufp->fullBit(oldp+41,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 0xcU)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)))));
    bufp->fullBit(oldp+42,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xcU))));
    bufp->fullBit(oldp+43,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 0x13U)) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg)))));
    bufp->fullBit(oldp+44,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x13U))));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t));
    bufp->fullIData(oldp+47,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__reg_213),32);
    bufp->fullBit(oldp+48,(((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                             >> 4U) & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n))));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t));
    bufp->fullBit(oldp+52,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY));
    bufp->fullIData(oldp+54,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1)),32);
    bufp->fullCData(oldp+55,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 
                                            >> 0x20U)))),2);
    bufp->fullBit(oldp+56,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY));
    bufp->fullCData(oldp+58,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_BRESP),2);
    bufp->fullSData(oldp+59,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__reg_213),10);
    bufp->fullBit(oldp+60,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 2U))));
    bufp->fullBit(oldp+61,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xbU))));
    bufp->fullSData(oldp+62,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166)))),11);
    bufp->fullSData(oldp+63,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_reg_301),11);
    bufp->fullBit(oldp+64,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 1U))));
    bufp->fullBit(oldp+65,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166))));
    bufp->fullIData(oldp+66,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_316),32);
    bufp->fullSData(oldp+67,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177)))),11);
    bufp->fullSData(oldp+68,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_1_reg_330),11);
    bufp->fullBit(oldp+69,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xaU))));
    bufp->fullQData(oldp+70,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177))),64);
    bufp->fullQData(oldp+72,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__zext_ln22_reg_335),64);
    bufp->fullBit(oldp+74,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177))));
    bufp->fullIData(oldp+75,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_addr_1_1_reg_351),32);
    bufp->fullSData(oldp+76,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)))),11);
    bufp->fullSData(oldp+77,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_2_reg_359),11);
    bufp->fullBit(oldp+78,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x15U))));
    bufp->fullBit(oldp+79,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188))));
    bufp->fullSData(oldp+80,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_from_mem_V_address0),10);
    bufp->fullBit(oldp+81,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_from_mem_V_ce0));
    bufp->fullBit(oldp+82,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x14U))));
    bufp->fullIData(oldp+83,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0),32);
    bufp->fullSData(oldp+84,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166),11);
    bufp->fullBit(oldp+85,((1U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)));
    bufp->fullSData(oldp+86,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i1_0_reg_177),11);
    bufp->fullSData(oldp+87,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188),11);
    bufp->fullBit(oldp+88,((1U & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x16U))));
    bufp->fullBit(oldp+89,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__storemerge_reg_199));
    bufp->fullQData(oldp+91,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i_0_reg_166))),64);
    bufp->fullQData(oldp+93,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__i2_0_reg_188))),64);
    bufp->fullQData(oldp+95,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__reg_213))),64);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__ap_NS_fsm),24);
    bufp->fullBit(oldp+98,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy));
    bufp->fullQData(oldp+100,((0x100000000ULL | (QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__reg_213)))),64);
    bufp->fullQData(oldp+102,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p1),64);
    bufp->fullBit(oldp+104,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    bufp->fullBit(oldp+105,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack));
    bufp->fullQData(oldp+106,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data),64);
    bufp->fullIData(oldp+108,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data)),32);
    bufp->fullIData(oldp+109,((IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len),32);
    bufp->fullCData(oldp+111,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                ? (0xfU & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf))
                                : 0xfU)),8);
    bufp->fullIData(oldp+112,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt))
                                ? vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                   + (((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf)) 
                                      << 2U)))),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf),32);
    bufp->fullIData(oldp+115,((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len 
                               + vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr)),32);
    bufp->fullIData(oldp+116,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf),32);
    bufp->fullIData(oldp+117,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)
                                ? vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
                                   << 0xcU))),32);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf),32);
    bufp->fullCData(oldp+119,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)
                                ? (3U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf)
                                : 3U)),2);
    bufp->fullCData(oldp+120,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf),2);
    bufp->fullCData(oldp+121,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf)
                                : 3U)),2);
    bufp->fullSData(oldp+122,((0x3ffU & ((IData)(0x3ffU) 
                                         - (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                            >> 2U)))),10);
    bufp->fullSData(oldp+123,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                          ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf)
                                          : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)) 
                                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect))
                                              ? ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                                  >> 2U))
                                              : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
    bufp->fullSData(oldp+124,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf),10);
    bufp->fullSData(oldp+125,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf),10);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt),20);
    bufp->fullCData(oldp+127,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                               << 1U)),2);
    bufp->fullBit(oldp+128,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r));
    bufp->fullBit(oldp+129,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                             & (0U == (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+130,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                             & (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                        >> 0x3fU)))));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event));
    bufp->fullBit(oldp+132,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg1));
    bufp->fullBit(oldp+133,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg2));
    bufp->fullBit(oldp+134,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read));
    bufp->fullBit(oldp+137,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r))) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling))))));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect));
    bufp->fullQData(oldp+143,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rresp_rdata),35);
    bufp->fullQData(oldp+145,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf),35);
    bufp->fullIData(oldp+147,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf)),32);
    bufp->fullQData(oldp+148,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rrsp_rdata),34);
    bufp->fullQData(oldp+150,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1),34);
    bufp->fullCData(oldp+152,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ar2r_rdata),2);
    bufp->fullCData(oldp+153,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                             >> 0x20U)))),2);
    bufp->fullCData(oldp+154,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf),2);
    bufp->fullBit(oldp+155,(((IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                      >> 0x22U)) & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid))));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2));
    bufp->fullBit(oldp+157,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast));
    bufp->fullBit(oldp+158,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid));
    bufp->fullBit(oldp+160,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t));
    bufp->fullBit(oldp+162,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t));
    bufp->fullQData(oldp+163,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf),35);
    bufp->fullCData(oldp+165,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr),8);
    bufp->fullCData(oldp+166,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr),8);
    bufp->fullCData(oldp+167,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push)
                                         ? ((0xffU 
                                             == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr))
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))
                                         : (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))),8);
    bufp->fullCData(oldp+168,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext),8);
    bufp->fullBit(oldp+169,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop));
    bufp->fullCData(oldp+171,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw),8);
    bufp->fullBit(oldp+172,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n));
    bufp->fullQData(oldp+173,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp),35);
    bufp->fullBit(oldp+175,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead));
    bufp->fullIData(oldp+176,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf),32);
    bufp->fullBit(oldp+177,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data));
    bufp->fullCData(oldp+178,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt),6);
    bufp->fullBit(oldp+179,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop));
    bufp->fullBit(oldp+181,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready))));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop));
    bufp->fullBit(oldp+184,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop)) 
                                & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld))))));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld));
    bufp->fullCData(oldp+186,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout),4);
    bufp->fullCData(oldp+187,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[0]),2);
    bufp->fullCData(oldp+188,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[1]),2);
    bufp->fullCData(oldp+189,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[2]),2);
    bufp->fullCData(oldp+190,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[3]),2);
    bufp->fullCData(oldp+191,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[4]),2);
    bufp->fullCData(oldp+192,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[5]),2);
    bufp->fullCData(oldp+193,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[6]),2);
    bufp->fullCData(oldp+194,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[7]),2);
    bufp->fullCData(oldp+195,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[8]),2);
    bufp->fullCData(oldp+196,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[9]),2);
    bufp->fullCData(oldp+197,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[10]),2);
    bufp->fullCData(oldp+198,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[11]),2);
    bufp->fullCData(oldp+199,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[12]),2);
    bufp->fullCData(oldp+200,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[13]),2);
    bufp->fullCData(oldp+201,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[14]),2);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__i),32);
    bufp->fullBit(oldp+203,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push));
    bufp->fullBit(oldp+204,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop));
    bufp->fullBit(oldp+205,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld))))));
    bufp->fullBit(oldp+206,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld));
    bufp->fullCData(oldp+207,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout),3);
    bufp->fullQData(oldp+208,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[0]),64);
    bufp->fullQData(oldp+210,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[1]),64);
    bufp->fullQData(oldp+212,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[2]),64);
    bufp->fullQData(oldp+214,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[3]),64);
    bufp->fullQData(oldp+216,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[4]),64);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__i),32);
    bufp->fullQData(oldp+219,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2),34);
    bufp->fullBit(oldp+221,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY))))));
    bufp->fullBit(oldp+222,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t))));
    bufp->fullBit(oldp+223,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    bufp->fullCData(oldp+224,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state),2);
    bufp->fullCData(oldp+225,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next),2);
    bufp->fullQData(oldp+226,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p2),64);
    bufp->fullBit(oldp+228,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack))))));
    bufp->fullBit(oldp+229,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))));
    bufp->fullBit(oldp+230,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    bufp->fullCData(oldp+231,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state),2);
    bufp->fullCData(oldp+232,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next),2);
    bufp->fullQData(oldp+233,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p1),64);
    bufp->fullBit(oldp+235,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack));
    bufp->fullQData(oldp+237,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data),64);
    bufp->fullIData(oldp+239,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data)),32);
    bufp->fullIData(oldp+240,((IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len),32);
    bufp->fullCData(oldp+242,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awlen_tmp),8);
    bufp->fullIData(oldp+243,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt))
                                ? vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                   + (((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf)) 
                                      << 2U)))),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf),32);
    bufp->fullIData(oldp+246,((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len 
                               + vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr)),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf),32);
    bufp->fullIData(oldp+248,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)
                                ? vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
                                   << 0xcU))),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf),32);
    bufp->fullCData(oldp+250,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)
                                ? (3U & vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf)
                                : 3U)),2);
    bufp->fullCData(oldp+251,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf),2);
    bufp->fullCData(oldp+252,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop)
                                ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf)
                                : 3U)),2);
    bufp->fullSData(oldp+253,((0x3ffU & ((IData)(0x3ffU) 
                                         - (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                            >> 2U)))),10);
    bufp->fullSData(oldp+254,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                          ? (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf)
                                          : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)) 
                                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect))
                                              ? ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                                  >> 2U))
                                              : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
    bufp->fullSData(oldp+255,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf),10);
    bufp->fullSData(oldp+256,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf),10);
    bufp->fullCData(oldp+257,(((((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf)) 
                                << 1U) | (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2))),2);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt),20);
    bufp->fullBit(oldp+259,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg1));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid));
    bufp->fullBit(oldp+265,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read));
    bufp->fullBit(oldp+267,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2)) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))));
    bufp->fullBit(oldp+268,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w));
    bufp->fullBit(oldp+269,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf));
    bufp->fullBit(oldp+270,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling))))));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq));
    bufp->fullBit(oldp+272,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling));
    bufp->fullBit(oldp+273,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect));
    bufp->fullQData(oldp+276,((0xf00000000ULL | (QData)((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_316)))),36);
    bufp->fullQData(oldp+278,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf),36);
    bufp->fullIData(oldp+280,((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf)),32);
    bufp->fullCData(oldp+281,((0xfU & (IData)((vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+282,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt),8);
    bufp->fullCData(oldp+283,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len),8);
    bufp->fullBit(oldp+284,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid));
    bufp->fullBit(oldp+286,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready));
    bufp->fullBit(oldp+287,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst));
    bufp->fullBit(oldp+288,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid));
    bufp->fullCData(oldp+289,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata),2);
    bufp->fullCData(oldp+290,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bresp_tmp),2);
    bufp->fullBit(oldp+291,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp));
    bufp->fullBit(oldp+292,((1U & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata) 
                                   >> 1U))));
    bufp->fullBit(oldp+293,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata))));
    bufp->fullBit(oldp+294,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready));
    bufp->fullBit(oldp+295,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp));
    bufp->fullBit(oldp+296,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match));
    bufp->fullQData(oldp+297,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf),36);
    bufp->fullCData(oldp+299,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr),8);
    bufp->fullCData(oldp+300,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr),8);
    bufp->fullCData(oldp+301,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push)
                                         ? ((0xffU 
                                             == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr))
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))
                                         : (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))),8);
    bufp->fullCData(oldp+302,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext),8);
    bufp->fullBit(oldp+303,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push));
    bufp->fullBit(oldp+304,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop));
    bufp->fullCData(oldp+305,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw),8);
    bufp->fullBit(oldp+306,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n));
    bufp->fullQData(oldp+307,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp),36);
    bufp->fullBit(oldp+309,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead));
    bufp->fullBit(oldp+310,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data));
    bufp->fullBit(oldp+311,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push));
    bufp->fullBit(oldp+312,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop));
    bufp->fullBit(oldp+313,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld))))));
    bufp->fullBit(oldp+314,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld));
    bufp->fullCData(oldp+315,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout),3);
    bufp->fullCData(oldp+316,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[0]),8);
    bufp->fullCData(oldp+317,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[1]),8);
    bufp->fullCData(oldp+318,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[2]),8);
    bufp->fullCData(oldp+319,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[3]),8);
    bufp->fullCData(oldp+320,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[4]),8);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__i),32);
    bufp->fullCData(oldp+322,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt),6);
    bufp->fullBit(oldp+323,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling));
    bufp->fullBit(oldp+324,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop));
    bufp->fullBit(oldp+325,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy))) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready)))));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push));
    bufp->fullBit(oldp+327,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop));
    bufp->fullBit(oldp+328,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop)) 
                                & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld))))));
    bufp->fullBit(oldp+329,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld));
    bufp->fullCData(oldp+330,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout),4);
    bufp->fullCData(oldp+331,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[0]),2);
    bufp->fullCData(oldp+332,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[1]),2);
    bufp->fullCData(oldp+333,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[2]),2);
    bufp->fullCData(oldp+334,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[3]),2);
    bufp->fullCData(oldp+335,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[4]),2);
    bufp->fullCData(oldp+336,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[5]),2);
    bufp->fullCData(oldp+337,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[6]),2);
    bufp->fullCData(oldp+338,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[7]),2);
    bufp->fullCData(oldp+339,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[8]),2);
    bufp->fullCData(oldp+340,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[9]),2);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[10]),2);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[11]),2);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[12]),2);
    bufp->fullCData(oldp+344,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[13]),2);
    bufp->fullCData(oldp+345,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[14]),2);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__i),32);
    bufp->fullBit(oldp+347,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push));
    bufp->fullBit(oldp+348,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop));
    bufp->fullBit(oldp+349,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld))))));
    bufp->fullBit(oldp+350,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld));
    bufp->fullCData(oldp+351,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout),3);
    bufp->fullCData(oldp+352,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[0]),2);
    bufp->fullCData(oldp+353,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[1]),2);
    bufp->fullCData(oldp+354,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[2]),2);
    bufp->fullCData(oldp+355,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[3]),2);
    bufp->fullCData(oldp+356,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[4]),2);
    bufp->fullIData(oldp+357,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__i),32);
    bufp->fullBit(oldp+358,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push));
    bufp->fullBit(oldp+359,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop));
    bufp->fullBit(oldp+360,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push) 
                             & ((~ (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop)) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld))))));
    bufp->fullBit(oldp+361,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld));
    bufp->fullCData(oldp+362,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout),3);
    bufp->fullQData(oldp+363,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[0]),64);
    bufp->fullQData(oldp+365,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[1]),64);
    bufp->fullQData(oldp+367,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[2]),64);
    bufp->fullQData(oldp+369,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[3]),64);
    bufp->fullQData(oldp+371,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[4]),64);
    bufp->fullIData(oldp+373,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__i),32);
    bufp->fullQData(oldp+374,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p2),64);
    bufp->fullBit(oldp+376,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack))))));
    bufp->fullBit(oldp+377,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))));
    bufp->fullBit(oldp+378,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    bufp->fullCData(oldp+379,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state),2);
    bufp->fullCData(oldp+380,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next),2);
    bufp->fullBit(oldp+381,((0U == (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt))));
    bufp->fullBit(oldp+382,(((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_wready_reg))));
    bufp->fullCData(oldp+383,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt),8);
    bufp->fullBit(oldp+384,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_state_reg));
    bufp->fullBit(oldp+385,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_state_next));
    bufp->fullCData(oldp+386,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_state_reg),2);
    bufp->fullCData(oldp+387,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_state_next),2);
    bufp->fullBit(oldp+388,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__mem_wr_en));
    bufp->fullBit(oldp+389,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__mem_rd_en));
    bufp->fullCData(oldp+390,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_id_reg),8);
    bufp->fullCData(oldp+391,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_id_next),8);
    bufp->fullSData(oldp+392,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_addr_reg),16);
    bufp->fullSData(oldp+393,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_addr_next),16);
    bufp->fullCData(oldp+394,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_count_reg),8);
    bufp->fullCData(oldp+395,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_count_next),8);
    bufp->fullCData(oldp+396,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_size_reg),3);
    bufp->fullCData(oldp+397,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_size_next),3);
    bufp->fullCData(oldp+398,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_burst_reg),2);
    bufp->fullCData(oldp+399,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_burst_next),2);
    bufp->fullCData(oldp+400,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_id_reg),8);
    bufp->fullCData(oldp+401,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_id_next),8);
    bufp->fullSData(oldp+402,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_addr_reg),16);
    bufp->fullSData(oldp+403,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_addr_next),16);
    bufp->fullCData(oldp+404,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_count_reg),8);
    bufp->fullCData(oldp+405,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_count_next),8);
    bufp->fullCData(oldp+406,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_size_reg),3);
    bufp->fullCData(oldp+407,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_size_next),3);
    bufp->fullCData(oldp+408,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_burst_reg),2);
    bufp->fullCData(oldp+409,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_burst_next),2);
    bufp->fullSData(oldp+410,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_wrap_mask_reg),16);
    bufp->fullSData(oldp+411,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_wrap_mask_next),16);
    bufp->fullSData(oldp+412,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_wrap_mask_reg),16);
    bufp->fullSData(oldp+413,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_wrap_mask_next),16);
    bufp->fullSData(oldp+414,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__next_addr__Vstatic__incr),16);
    bufp->fullBit(oldp+415,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_awready_next));
    bufp->fullBit(oldp+416,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_wready_next));
    bufp->fullCData(oldp+417,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bid_next),8);
    bufp->fullBit(oldp+418,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_bvalid_next));
    bufp->fullBit(oldp+419,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_arready_next));
    bufp->fullCData(oldp+420,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rid_next),8);
    bufp->fullBit(oldp+421,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rlast_next));
    bufp->fullBit(oldp+422,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next));
    bufp->fullCData(oldp+423,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg),8);
    bufp->fullIData(oldp+424,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg),32);
    bufp->fullBit(oldp+425,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg));
    bufp->fullBit(oldp+426,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg));
    bufp->fullWData(oldp+427,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__mem_written),16384);
    bufp->fullCData(oldp+939,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rresp_pipe_reg),2);
    bufp->fullSData(oldp+940,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                          >> 2U))),14);
    bufp->fullSData(oldp+941,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                          >> 2U))),14);
    bufp->fullSData(oldp+942,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__read_addr_reg) 
                                          >> 2U))),14);
    bufp->fullSData(oldp+943,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__write_addr_reg) 
                                          >> 2U))),14);
    bufp->fullIData(oldp+944,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__i),32);
    bufp->fullBit(oldp+945,(vlSelf->clk));
    bufp->fullBit(oldp+946,(vlSelf->reset));
    bufp->fullBit(oldp+947,(vlSymsp->TOP__tb_axi4_ram.correct_V));
    bufp->fullBit(oldp+948,(vlSymsp->TOP__tb_axi4_ram.correct_V_ap_vld));
    bufp->fullBit(oldp+949,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullIData(oldp+950,(0x20U),32);
    bufp->fullIData(oldp+951,(0x10U),32);
    bufp->fullIData(oldp+952,(4U),32);
    bufp->fullIData(oldp+953,(8U),32);
    bufp->fullIData(oldp+954,(0U),32);
    bufp->fullCData(oldp+955,(vlSymsp->TOP__tb_axi4_ram.__PVT__s_axi_awid),8);
    bufp->fullCData(oldp+956,(2U),3);
    bufp->fullCData(oldp+957,(1U),2);
    bufp->fullBit(oldp+958,(0U));
    bufp->fullCData(oldp+959,(3U),4);
    bufp->fullCData(oldp+960,(0U),3);
    bufp->fullCData(oldp+961,(0U),2);
    bufp->fullCData(oldp+962,(vlSymsp->TOP__tb_axi4_ram.__PVT__s_axi_arid),8);
    bufp->fullIData(oldp+963,(1U),24);
    bufp->fullIData(oldp+964,(2U),24);
    bufp->fullIData(oldp+965,(4U),24);
    bufp->fullIData(oldp+966,(8U),24);
    bufp->fullIData(oldp+967,(0x10U),24);
    bufp->fullIData(oldp+968,(0x20U),24);
    bufp->fullIData(oldp+969,(0x40U),24);
    bufp->fullIData(oldp+970,(0x80U),24);
    bufp->fullIData(oldp+971,(0x100U),24);
    bufp->fullIData(oldp+972,(0x200U),24);
    bufp->fullIData(oldp+973,(0x400U),24);
    bufp->fullIData(oldp+974,(0x800U),24);
    bufp->fullIData(oldp+975,(0x1000U),24);
    bufp->fullIData(oldp+976,(0x2000U),24);
    bufp->fullIData(oldp+977,(0x4000U),24);
    bufp->fullIData(oldp+978,(0x8000U),24);
    bufp->fullIData(oldp+979,(0x10000U),24);
    bufp->fullIData(oldp+980,(0x20000U),24);
    bufp->fullIData(oldp+981,(0x40000U),24);
    bufp->fullIData(oldp+982,(0x80000U),24);
    bufp->fullIData(oldp+983,(0x100000U),24);
    bufp->fullIData(oldp+984,(0x200000U),24);
    bufp->fullIData(oldp+985,(0x400000U),24);
    bufp->fullIData(oldp+986,(0x800000U),24);
    bufp->fullIData(oldp+987,(1U),32);
    bufp->fullIData(oldp+988,(3U),32);
    bufp->fullBit(oldp+989,(0U));
    bufp->fullCData(oldp+990,(0U),4);
    bufp->fullBit(oldp+991,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_RUSER));
    bufp->fullBit(oldp+992,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_BUSER));
    bufp->fullIData(oldp+993,(0xaU),32);
    bufp->fullIData(oldp+994,(0x400U),32);
    bufp->fullIData(oldp+995,(5U),32);
    bufp->fullBit(oldp+996,(1U));
    bufp->fullCData(oldp+997,(0xfU),4);
    bufp->fullIData(oldp+998,(2U),32);
    bufp->fullSData(oldp+999,(0x3ffU),10);
    bufp->fullIData(oldp+1000,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__calc_data_width__Vstatic__y),32);
    bufp->fullIData(oldp+1001,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+1002,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__m),32);
    bufp->fullBit(oldp+1003,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_resp_w));
    bufp->fullCData(oldp+1004,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__len_cnt),8);
    bufp->fullBit(oldp+1005,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__burst_valid));
    bufp->fullBit(oldp+1006,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_burst));
    bufp->fullQData(oldp+1007,(0x626c6f636bULL),40);
    bufp->fullIData(oldp+1009,(0x23U),32);
    bufp->fullIData(oldp+1010,(0x100U),32);
    bufp->fullIData(oldp+1011,(0xfU),32);
    bufp->fullIData(oldp+1012,(0x40U),32);
    bufp->fullIData(oldp+1013,(0x22U),32);
    bufp->fullCData(oldp+1014,(2U),2);
    bufp->fullCData(oldp+1015,(3U),2);
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__calc_data_width__Vstatic__y),32);
    bufp->fullIData(oldp+1017,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+1018,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__m),32);
    bufp->fullBit(oldp+1019,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_valid));
    bufp->fullIData(oldp+1020,(0x24U),32);
    bufp->fullIData(oldp+1021,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+1022,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__m),32);
    bufp->fullIData(oldp+1023,(0xeU),32);
    bufp->fullBit(oldp+1024,(1U));
    bufp->fullIData(oldp+1025,(vlSymsp->TOP__tb_axi4_ram.__PVT__axi_ram_inst__DOT__s_axi_rdata_next),32);
}
