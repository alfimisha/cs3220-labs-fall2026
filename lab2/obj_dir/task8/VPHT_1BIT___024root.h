// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPHT_1BIT.h for the primary calling header

#ifndef VERILATED_VPHT_1BIT___024ROOT_H_
#define VERILATED_VPHT_1BIT___024ROOT_H_  // guard

#include "verilated.h"


class VPHT_1BIT__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPHT_1BIT___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(out,0,0);
    VL_IN8(wr_data,0,0);
    VL_IN8(wr_ena,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(rd_sel,9,0);
    VL_IN16(wr_sel,9,0);
    IData/*31:0*/ PHT_1BIT__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 1024> PHT_1BIT__DOT__PHT;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPHT_1BIT__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPHT_1BIT___024root(VPHT_1BIT__Syms* symsp, const char* v__name);
    ~VPHT_1BIT___024root();
    VL_UNCOPYABLE(VPHT_1BIT___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
