// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_towers__Syms.h"
#include "Vtb_towers.h"
#include "Vtb_towers___024root.h"
#include "Vtb_towers_tb_towers.h"
#include "Vtb_towers_pipeline.h"
#include "Vtb_towers_AGEX_STAGE.h"
#include "Vtb_towers_WB_STAGE.h"

// FUNCTIONS
Vtb_towers__Syms::~Vtb_towers__Syms()
{
}

Vtb_towers__Syms::Vtb_towers__Syms(VerilatedContext* contextp, const char* namep, Vtb_towers* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_towers{this, Verilated::catName(namep, "tb_towers")}
    , TOP__tb_towers__dut{this, Verilated::catName(namep, "tb_towers.dut")}
    , TOP__tb_towers__dut__my_AGEX_stage{this, Verilated::catName(namep, "tb_towers.dut.my_AGEX_stage")}
    , TOP__tb_towers__dut__my_WB_stage{this, Verilated::catName(namep, "tb_towers.dut.my_WB_stage")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_towers = &TOP__tb_towers;
    TOP__tb_towers.dut = &TOP__tb_towers__dut;
    TOP__tb_towers__dut.my_AGEX_stage = &TOP__tb_towers__dut__my_AGEX_stage;
    TOP__tb_towers__dut.my_WB_stage = &TOP__tb_towers__dut__my_WB_stage;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_towers.__Vconfigure(true);
    TOP__tb_towers__dut.__Vconfigure(true);
    TOP__tb_towers__dut__my_AGEX_stage.__Vconfigure(true);
    TOP__tb_towers__dut__my_WB_stage.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_towers__dut__my_AGEX_stage.configure(this, name(), "tb_towers.dut.my_AGEX_stage", "my_AGEX_stage", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_towers__dut__my_WB_stage.configure(this, name(), "tb_towers.dut.my_WB_stage", "my_WB_stage", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_tb_towers__dut__my_AGEX_stage.varInsert(__Vfinal,"branch_count", &(TOP__tb_towers__dut__my_AGEX_stage.branch_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_towers__dut__my_AGEX_stage.varInsert(__Vfinal,"correct_branch_count", &(TOP__tb_towers__dut__my_AGEX_stage.correct_branch_count), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_towers__dut__my_WB_stage.varInsert(__Vfinal,"WB_counters", &(TOP__tb_towers__dut__my_WB_stage.WB_counters), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 255,0);
        __Vscope_tb_towers__dut__my_WB_stage.varInsert(__Vfinal,"last_WB_value", &(TOP__tb_towers__dut__my_WB_stage.last_WB_value), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1, 1023,0);
    }
}
