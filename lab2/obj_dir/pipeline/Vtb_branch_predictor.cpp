// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_branch_predictor.h"
#include "Vtb_branch_predictor__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtb_branch_predictor::Vtb_branch_predictor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_branch_predictor__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , redirect{vlSymsp->TOP.redirect}
    , stall{vlSymsp->TOP.stall}
    , branch_flag{vlSymsp->TOP.branch_flag}
    , pc{vlSymsp->TOP.pc}
    , fetch_inst{vlSymsp->TOP.fetch_inst}
    , fetch_id{vlSymsp->TOP.fetch_id}
    , gp{vlSymsp->TOP.gp}
    , inst{vlSymsp->TOP.inst}
    , branch_pc{vlSymsp->TOP.branch_pc}
    , branch_id{vlSymsp->TOP.branch_id}
    , operand1{vlSymsp->TOP.operand1}
    , operand2{vlSymsp->TOP.operand2}
    , actual_pc{vlSymsp->TOP.actual_pc}
    , branches{vlSymsp->TOP.branches}
    , correct{vlSymsp->TOP.correct}
    , retired_inst{vlSymsp->TOP.retired_inst}
    , retired_pc{vlSymsp->TOP.retired_pc}
    , tb_branch_predictor{vlSymsp->TOP.tb_branch_predictor}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_branch_predictor::Vtb_branch_predictor(const char* _vcname__)
    : Vtb_branch_predictor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_branch_predictor::~Vtb_branch_predictor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_branch_predictor___024root___eval_debug_assertions(Vtb_branch_predictor___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_branch_predictor___024root___eval_static(Vtb_branch_predictor___024root* vlSelf);
void Vtb_branch_predictor___024root___eval_initial(Vtb_branch_predictor___024root* vlSelf);
void Vtb_branch_predictor___024root___eval_settle(Vtb_branch_predictor___024root* vlSelf);
void Vtb_branch_predictor___024root___eval(Vtb_branch_predictor___024root* vlSelf);

void Vtb_branch_predictor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_branch_predictor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_branch_predictor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_branch_predictor___024root___eval_static(&(vlSymsp->TOP));
        Vtb_branch_predictor___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_branch_predictor___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_branch_predictor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_branch_predictor::eventsPending() { return false; }

uint64_t Vtb_branch_predictor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_branch_predictor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_branch_predictor___024root___eval_final(Vtb_branch_predictor___024root* vlSelf);

VL_ATTR_COLD void Vtb_branch_predictor::final() {
    Vtb_branch_predictor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_branch_predictor::hierName() const { return vlSymsp->name(); }
const char* Vtb_branch_predictor::modelName() const { return "Vtb_branch_predictor"; }
unsigned Vtb_branch_predictor::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtb_branch_predictor::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_branch_predictor___024root__trace_init_top(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_branch_predictor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_branch_predictor___024root*>(voidSelf);
    Vtb_branch_predictor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtb_branch_predictor___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtb_branch_predictor___024root__trace_register(Vtb_branch_predictor___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_branch_predictor::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_branch_predictor::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_branch_predictor___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
