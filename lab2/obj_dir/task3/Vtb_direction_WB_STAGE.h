// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_direction.h for the primary calling header

#ifndef VERILATED_VTB_DIRECTION_WB_STAGE_H_
#define VERILATED_VTB_DIRECTION_WB_STAGE_H_  // guard

#include "verilated.h"


class Vtb_direction__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_direction_WB_STAGE final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__from_WB_to_FE,0,0);
    VL_OUT8(__PVT__from_WB_to_AGEX,0,0);
    VL_OUT8(__PVT__from_WB_to_MEM,0,0);
    VL_INW(__PVT__from_MEM_latch,172,0,6);
    IData/*31:0*/ __PVT__regval_WB;
    VlWide<32>/*1023:0*/ last_WB_value;
    VlWide<8>/*255:0*/ WB_counters;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    VL_OUT64(__PVT__from_WB_to_DE,37,0);

    // INTERNAL VARIABLES
    Vtb_direction__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_direction_WB_STAGE(Vtb_direction__Syms* symsp, const char* v__name);
    ~Vtb_direction_WB_STAGE();
    VL_UNCOPYABLE(Vtb_direction_WB_STAGE);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
