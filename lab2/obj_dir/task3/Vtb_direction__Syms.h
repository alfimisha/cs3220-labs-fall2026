// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_DIRECTION__SYMS_H_
#define VERILATED_VTB_DIRECTION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_direction.h"

// INCLUDE MODULE CLASSES
#include "Vtb_direction___024root.h"
#include "Vtb_direction_tb_direction.h"
#include "Vtb_direction_pipeline.h"
#include "Vtb_direction___024unit.h"
#include "Vtb_direction_AGEX_STAGE.h"
#include "Vtb_direction_WB_STAGE.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_direction__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_direction* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_direction___024root        TOP;
    Vtb_direction_tb_direction     TOP__tb_direction;
    Vtb_direction_pipeline         TOP__tb_direction__dut;
    Vtb_direction_AGEX_STAGE       TOP__tb_direction__dut__my_AGEX_stage;
    Vtb_direction_WB_STAGE         TOP__tb_direction__dut__my_WB_stage;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_direction__dut__my_AGEX_stage;
    VerilatedScope __Vscope_tb_direction__dut__my_WB_stage;

    // CONSTRUCTORS
    Vtb_direction__Syms(VerilatedContext* contextp, const char* namep, Vtb_direction* modelp);
    ~Vtb_direction__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
