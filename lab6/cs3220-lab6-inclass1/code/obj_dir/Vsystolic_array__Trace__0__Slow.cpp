// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


VL_ATTR_COLD void Vsystolic_array___024root__trace_init_sub__TOP__0(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+122,"rst_in", false,-1);
    tracep->declBit(c+123,"rst_accumulator_rdy_in", false,-1);
    tracep->declBit(c+124,"stream_out_rdy_in_in", false,-1);
    tracep->declBus(c+125,"row_data_in_in", false,-1, 15,0);
    tracep->declBus(c+126,"col_data_in_in", false,-1, 15,0);
    tracep->declBus(c+127,"row_data_out", false,-1, 15,0);
    tracep->pushNamePrefix("systolic_array ");
    tracep->declBus(c+128,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+130,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+131,"ACC_LAT", false,-1, 31,0);
    tracep->declBus(c+132,"ROWS", false,-1, 31,0);
    tracep->declBus(c+132,"K", false,-1, 31,0);
    tracep->declBus(c+132,"COLS", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+122,"rst_in", false,-1);
    tracep->declBit(c+123,"rst_accumulator_rdy_in", false,-1);
    tracep->declBit(c+124,"stream_out_rdy_in_in", false,-1);
    tracep->declBus(c+125,"row_data_in_in", false,-1, 15,0);
    tracep->declBus(c+126,"col_data_in_in", false,-1, 15,0);
    tracep->declBus(c+127,"row_data_out", false,-1, 15,0);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"rst_accumulator_rdy", false,-1);
    tracep->declBit(c+3,"stream_out_rdy", false,-1);
    tracep->declBus(c+4,"row_data_in", false,-1, 15,0);
    tracep->declBus(c+5,"col_data_in", false,-1, 15,0);
    tracep->declBus(c+6,"control_rst_accumulator_rdy", false,-1, 1,0);
    tracep->declBus(c+7,"control_stream_out_rdy", false,-1, 1,0);
    tracep->declBus(c+8,"row_00_01", false,-1, 7,0);
    tracep->declBus(c+9,"row_10_11", false,-1, 7,0);
    tracep->declBus(c+10,"col_00_10", false,-1, 7,0);
    tracep->declBus(c+11,"col_01_11", false,-1, 7,0);
    tracep->declBit(c+12,"rst_00_10", false,-1);
    tracep->declBit(c+13,"rst_01_11", false,-1);
    tracep->declBit(c+14,"so_00_10", false,-1);
    tracep->declBit(c+15,"so_01_11", false,-1);
    tracep->declBus(c+16,"psum_00", false,-1, 7,0);
    tracep->declBus(c+17,"psum_01", false,-1, 7,0);
    tracep->declBus(c+18,"psum_10", false,-1, 7,0);
    tracep->declBus(c+19,"psum_11", false,-1, 7,0);
    tracep->declBus(c+131,"OWN_DELAY_COL0", false,-1, 31,0);
    tracep->declBus(c+129,"OWN_DELAY_COL1", false,-1, 31,0);
    tracep->pushNamePrefix("ctrl_0 ");
    tracep->declBus(c+128,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"ROWS", false,-1, 31,0);
    tracep->declBus(c+132,"COLS", false,-1, 31,0);
    tracep->declBus(c+130,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+131,"ACC_LAT", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+2,"input_rst_accumulator", false,-1);
    tracep->declBit(c+3,"input_stream_out_rdy", false,-1);
    tracep->declBus(c+6,"rst_accumulator", false,-1, 1,0);
    tracep->declBus(c+7,"stream_out_rdy", false,-1, 1,0);
    tracep->declBus(c+133,"RST_DELAY", false,-1, 31,0);
    tracep->declBus(c+134,"STREAM_OUT_DELAY", false,-1, 31,0);
    tracep->declBus(c+20,"rst_delay", false,-1, 3,0);
    tracep->declBus(c+6,"rst_col", false,-1, 1,0);
    tracep->declBus(c+21,"stream_out_delay", false,-1, 5,0);
    tracep->declBus(c+7,"stream_out_rdy_reg", false,-1, 1,0);
    tracep->pushNamePrefix("rst_col_chain[1] ");
    tracep->declBit(c+22,"rst_col_reg", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mac_00 ");
    tracep->declBus(c+128,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+130,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+131,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+132,"K", false,-1, 31,0);
    tracep->declBus(c+132,"ROWS", false,-1, 31,0);
    tracep->declBus(c+132,"COLS", false,-1, 31,0);
    tracep->declBus(c+129,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+129,"ROWS_IDX", false,-1, 31,0);
    tracep->declBus(c+131,"OWN_DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+23,"rst_accumulator_in", false,-1);
    tracep->declBit(c+24,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+25,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+26,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+17,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+8,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+10,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+12,"rst_accumulator_out", false,-1);
    tracep->declBit(c+14,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+16,"psum_out", false,-1, 7,0);
    tracep->declBus(c+131,"COLS_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+27+i*1,"psum", true,(i+0), 7,0);
    }
    tracep->declBus(c+29,"psum_reg", false,-1, 7,0);
    tracep->declBus(c+30,"mult_out", false,-1, 7,0);
    tracep->declBus(c+31,"multiplier_out", false,-1, 7,0);
    tracep->declBit(c+32,"multiplier_done", false,-1);
    tracep->declBus(c+30,"adder_in_A", false,-1, 7,0);
    tracep->declBus(c+33,"adder_in_B", false,-1, 7,0);
    tracep->declBus(c+34,"adder_out", false,-1, 7,0);
    tracep->declBit(c+35,"adder_done", false,-1);
    tracep->declBit(c+36,"bypass_en", false,-1);
    tracep->declBus(c+131,"temp", false,-1, 31,0);
    tracep->declBus(c+135,"bypass_counter_max", false,-1, 0,0);
    tracep->declBus(c+37,"bypass_counter", false,-1, 0,0);
    tracep->declBit(c+38,"stream_started", false,-1);
    tracep->declBit(c+14,"stream_out_rdy_in_reg", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBus(c+128,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+131,"DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+39,"en", false,-1);
    tracep->declBit(c+136,"stall", false,-1);
    tracep->declBus(c+30,"a_in", false,-1, 7,0);
    tracep->declBus(c+33,"b_in", false,-1, 7,0);
    tracep->declBus(c+34,"out", false,-1, 7,0);
    tracep->declBit(c+35,"done", false,-1);
    tracep->declBus(c+34,"add", false,-1, 7,0);
    tracep->declBit(c+40,"en_reg", false,-1);
    tracep->declBus(c+128,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+128,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+128,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+130,"DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+41,"en", false,-1);
    tracep->declBit(c+136,"stall", false,-1);
    tracep->declBus(c+25,"a_in", false,-1, 7,0);
    tracep->declBus(c+26,"b_in", false,-1, 7,0);
    tracep->declBus(c+31,"out", false,-1, 7,0);
    tracep->declBit(c+32,"done", false,-1);
    tracep->declBus(c+42,"mult", false,-1, 7,0);
    tracep->declBit(c+43,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+44+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+46+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mac_01 ");
    tracep->declBus(c+128,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+130,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+131,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+132,"K", false,-1, 31,0);
    tracep->declBus(c+132,"ROWS", false,-1, 31,0);
    tracep->declBus(c+132,"COLS", false,-1, 31,0);
    tracep->declBus(c+131,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+129,"ROWS_IDX", false,-1, 31,0);
    tracep->declBus(c+129,"OWN_DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+22,"rst_accumulator_in", false,-1);
    tracep->declBit(c+48,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+8,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+49,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+137,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+50,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+11,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+13,"rst_accumulator_out", false,-1);
    tracep->declBit(c+15,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+17,"psum_out", false,-1, 7,0);
    tracep->declBus(c+131,"COLS_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+51+i*1,"psum", true,(i+0), 7,0);
    }
    tracep->declBus(c+53,"psum_reg", false,-1, 7,0);
    tracep->declBus(c+54,"mult_out", false,-1, 7,0);
    tracep->declBus(c+55,"multiplier_out", false,-1, 7,0);
    tracep->declBit(c+56,"multiplier_done", false,-1);
    tracep->declBus(c+54,"adder_in_A", false,-1, 7,0);
    tracep->declBus(c+57,"adder_in_B", false,-1, 7,0);
    tracep->declBus(c+58,"adder_out", false,-1, 7,0);
    tracep->declBit(c+59,"adder_done", false,-1);
    tracep->declBit(c+60,"bypass_en", false,-1);
    tracep->declBus(c+131,"temp", false,-1, 31,0);
    tracep->declBus(c+135,"bypass_counter_max", false,-1, 0,0);
    tracep->declBus(c+61,"bypass_counter", false,-1, 0,0);
    tracep->declBit(c+62,"stream_started", false,-1);
    tracep->declBit(c+15,"stream_out_rdy_in_reg", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBus(c+128,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+131,"DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+63,"en", false,-1);
    tracep->declBit(c+136,"stall", false,-1);
    tracep->declBus(c+54,"a_in", false,-1, 7,0);
    tracep->declBus(c+57,"b_in", false,-1, 7,0);
    tracep->declBus(c+58,"out", false,-1, 7,0);
    tracep->declBit(c+59,"done", false,-1);
    tracep->declBus(c+58,"add", false,-1, 7,0);
    tracep->declBit(c+64,"en_reg", false,-1);
    tracep->declBus(c+128,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+128,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+128,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+130,"DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+41,"en", false,-1);
    tracep->declBit(c+136,"stall", false,-1);
    tracep->declBus(c+8,"a_in", false,-1, 7,0);
    tracep->declBus(c+49,"b_in", false,-1, 7,0);
    tracep->declBus(c+55,"out", false,-1, 7,0);
    tracep->declBit(c+56,"done", false,-1);
    tracep->declBus(c+65,"mult", false,-1, 7,0);
    tracep->declBit(c+66,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+67+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+69+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mac_10 ");
    tracep->declBus(c+128,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+130,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+131,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+132,"K", false,-1, 31,0);
    tracep->declBus(c+132,"ROWS", false,-1, 31,0);
    tracep->declBus(c+132,"COLS", false,-1, 31,0);
    tracep->declBus(c+129,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+131,"ROWS_IDX", false,-1, 31,0);
    tracep->declBus(c+131,"OWN_DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+12,"rst_accumulator_in", false,-1);
    tracep->declBit(c+14,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+71,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+10,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+19,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+9,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+72,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+73,"rst_accumulator_out", false,-1);
    tracep->declBit(c+74,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+18,"psum_out", false,-1, 7,0);
    tracep->declBus(c+131,"COLS_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+75+i*1,"psum", true,(i+0), 7,0);
    }
    tracep->declBus(c+77,"psum_reg", false,-1, 7,0);
    tracep->declBus(c+78,"mult_out", false,-1, 7,0);
    tracep->declBus(c+79,"multiplier_out", false,-1, 7,0);
    tracep->declBit(c+80,"multiplier_done", false,-1);
    tracep->declBus(c+78,"adder_in_A", false,-1, 7,0);
    tracep->declBus(c+81,"adder_in_B", false,-1, 7,0);
    tracep->declBus(c+82,"adder_out", false,-1, 7,0);
    tracep->declBit(c+83,"adder_done", false,-1);
    tracep->declBit(c+84,"bypass_en", false,-1);
    tracep->declBus(c+131,"temp", false,-1, 31,0);
    tracep->declBus(c+135,"bypass_counter_max", false,-1, 0,0);
    tracep->declBus(c+85,"bypass_counter", false,-1, 0,0);
    tracep->declBit(c+86,"stream_started", false,-1);
    tracep->declBit(c+87,"stream_out_rdy_in_reg", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBus(c+128,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+131,"DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+88,"en", false,-1);
    tracep->declBit(c+136,"stall", false,-1);
    tracep->declBus(c+78,"a_in", false,-1, 7,0);
    tracep->declBus(c+81,"b_in", false,-1, 7,0);
    tracep->declBus(c+82,"out", false,-1, 7,0);
    tracep->declBit(c+83,"done", false,-1);
    tracep->declBus(c+82,"add", false,-1, 7,0);
    tracep->declBit(c+89,"en_reg", false,-1);
    tracep->declBus(c+128,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+128,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+128,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+130,"DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+41,"en", false,-1);
    tracep->declBit(c+136,"stall", false,-1);
    tracep->declBus(c+71,"a_in", false,-1, 7,0);
    tracep->declBus(c+10,"b_in", false,-1, 7,0);
    tracep->declBus(c+79,"out", false,-1, 7,0);
    tracep->declBit(c+80,"done", false,-1);
    tracep->declBus(c+90,"mult", false,-1, 7,0);
    tracep->declBit(c+91,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+92+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+94+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("mac_11 ");
    tracep->declBus(c+128,"IN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"IN_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+130,"MULT_LAT", false,-1, 31,0);
    tracep->declBus(c+131,"ADD_LAT", false,-1, 31,0);
    tracep->declBus(c+132,"K", false,-1, 31,0);
    tracep->declBus(c+132,"ROWS", false,-1, 31,0);
    tracep->declBus(c+132,"COLS", false,-1, 31,0);
    tracep->declBus(c+131,"COLS_IDX", false,-1, 31,0);
    tracep->declBus(c+131,"ROWS_IDX", false,-1, 31,0);
    tracep->declBus(c+129,"OWN_DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBit(c+13,"rst_accumulator_in", false,-1);
    tracep->declBit(c+15,"stream_out_rdy_in", false,-1);
    tracep->declBus(c+9,"row_data_in", false,-1, 7,0);
    tracep->declBus(c+11,"col_data_in", false,-1, 7,0);
    tracep->declBus(c+137,"bypass_data_in", false,-1, 7,0);
    tracep->declBus(c+96,"row_data_out", false,-1, 7,0);
    tracep->declBus(c+97,"col_data_out", false,-1, 7,0);
    tracep->declBit(c+98,"rst_accumulator_out", false,-1);
    tracep->declBit(c+99,"stream_out_rdy_out", false,-1);
    tracep->declBus(c+19,"psum_out", false,-1, 7,0);
    tracep->declBus(c+131,"COLS_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+100+i*1,"psum", true,(i+0), 7,0);
    }
    tracep->declBus(c+102,"psum_reg", false,-1, 7,0);
    tracep->declBus(c+103,"mult_out", false,-1, 7,0);
    tracep->declBus(c+104,"multiplier_out", false,-1, 7,0);
    tracep->declBit(c+105,"multiplier_done", false,-1);
    tracep->declBus(c+103,"adder_in_A", false,-1, 7,0);
    tracep->declBus(c+106,"adder_in_B", false,-1, 7,0);
    tracep->declBus(c+107,"adder_out", false,-1, 7,0);
    tracep->declBit(c+108,"adder_done", false,-1);
    tracep->declBit(c+109,"bypass_en", false,-1);
    tracep->declBus(c+131,"temp", false,-1, 31,0);
    tracep->declBus(c+135,"bypass_counter_max", false,-1, 0,0);
    tracep->declBus(c+110,"bypass_counter", false,-1, 0,0);
    tracep->declBit(c+111,"stream_started", false,-1);
    tracep->declBit(c+112,"stream_out_rdy_in_reg", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBus(c+128,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+131,"DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+113,"en", false,-1);
    tracep->declBit(c+136,"stall", false,-1);
    tracep->declBus(c+103,"a_in", false,-1, 7,0);
    tracep->declBus(c+106,"b_in", false,-1, 7,0);
    tracep->declBus(c+107,"out", false,-1, 7,0);
    tracep->declBit(c+108,"done", false,-1);
    tracep->declBus(c+107,"add", false,-1, 7,0);
    tracep->declBit(c+114,"en_reg", false,-1);
    tracep->declBus(c+128,"A_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->declBus(c+128,"B_WIDTH_EXTENDED", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+128,"INPUT_A_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"INPUT_B_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_A_FRAC", false,-1, 31,0);
    tracep->declBus(c+129,"INPUT_B_FRAC", false,-1, 31,0);
    tracep->declBus(c+128,"OUTPUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+129,"OUTPUT_FRAC", false,-1, 31,0);
    tracep->declBus(c+130,"DELAY", false,-1, 31,0);
    tracep->declBit(c+121,"clk", false,-1);
    tracep->declBit(c+1,"reset", false,-1);
    tracep->declBit(c+41,"en", false,-1);
    tracep->declBit(c+136,"stall", false,-1);
    tracep->declBus(c+9,"a_in", false,-1, 7,0);
    tracep->declBus(c+11,"b_in", false,-1, 7,0);
    tracep->declBus(c+104,"out", false,-1, 7,0);
    tracep->declBit(c+105,"done", false,-1);
    tracep->declBus(c+115,"mult", false,-1, 7,0);
    tracep->declBit(c+116,"en_reg", false,-1);
    tracep->pushNamePrefix("genblk1 ");
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+117+i*1,"mult_delayed", true,(i+0), 7,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+119+i*1,"en_delayed", true,(i+0));
    }
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_init_top(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_init_top\n"); );
    // Body
    Vsystolic_array___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsystolic_array___024root__trace_register(Vsystolic_array___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsystolic_array___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsystolic_array___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsystolic_array___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_full_top_0\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsystolic_array___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsystolic_array___024root__trace_full_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->systolic_array__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->systolic_array__DOT__rst_accumulator_rdy));
    bufp->fullBit(oldp+3,(vlSelf->systolic_array__DOT__stream_out_rdy));
    bufp->fullSData(oldp+4,(vlSelf->systolic_array__DOT__row_data_in),16);
    bufp->fullSData(oldp+5,(vlSelf->systolic_array__DOT__col_data_in),16);
    bufp->fullCData(oldp+6,((((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg) 
                              << 1U) | (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                              >> 3U)))),2);
    bufp->fullCData(oldp+7,(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg),2);
    bufp->fullCData(oldp+8,(vlSelf->systolic_array__DOT__row_00_01),8);
    bufp->fullCData(oldp+9,(vlSelf->systolic_array__DOT__row_10_11),8);
    bufp->fullCData(oldp+10,(vlSelf->systolic_array__DOT__col_00_10),8);
    bufp->fullCData(oldp+11,(vlSelf->systolic_array__DOT__col_01_11),8);
    bufp->fullBit(oldp+12,(vlSelf->systolic_array__DOT__rst_00_10));
    bufp->fullBit(oldp+13,(vlSelf->systolic_array__DOT__rst_01_11));
    bufp->fullBit(oldp+14,(vlSelf->systolic_array__DOT__so_00_10));
    bufp->fullBit(oldp+15,(vlSelf->systolic_array__DOT__so_01_11));
    bufp->fullCData(oldp+16,(vlSelf->systolic_array__DOT__psum_00),8);
    bufp->fullCData(oldp+17,(vlSelf->systolic_array__DOT__psum_01),8);
    bufp->fullCData(oldp+18,(vlSelf->systolic_array__DOT__psum_10),8);
    bufp->fullCData(oldp+19,(vlSelf->systolic_array__DOT__psum_11),8);
    bufp->fullCData(oldp+20,(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay),4);
    bufp->fullCData(oldp+21,(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay),6);
    bufp->fullBit(oldp+22,(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                  >> 3U))));
    bufp->fullBit(oldp+24,((1U & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg))));
    bufp->fullCData(oldp+25,((0xffU & (IData)(vlSelf->systolic_array__DOT__row_data_in))),8);
    bufp->fullCData(oldp+26,((0xffU & (IData)(vlSelf->systolic_array__DOT__col_data_in))),8);
    bufp->fullCData(oldp+27,(vlSelf->systolic_array__DOT__mac_00__DOT__psum[0]),8);
    bufp->fullCData(oldp+28,(vlSelf->systolic_array__DOT__mac_00__DOT__psum[1]),8);
    bufp->fullCData(oldp+29,(vlSelf->systolic_array__DOT__mac_00__DOT__psum_reg),8);
    bufp->fullCData(oldp+30,(vlSelf->systolic_array__DOT__mac_00__DOT__mult_out),8);
    bufp->fullCData(oldp+31,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed
                             [1U]),8);
    bufp->fullBit(oldp+32,(vlSelf->systolic_array__DOT__mac_00__DOT__multiplier_done));
    bufp->fullCData(oldp+33,(((8U & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay))
                               ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+34,(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+35,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                            & (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+36,(vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter));
    bufp->fullBit(oldp+37,(vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter));
    bufp->fullBit(oldp+38,(vlSelf->systolic_array__DOT__mac_00__DOT__stream_started));
    bufp->fullBit(oldp+39,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                            & (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__multiplier_done))));
    bufp->fullBit(oldp+40,(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__en_reg));
    bufp->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->systolic_array__DOT__rst)))));
    bufp->fullCData(oldp+42,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+43,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+44,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+45,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+46,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+47,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+48,((1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                                  >> 1U))));
    bufp->fullCData(oldp+49,((0xffU & ((IData)(vlSelf->systolic_array__DOT__col_data_in) 
                                       >> 8U))),8);
    bufp->fullCData(oldp+50,(vlSelf->systolic_array__DOT__mac_01__DOT__row_data_out),8);
    bufp->fullCData(oldp+51,(vlSelf->systolic_array__DOT__mac_01__DOT__psum[0]),8);
    bufp->fullCData(oldp+52,(vlSelf->systolic_array__DOT__mac_01__DOT__psum[1]),8);
    bufp->fullCData(oldp+53,(vlSelf->systolic_array__DOT__mac_01__DOT__psum_reg),8);
    bufp->fullCData(oldp+54,(vlSelf->systolic_array__DOT__mac_01__DOT__mult_out),8);
    bufp->fullCData(oldp+55,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed
                             [1U]),8);
    bufp->fullBit(oldp+56,(vlSelf->systolic_array__DOT__mac_01__DOT__multiplier_done));
    bufp->fullCData(oldp+57,(((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg)
                               ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+58,(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+59,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                            & (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+60,(vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter));
    bufp->fullBit(oldp+61,(vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter));
    bufp->fullBit(oldp+62,(vlSelf->systolic_array__DOT__mac_01__DOT__stream_started));
    bufp->fullBit(oldp+63,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                            & (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__multiplier_done))));
    bufp->fullBit(oldp+64,(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+65,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+66,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+67,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+68,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+69,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+70,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullCData(oldp+71,((0xffU & ((IData)(vlSelf->systolic_array__DOT__row_data_in) 
                                       >> 8U))),8);
    bufp->fullCData(oldp+72,(vlSelf->systolic_array__DOT__mac_10__DOT__col_data_out),8);
    bufp->fullBit(oldp+73,(vlSelf->systolic_array__DOT__mac_10__DOT__rst_accumulator_out));
    bufp->fullBit(oldp+74,(vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_out));
    bufp->fullCData(oldp+75,(vlSelf->systolic_array__DOT__mac_10__DOT__psum[0]),8);
    bufp->fullCData(oldp+76,(vlSelf->systolic_array__DOT__mac_10__DOT__psum[1]),8);
    bufp->fullCData(oldp+77,(vlSelf->systolic_array__DOT__mac_10__DOT__psum_reg),8);
    bufp->fullCData(oldp+78,(vlSelf->systolic_array__DOT__mac_10__DOT__mult_out),8);
    bufp->fullCData(oldp+79,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed
                             [1U]),8);
    bufp->fullBit(oldp+80,(vlSelf->systolic_array__DOT__mac_10__DOT__multiplier_done));
    bufp->fullCData(oldp+81,(((IData)(vlSelf->systolic_array__DOT__rst_00_10)
                               ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+82,(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+83,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                            & (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+84,(vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter));
    bufp->fullBit(oldp+85,(vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter));
    bufp->fullBit(oldp+86,(vlSelf->systolic_array__DOT__mac_10__DOT__stream_started));
    bufp->fullBit(oldp+87,(vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg));
    bufp->fullBit(oldp+88,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                            & (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__multiplier_done))));
    bufp->fullBit(oldp+89,(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+90,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+91,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+92,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+93,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+94,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+95,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullCData(oldp+96,(vlSelf->systolic_array__DOT__mac_11__DOT__row_data_out),8);
    bufp->fullCData(oldp+97,(vlSelf->systolic_array__DOT__mac_11__DOT__col_data_out),8);
    bufp->fullBit(oldp+98,(vlSelf->systolic_array__DOT__mac_11__DOT__rst_accumulator_out));
    bufp->fullBit(oldp+99,(vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_out));
    bufp->fullCData(oldp+100,(vlSelf->systolic_array__DOT__mac_11__DOT__psum[0]),8);
    bufp->fullCData(oldp+101,(vlSelf->systolic_array__DOT__mac_11__DOT__psum[1]),8);
    bufp->fullCData(oldp+102,(vlSelf->systolic_array__DOT__mac_11__DOT__psum_reg),8);
    bufp->fullCData(oldp+103,(vlSelf->systolic_array__DOT__mac_11__DOT__mult_out),8);
    bufp->fullCData(oldp+104,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed
                              [1U]),8);
    bufp->fullBit(oldp+105,(vlSelf->systolic_array__DOT__mac_11__DOT__multiplier_done));
    bufp->fullCData(oldp+106,(((IData)(vlSelf->systolic_array__DOT__rst_01_11)
                                ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add))),8);
    bufp->fullCData(oldp+107,(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add),8);
    bufp->fullBit(oldp+108,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__en_reg))));
    bufp->fullBit(oldp+109,(vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter));
    bufp->fullBit(oldp+110,(vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter));
    bufp->fullBit(oldp+111,(vlSelf->systolic_array__DOT__mac_11__DOT__stream_started));
    bufp->fullBit(oldp+112,(vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg));
    bufp->fullBit(oldp+113,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                             & (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__multiplier_done))));
    bufp->fullBit(oldp+114,(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__en_reg));
    bufp->fullCData(oldp+115,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__mult),8);
    bufp->fullBit(oldp+116,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg));
    bufp->fullCData(oldp+117,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
    bufp->fullCData(oldp+118,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
    bufp->fullBit(oldp+119,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
    bufp->fullBit(oldp+120,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    bufp->fullBit(oldp+121,(vlSelf->clk));
    bufp->fullBit(oldp+122,(vlSelf->rst_in));
    bufp->fullBit(oldp+123,(vlSelf->rst_accumulator_rdy_in));
    bufp->fullBit(oldp+124,(vlSelf->stream_out_rdy_in_in));
    bufp->fullSData(oldp+125,(vlSelf->row_data_in_in),16);
    bufp->fullSData(oldp+126,(vlSelf->col_data_in_in),16);
    bufp->fullSData(oldp+127,(vlSelf->row_data_out),16);
    bufp->fullIData(oldp+128,(8U),32);
    bufp->fullIData(oldp+129,(0U),32);
    bufp->fullIData(oldp+130,(3U),32);
    bufp->fullIData(oldp+131,(1U),32);
    bufp->fullIData(oldp+132,(2U),32);
    bufp->fullIData(oldp+133,(4U),32);
    bufp->fullIData(oldp+134,(6U),32);
    bufp->fullBit(oldp+135,(1U));
    bufp->fullBit(oldp+136,(0U));
    bufp->fullCData(oldp+137,(0U),8);
}
