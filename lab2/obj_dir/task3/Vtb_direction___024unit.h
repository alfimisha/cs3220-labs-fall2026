// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_direction.h for the primary calling header

#ifndef VERILATED_VTB_DIRECTION___024UNIT_H_
#define VERILATED_VTB_DIRECTION___024UNIT_H_  // guard

#include "verilated.h"


class Vtb_direction__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_direction___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_direction__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_direction___024unit(Vtb_direction__Syms* symsp, const char* v__name);
    ~Vtb_direction___024unit();
    VL_UNCOPYABLE(Vtb_direction___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
