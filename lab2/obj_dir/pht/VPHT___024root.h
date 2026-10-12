// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPHT.h for the primary calling header

#ifndef VERILATED_VPHT___024ROOT_H_
#define VERILATED_VPHT___024ROOT_H_  // guard

#include "verilated.h"


class VPHT__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPHT___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rd_sel,7,0);
    VL_OUT8(out,0,0);
    VL_IN8(wr_sel,7,0);
    VL_IN8(wr_data,0,0);
    VL_IN8(wr_ena,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ PHT__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*1:0*/, 256> PHT__DOT__PHT;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPHT__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPHT___024root(VPHT__Syms* symsp, const char* v__name);
    ~VPHT___024root();
    VL_UNCOPYABLE(VPHT___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
