// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBHR.h"
#include "VBHR__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBHR::VBHR(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBHR__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , wr_ena{vlSymsp->TOP.wr_ena}
    , out{vlSymsp->TOP.out}
    , wr_data{vlSymsp->TOP.wr_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBHR::VBHR(const char* _vcname__)
    : VBHR(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBHR::~VBHR() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBHR___024root___eval_debug_assertions(VBHR___024root* vlSelf);
#endif  // VL_DEBUG
void VBHR___024root___eval_static(VBHR___024root* vlSelf);
void VBHR___024root___eval_initial(VBHR___024root* vlSelf);
void VBHR___024root___eval_settle(VBHR___024root* vlSelf);
void VBHR___024root___eval(VBHR___024root* vlSelf);

void VBHR::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBHR::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBHR___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBHR___024root___eval_static(&(vlSymsp->TOP));
        VBHR___024root___eval_initial(&(vlSymsp->TOP));
        VBHR___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBHR___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBHR::eventsPending() { return false; }

uint64_t VBHR::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBHR::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBHR___024root___eval_final(VBHR___024root* vlSelf);

VL_ATTR_COLD void VBHR::final() {
    VBHR___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBHR::hierName() const { return vlSymsp->name(); }
const char* VBHR::modelName() const { return "VBHR"; }
unsigned VBHR::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VBHR::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VBHR___024root__trace_init_top(VBHR___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBHR___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBHR___024root*>(voidSelf);
    VBHR__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBHR___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBHR___024root__trace_register(VBHR___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBHR::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VBHR::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBHR___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
