// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_direction__Syms.h"
#include "Vtb_direction.h"
#include "Vtb_direction___024root.h"
#include "Vtb_direction_tb_direction.h"
#include "Vtb_direction_pipeline.h"
#include "Vtb_direction___024unit.h"
#include "Vtb_direction_AGEX_STAGE.h"
#include "Vtb_direction_WB_STAGE.h"

// FUNCTIONS
Vtb_direction__Syms::~Vtb_direction__Syms()
{
}

Vtb_direction__Syms::Vtb_direction__Syms(VerilatedContext* contextp, const char* namep, Vtb_direction* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_direction{this, Verilated::catName(namep, "tb_direction")}
    , TOP__tb_direction__dut{this, Verilated::catName(namep, "tb_direction.dut")}
    , TOP__tb_direction__dut__my_AGEX_stage{this, Verilated::catName(namep, "tb_direction.dut.my_AGEX_stage")}
    , TOP__tb_direction__dut__my_WB_stage{this, Verilated::catName(namep, "tb_direction.dut.my_WB_stage")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_direction = &TOP__tb_direction;
    TOP__tb_direction.dut = &TOP__tb_direction__dut;
    TOP__tb_direction__dut.my_AGEX_stage = &TOP__tb_direction__dut__my_AGEX_stage;
    TOP__tb_direction__dut.my_WB_stage = &TOP__tb_direction__dut__my_WB_stage;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_direction.__Vconfigure(true);
    TOP__tb_direction__dut.__Vconfigure(true);
    TOP__tb_direction__dut__my_AGEX_stage.__Vconfigure(true);
    TOP__tb_direction__dut__my_WB_stage.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_direction__dut__my_AGEX_stage.configure(this, name(), "tb_direction.dut.my_AGEX_stage", "my_AGEX_stage", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_direction__dut__my_WB_stage.configure(this, name(), "tb_direction.dut.my_WB_stage", "my_WB_stage", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb_direction__dut__my_AGEX_stage.varInsert(__Vfinal,"branch_count", &(TOP__tb_direction__dut__my_AGEX_stage.branch_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_direction__dut__my_AGEX_stage.varInsert(__Vfinal,"correct_branch_count", &(TOP__tb_direction__dut__my_AGEX_stage.correct_branch_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_direction__dut__my_WB_stage.varInsert(__Vfinal,"WB_counters", &(TOP__tb_direction__dut__my_WB_stage.WB_counters), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 255,0);
        __Vscope_tb_direction__dut__my_WB_stage.varInsert(__Vfinal,"last_WB_value", &(TOP__tb_direction__dut__my_WB_stage.last_WB_value), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 1023,0);
    }
}
