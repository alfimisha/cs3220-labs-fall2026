// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBTB.h"
#include "VBTB__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VBTB::VBTB(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBTB__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rd_ena{vlSymsp->TOP.rd_ena}
    , outs_valid{vlSymsp->TOP.outs_valid}
    , wr_ena{vlSymsp->TOP.wr_ena}
    , rd_sel{vlSymsp->TOP.rd_sel}
    , out_data{vlSymsp->TOP.out_data}
    , wr_sel{vlSymsp->TOP.wr_sel}
    , wr_data{vlSymsp->TOP.wr_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBTB::VBTB(const char* _vcname__)
    : VBTB(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBTB::~VBTB() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VBTB___024root___eval_debug_assertions(VBTB___024root* vlSelf);
#endif  // VL_DEBUG
void VBTB___024root___eval_static(VBTB___024root* vlSelf);
void VBTB___024root___eval_initial(VBTB___024root* vlSelf);
void VBTB___024root___eval_settle(VBTB___024root* vlSelf);
void VBTB___024root___eval(VBTB___024root* vlSelf);

void VBTB::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBTB::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBTB___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBTB___024root___eval_static(&(vlSymsp->TOP));
        VBTB___024root___eval_initial(&(vlSymsp->TOP));
        VBTB___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBTB___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBTB::eventsPending() { return false; }

uint64_t VBTB::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBTB::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBTB___024root___eval_final(VBTB___024root* vlSelf);

VL_ATTR_COLD void VBTB::final() {
    VBTB___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBTB::hierName() const { return vlSymsp->name(); }
const char* VBTB::modelName() const { return "VBTB"; }
unsigned VBTB::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VBTB::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VBTB___024root__trace_init_top(VBTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBTB___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBTB___024root*>(voidSelf);
    VBTB__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VBTB___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VBTB___024root__trace_register(VBTB___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBTB::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VBTB::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBTB___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
