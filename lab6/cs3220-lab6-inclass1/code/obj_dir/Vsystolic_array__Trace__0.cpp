// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


void Vsystolic_array___024root__trace_chg_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsystolic_array___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_top_0\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsystolic_array___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsystolic_array___024root__trace_chg_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->systolic_array__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->systolic_array__DOT__rst_accumulator_rdy));
        bufp->chgBit(oldp+2,(vlSelf->systolic_array__DOT__stream_out_rdy));
        bufp->chgSData(oldp+3,(vlSelf->systolic_array__DOT__row_data_in),16);
        bufp->chgSData(oldp+4,(vlSelf->systolic_array__DOT__col_data_in),16);
        bufp->chgCData(oldp+5,((((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg) 
                                 << 1U) | (1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                                 >> 3U)))),2);
        bufp->chgCData(oldp+6,(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg),2);
        bufp->chgCData(oldp+7,(vlSelf->systolic_array__DOT__row_00_01),8);
        bufp->chgCData(oldp+8,(vlSelf->systolic_array__DOT__row_10_11),8);
        bufp->chgCData(oldp+9,(vlSelf->systolic_array__DOT__col_00_10),8);
        bufp->chgCData(oldp+10,(vlSelf->systolic_array__DOT__col_01_11),8);
        bufp->chgBit(oldp+11,(vlSelf->systolic_array__DOT__rst_00_10));
        bufp->chgBit(oldp+12,(vlSelf->systolic_array__DOT__rst_01_11));
        bufp->chgBit(oldp+13,(vlSelf->systolic_array__DOT__so_00_10));
        bufp->chgBit(oldp+14,(vlSelf->systolic_array__DOT__so_01_11));
        bufp->chgCData(oldp+15,(vlSelf->systolic_array__DOT__psum_00),8);
        bufp->chgCData(oldp+16,(vlSelf->systolic_array__DOT__psum_01),8);
        bufp->chgCData(oldp+17,(vlSelf->systolic_array__DOT__psum_10),8);
        bufp->chgCData(oldp+18,(vlSelf->systolic_array__DOT__psum_11),8);
        bufp->chgCData(oldp+19,(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay),4);
        bufp->chgCData(oldp+20,(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay),6);
        bufp->chgBit(oldp+21,(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                     >> 3U))));
        bufp->chgBit(oldp+23,((1U & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg))));
        bufp->chgCData(oldp+24,((0xffU & (IData)(vlSelf->systolic_array__DOT__row_data_in))),8);
        bufp->chgCData(oldp+25,((0xffU & (IData)(vlSelf->systolic_array__DOT__col_data_in))),8);
        bufp->chgCData(oldp+26,(vlSelf->systolic_array__DOT__mac_00__DOT__psum[0]),8);
        bufp->chgCData(oldp+27,(vlSelf->systolic_array__DOT__mac_00__DOT__psum[1]),8);
        bufp->chgCData(oldp+28,(vlSelf->systolic_array__DOT__mac_00__DOT__psum_reg),8);
        bufp->chgCData(oldp+29,(vlSelf->systolic_array__DOT__mac_00__DOT__mult_out),8);
        bufp->chgCData(oldp+30,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                [1U]),8);
        bufp->chgBit(oldp+31,(vlSelf->systolic_array__DOT__mac_00__DOT__multiplier_done));
        bufp->chgCData(oldp+32,(((8U & (IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay))
                                  ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+33,(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+34,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+35,(vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter));
        bufp->chgBit(oldp+36,(vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter));
        bufp->chgBit(oldp+37,(vlSelf->systolic_array__DOT__mac_00__DOT__stream_started));
        bufp->chgBit(oldp+38,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__mac_00__DOT__multiplier_done))));
        bufp->chgBit(oldp+39,(vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__en_reg));
        bufp->chgBit(oldp+40,((1U & (~ (IData)(vlSelf->systolic_array__DOT__rst)))));
        bufp->chgCData(oldp+41,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+42,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+43,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+44,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+45,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+46,(vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                                     >> 1U))));
        bufp->chgCData(oldp+48,((0xffU & ((IData)(vlSelf->systolic_array__DOT__col_data_in) 
                                          >> 8U))),8);
        bufp->chgCData(oldp+49,(vlSelf->systolic_array__DOT__mac_01__DOT__row_data_out),8);
        bufp->chgCData(oldp+50,(vlSelf->systolic_array__DOT__mac_01__DOT__psum[0]),8);
        bufp->chgCData(oldp+51,(vlSelf->systolic_array__DOT__mac_01__DOT__psum[1]),8);
        bufp->chgCData(oldp+52,(vlSelf->systolic_array__DOT__mac_01__DOT__psum_reg),8);
        bufp->chgCData(oldp+53,(vlSelf->systolic_array__DOT__mac_01__DOT__mult_out),8);
        bufp->chgCData(oldp+54,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                [1U]),8);
        bufp->chgBit(oldp+55,(vlSelf->systolic_array__DOT__mac_01__DOT__multiplier_done));
        bufp->chgCData(oldp+56,(((IData)(vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg)
                                  ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+57,(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+58,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+59,(vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter));
        bufp->chgBit(oldp+60,(vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter));
        bufp->chgBit(oldp+61,(vlSelf->systolic_array__DOT__mac_01__DOT__stream_started));
        bufp->chgBit(oldp+62,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__mac_01__DOT__multiplier_done))));
        bufp->chgBit(oldp+63,(vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+64,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+65,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+66,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+67,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+68,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+69,(vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgCData(oldp+70,((0xffU & ((IData)(vlSelf->systolic_array__DOT__row_data_in) 
                                          >> 8U))),8);
        bufp->chgCData(oldp+71,(vlSelf->systolic_array__DOT__mac_10__DOT__col_data_out),8);
        bufp->chgBit(oldp+72,(vlSelf->systolic_array__DOT__mac_10__DOT__rst_accumulator_out));
        bufp->chgBit(oldp+73,(vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_out));
        bufp->chgCData(oldp+74,(vlSelf->systolic_array__DOT__mac_10__DOT__psum[0]),8);
        bufp->chgCData(oldp+75,(vlSelf->systolic_array__DOT__mac_10__DOT__psum[1]),8);
        bufp->chgCData(oldp+76,(vlSelf->systolic_array__DOT__mac_10__DOT__psum_reg),8);
        bufp->chgCData(oldp+77,(vlSelf->systolic_array__DOT__mac_10__DOT__mult_out),8);
        bufp->chgCData(oldp+78,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                [1U]),8);
        bufp->chgBit(oldp+79,(vlSelf->systolic_array__DOT__mac_10__DOT__multiplier_done));
        bufp->chgCData(oldp+80,(((IData)(vlSelf->systolic_array__DOT__rst_00_10)
                                  ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+81,(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+82,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+83,(vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter));
        bufp->chgBit(oldp+84,(vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter));
        bufp->chgBit(oldp+85,(vlSelf->systolic_array__DOT__mac_10__DOT__stream_started));
        bufp->chgBit(oldp+86,(vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+87,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                               & (IData)(vlSelf->systolic_array__DOT__mac_10__DOT__multiplier_done))));
        bufp->chgBit(oldp+88,(vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+89,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+90,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+91,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+92,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+93,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+94,(vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgCData(oldp+95,(vlSelf->systolic_array__DOT__mac_11__DOT__row_data_out),8);
        bufp->chgCData(oldp+96,(vlSelf->systolic_array__DOT__mac_11__DOT__col_data_out),8);
        bufp->chgBit(oldp+97,(vlSelf->systolic_array__DOT__mac_11__DOT__rst_accumulator_out));
        bufp->chgBit(oldp+98,(vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_out));
        bufp->chgCData(oldp+99,(vlSelf->systolic_array__DOT__mac_11__DOT__psum[0]),8);
        bufp->chgCData(oldp+100,(vlSelf->systolic_array__DOT__mac_11__DOT__psum[1]),8);
        bufp->chgCData(oldp+101,(vlSelf->systolic_array__DOT__mac_11__DOT__psum_reg),8);
        bufp->chgCData(oldp+102,(vlSelf->systolic_array__DOT__mac_11__DOT__mult_out),8);
        bufp->chgCData(oldp+103,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+104,(vlSelf->systolic_array__DOT__mac_11__DOT__multiplier_done));
        bufp->chgCData(oldp+105,(((IData)(vlSelf->systolic_array__DOT__rst_01_11)
                                   ? 0U : (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+106,(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+107,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+108,(vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter));
        bufp->chgBit(oldp+109,(vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter));
        bufp->chgBit(oldp+110,(vlSelf->systolic_array__DOT__mac_11__DOT__stream_started));
        bufp->chgBit(oldp+111,(vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+112,(((~ (IData)(vlSelf->systolic_array__DOT__rst)) 
                                & (IData)(vlSelf->systolic_array__DOT__mac_11__DOT__multiplier_done))));
        bufp->chgBit(oldp+113,(vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+114,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+115,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+116,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+117,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+118,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+119,(vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    }
    bufp->chgBit(oldp+120,(vlSelf->clk));
    bufp->chgBit(oldp+121,(vlSelf->rst_in));
    bufp->chgBit(oldp+122,(vlSelf->rst_accumulator_rdy_in));
    bufp->chgBit(oldp+123,(vlSelf->stream_out_rdy_in_in));
    bufp->chgSData(oldp+124,(vlSelf->row_data_in_in),16);
    bufp->chgSData(oldp+125,(vlSelf->col_data_in_in),16);
    bufp->chgSData(oldp+126,(vlSelf->row_data_out),16);
}

void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_cleanup\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
