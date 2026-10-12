// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_towers.h for the primary calling header

#ifndef VERILATED_VTB_TOWERS_TB_TOWERS_H_
#define VERILATED_VTB_TOWERS_TB_TOWERS_H_  // guard

#include "verilated.h"
class Vtb_towers_pipeline;


class Vtb_towers__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_towers_tb_towers final : public VerilatedModule {
  public:
    // CELLS
    Vtb_towers_pipeline* dut;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(branch,0,0);
    VL_OUT8(stall,0,0);
    VL_OUT8(redirect,0,0);
    VL_OUT8(retired,0,0);
    VL_OUT8(finished,0,0);
    CData/*0:0*/ __PVT__jalr;
    VL_OUT(gp,31,0);
    VL_OUT(branch_pc,31,0);
    VL_OUT(fetch_pc,31,0);
    VL_OUT(fetch_id,31,0);
    VL_OUT(branch_id,31,0);
    VL_OUT(actual_pc,31,0);

    // INTERNAL VARIABLES
    Vtb_towers__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_towers_tb_towers(Vtb_towers__Syms* symsp, const char* v__name);
    ~Vtb_towers_tb_towers();
    VL_UNCOPYABLE(Vtb_towers_tb_towers);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
