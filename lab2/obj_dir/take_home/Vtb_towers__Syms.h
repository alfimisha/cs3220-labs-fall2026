// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_TOWERS__SYMS_H_
#define VERILATED_VTB_TOWERS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_towers.h"

// INCLUDE MODULE CLASSES
#include "Vtb_towers___024root.h"
#include "Vtb_towers_tb_towers.h"
#include "Vtb_towers_pipeline.h"
#include "Vtb_towers_AGEX_STAGE.h"
#include "Vtb_towers_WB_STAGE.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_towers__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_towers* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_towers___024root           TOP;
    Vtb_towers_tb_towers           TOP__tb_towers;
    Vtb_towers_pipeline            TOP__tb_towers__dut;
    Vtb_towers_AGEX_STAGE          TOP__tb_towers__dut__my_AGEX_stage;
    Vtb_towers_WB_STAGE            TOP__tb_towers__dut__my_WB_stage;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_towers__dut__my_AGEX_stage;
    VerilatedScope __Vscope_tb_towers__dut__my_WB_stage;

    // CONSTRUCTORS
    Vtb_towers__Syms(VerilatedContext* contextp, const char* namep, Vtb_towers* modelp);
    ~Vtb_towers__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
