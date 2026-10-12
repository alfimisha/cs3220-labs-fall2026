// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBTB.h for the primary calling header

#ifndef VERILATED_VBTB___024ROOT_H_
#define VERILATED_VBTB___024ROOT_H_  // guard

#include "verilated.h"


class VBTB__Syms;

class alignas(VL_CACHE_LINE_BYTES) VBTB___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rd_ena,0,0);
    VL_OUT8(outs_valid,0,0);
    VL_IN8(wr_ena,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(rd_sel,31,0);
    VL_OUT(out_data,31,0);
    VL_IN(wr_sel,31,0);
    VL_IN(wr_data,31,0);
    IData/*31:0*/ BTB__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> BTB__DOT__btb_target;
    VlUnpacked<IData/*25:0*/, 16> BTB__DOT__btb_tag;
    VlUnpacked<CData/*0:0*/, 16> BTB__DOT__btb_valid;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VBTB__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBTB___024root(VBTB__Syms* symsp, const char* v__name);
    ~VBTB___024root();
    VL_UNCOPYABLE(VBTB___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
