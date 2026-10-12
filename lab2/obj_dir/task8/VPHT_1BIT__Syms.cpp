// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPHT_1BIT__Syms.h"
#include "VPHT_1BIT.h"
#include "VPHT_1BIT___024root.h"

// FUNCTIONS
VPHT_1BIT__Syms::~VPHT_1BIT__Syms()
{
}

VPHT_1BIT__Syms::VPHT_1BIT__Syms(VerilatedContext* contextp, const char* namep, VPHT_1BIT* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
