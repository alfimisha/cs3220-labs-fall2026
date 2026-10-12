// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_direction.h for the primary calling header

#ifndef VERILATED_VTB_DIRECTION_TB_DIRECTION_H_
#define VERILATED_VTB_DIRECTION_TB_DIRECTION_H_  // guard

#include "verilated.h"
class Vtb_direction_pipeline;


class Vtb_direction__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_direction_tb_direction final : public VerilatedModule {
  public:
    // CELLS
    Vtb_direction_pipeline* dut;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(redirect,0,0);
    VL_OUT8(stall,0,0);
    VL_OUT8(branch_flag,0,0);
    VL_OUT8(history,7,0);
    VL_OUT8(fetch_index,7,0);
    VL_OUT8(write_index,7,0);
    VL_OUT8(prediction,0,0);
    VL_OUT8(bhr_write,0,0);
    VL_OUT8(pht_write,0,0);
    VL_OUT8(pht_data,0,0);
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

    // INTERNAL VARIABLES
    Vtb_direction__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_direction_tb_direction(Vtb_direction__Syms* symsp, const char* v__name);
    ~Vtb_direction_tb_direction();
    VL_UNCOPYABLE(Vtb_direction_tb_direction);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
