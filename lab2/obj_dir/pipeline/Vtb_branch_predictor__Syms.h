// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_BRANCH_PREDICTOR__SYMS_H_
#define VERILATED_VTB_BRANCH_PREDICTOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_branch_predictor.h"

// INCLUDE MODULE CLASSES
#include "Vtb_branch_predictor___024root.h"
#include "Vtb_branch_predictor_tb_branch_predictor.h"
#include "Vtb_branch_predictor_pipeline.h"
#include "Vtb_branch_predictor_AGEX_STAGE.h"
#include "Vtb_branch_predictor_WB_STAGE.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_branch_predictor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_branch_predictor* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_branch_predictor___024root TOP;
    Vtb_branch_predictor_tb_branch_predictor TOP__tb_branch_predictor;
    Vtb_branch_predictor_pipeline  TOP__tb_branch_predictor__dut;
    Vtb_branch_predictor_AGEX_STAGE TOP__tb_branch_predictor__dut__my_AGEX_stage;
    Vtb_branch_predictor_WB_STAGE  TOP__tb_branch_predictor__dut__my_WB_stage;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_branch_predictor__dut__my_AGEX_stage;
    VerilatedScope __Vscope_tb_branch_predictor__dut__my_WB_stage;

    // CONSTRUCTORS
    Vtb_branch_predictor__Syms(VerilatedContext* contextp, const char* namep, Vtb_branch_predictor* modelp);
    ~Vtb_branch_predictor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
