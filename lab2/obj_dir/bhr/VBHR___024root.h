// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBHR.h for the primary calling header

#ifndef VERILATED_VBHR___024ROOT_H_
#define VERILATED_VBHR___024ROOT_H_  // guard

#include "verilated.h"


class VBHR__Syms;

class alignas(VL_CACHE_LINE_BYTES) VBHR___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(wr_ena,0,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(wr_data,31,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VBHR__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBHR___024root(VBHR__Syms* symsp, const char* v__name);
    ~VBHR___024root();
    VL_UNCOPYABLE(VBHR___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
