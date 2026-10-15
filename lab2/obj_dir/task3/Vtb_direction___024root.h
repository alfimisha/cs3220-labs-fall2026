// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_direction.h for the primary calling header

#ifndef VERILATED_VTB_DIRECTION___024ROOT_H_
#define VERILATED_VTB_DIRECTION___024ROOT_H_  // guard

#include "verilated.h"
class Vtb_direction_tb_direction;


class Vtb_direction__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_direction___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_direction_tb_direction* tb_direction;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(redirect,0,0);
    VL_OUT8(stall,0,0);
    VL_OUT8(branch_flag,0,0);
    VL_OUT8(history,7,0);
    VL_OUT8(prediction,0,0);
    VL_OUT8(bhr_write,0,0);
    VL_OUT8(pht_write,0,0);
    VL_OUT8(pht_data,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(fetch_index,9,0);
    VL_OUT16(write_index,9,0);
    VL_OUT(pc,31,0);
    VL_OUT(fetch_inst,31,0);
    VL_OUT(fetch_id,31,0);
    VL_OUT(gp,31,0);
    VL_OUT(inst,31,0);
    VL_OUT(branch_pc,31,0);
    VL_OUT(branch_id,31,0);
    VL_OUT(operand1,31,0);
    VL_OUT(operand2,31,0);
    VL_OUT(actual_pc,31,0);
    VL_OUT(retired_inst,31,0);
    VL_OUT(bhr_data,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_direction__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_direction___024root(Vtb_direction__Syms* symsp, const char* v__name);
    ~Vtb_direction___024root();
    VL_UNCOPYABLE(Vtb_direction___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
