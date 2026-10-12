// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_towers.h"
#include "Vtb_towers__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtb_towers::Vtb_towers(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_towers__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , branch{vlSymsp->TOP.branch}
    , stall{vlSymsp->TOP.stall}
    , redirect{vlSymsp->TOP.redirect}
    , retired{vlSymsp->TOP.retired}
    , finished{vlSymsp->TOP.finished}
    , gp{vlSymsp->TOP.gp}
    , branch_pc{vlSymsp->TOP.branch_pc}
    , fetch_pc{vlSymsp->TOP.fetch_pc}
    , fetch_id{vlSymsp->TOP.fetch_id}
    , branch_id{vlSymsp->TOP.branch_id}
    , actual_pc{vlSymsp->TOP.actual_pc}
    , tb_towers{vlSymsp->TOP.tb_towers}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_towers::Vtb_towers(const char* _vcname__)
    : Vtb_towers(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_towers::~Vtb_towers() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_towers___024root___eval_debug_assertions(Vtb_towers___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_towers___024root___eval_static(Vtb_towers___024root* vlSelf);
void Vtb_towers___024root___eval_initial(Vtb_towers___024root* vlSelf);
void Vtb_towers___024root___eval_settle(Vtb_towers___024root* vlSelf);
void Vtb_towers___024root___eval(Vtb_towers___024root* vlSelf);

void Vtb_towers::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_towers::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_towers___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_towers___024root___eval_static(&(vlSymsp->TOP));
        Vtb_towers___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_towers___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_towers___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_towers::eventsPending() { return false; }

uint64_t Vtb_towers::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_towers::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_towers___024root___eval_final(Vtb_towers___024root* vlSelf);

VL_ATTR_COLD void Vtb_towers::final() {
    Vtb_towers___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_towers::hierName() const { return vlSymsp->name(); }
const char* Vtb_towers::modelName() const { return "Vtb_towers"; }
unsigned Vtb_towers::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtb_towers::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_towers___024root__trace_init_top(Vtb_towers___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_towers___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_towers___024root*>(voidSelf);
    Vtb_towers__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtb_towers___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtb_towers___024root__trace_register(Vtb_towers___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_towers::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_towers::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_towers___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
