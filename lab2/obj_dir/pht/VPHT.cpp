// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VPHT.h"
#include "VPHT__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VPHT::VPHT(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VPHT__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , out{vlSymsp->TOP.out}
    , wr_data{vlSymsp->TOP.wr_data}
    , wr_ena{vlSymsp->TOP.wr_ena}
    , rd_sel{vlSymsp->TOP.rd_sel}
    , wr_sel{vlSymsp->TOP.wr_sel}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VPHT::VPHT(const char* _vcname__)
    : VPHT(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VPHT::~VPHT() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VPHT___024root___eval_debug_assertions(VPHT___024root* vlSelf);
#endif  // VL_DEBUG
void VPHT___024root___eval_static(VPHT___024root* vlSelf);
void VPHT___024root___eval_initial(VPHT___024root* vlSelf);
void VPHT___024root___eval_settle(VPHT___024root* vlSelf);
void VPHT___024root___eval(VPHT___024root* vlSelf);

void VPHT::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VPHT::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VPHT___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VPHT___024root___eval_static(&(vlSymsp->TOP));
        VPHT___024root___eval_initial(&(vlSymsp->TOP));
        VPHT___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VPHT___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VPHT::eventsPending() { return false; }

uint64_t VPHT::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VPHT::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VPHT___024root___eval_final(VPHT___024root* vlSelf);

VL_ATTR_COLD void VPHT::final() {
    VPHT___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VPHT::hierName() const { return vlSymsp->name(); }
const char* VPHT::modelName() const { return "VPHT"; }
unsigned VPHT::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VPHT::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VPHT___024root__trace_init_top(VPHT___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPHT___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPHT___024root*>(voidSelf);
    VPHT__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VPHT___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VPHT___024root__trace_register(VPHT___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VPHT::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VPHT::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VPHT___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
