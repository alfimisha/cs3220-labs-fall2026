// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTB_DIRECTION_H_
#define VERILATED_VTB_DIRECTION_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtb_direction__Syms;
class Vtb_direction___024root;
class VerilatedVcdC;
class Vtb_direction_tb_direction;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtb_direction VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtb_direction__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&redirect,0,0);
    VL_OUT8(&stall,0,0);
    VL_OUT8(&branch_flag,0,0);
    VL_OUT8(&history,7,0);
    VL_OUT8(&fetch_index,7,0);
    VL_OUT8(&write_index,7,0);
    VL_OUT8(&prediction,0,0);
    VL_OUT8(&bhr_write,0,0);
    VL_OUT8(&pht_write,0,0);
    VL_OUT8(&pht_data,0,0);
    VL_OUT(&pc,31,0);
    VL_OUT(&fetch_inst,31,0);
    VL_OUT(&fetch_id,31,0);
    VL_OUT(&gp,31,0);
    VL_OUT(&inst,31,0);
    VL_OUT(&branch_pc,31,0);
    VL_OUT(&branch_id,31,0);
    VL_OUT(&operand1,31,0);
    VL_OUT(&operand2,31,0);
    VL_OUT(&actual_pc,31,0);
    VL_OUT(&retired_inst,31,0);
    VL_OUT(&bhr_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtb_direction_tb_direction* const tb_direction;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtb_direction___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtb_direction(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtb_direction(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtb_direction();
  private:
    VL_UNCOPYABLE(Vtb_direction);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
