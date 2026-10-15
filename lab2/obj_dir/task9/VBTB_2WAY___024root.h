// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VBTB_2WAY.h for the primary calling header

#ifndef VERILATED_VBTB_2WAY___024ROOT_H_
#define VERILATED_VBTB_2WAY___024ROOT_H_  // guard

#include "verilated.h"


class VBTB_2WAY__Syms;

class alignas(VL_CACHE_LINE_BYTES) VBTB_2WAY___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rd_ena,0,0);
    VL_OUT8(outs_valid,0,0);
    VL_IN8(wr_ena,0,0);
    CData/*0:0*/ BTB_2WAY__DOT__rd_hit_w0;
    CData/*0:0*/ BTB_2WAY__DOT__wr_way;
    CData/*0:0*/ BTB_2WAY__DOT____VdfgTmp_hebc9861e__0;
    CData/*0:0*/ BTB_2WAY__DOT____VdfgTmp_h39a9067c__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(rd_sel,31,0);
    VL_OUT(out_data,31,0);
    VL_IN(wr_sel,31,0);
    VL_IN(wr_data,31,0);
    IData/*31:0*/ BTB_2WAY__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 8> BTB_2WAY__DOT__btb_target_w0;
    VlUnpacked<IData/*31:0*/, 8> BTB_2WAY__DOT__btb_target_w1;
    VlUnpacked<IData/*26:0*/, 8> BTB_2WAY__DOT__btb_tag_w0;
    VlUnpacked<IData/*26:0*/, 8> BTB_2WAY__DOT__btb_tag_w1;
    VlUnpacked<CData/*0:0*/, 8> BTB_2WAY__DOT__btb_valid_w0;
    VlUnpacked<CData/*0:0*/, 8> BTB_2WAY__DOT__btb_valid_w1;
    VlUnpacked<CData/*0:0*/, 8> BTB_2WAY__DOT__lru;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VBTB_2WAY__Syms* const vlSymsp;

    // CONSTRUCTORS
    VBTB_2WAY___024root(VBTB_2WAY__Syms* symsp, const char* v__name);
    ~VBTB_2WAY___024root();
    VL_UNCOPYABLE(VBTB_2WAY___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
