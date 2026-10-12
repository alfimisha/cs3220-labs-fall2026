// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_direction.h"
#include "Vtb_direction__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtb_direction::Vtb_direction(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_direction__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , redirect{vlSymsp->TOP.redirect}
    , stall{vlSymsp->TOP.stall}
    , branch_flag{vlSymsp->TOP.branch_flag}
    , history{vlSymsp->TOP.history}
    , fetch_index{vlSymsp->TOP.fetch_index}
    , write_index{vlSymsp->TOP.write_index}
    , prediction{vlSymsp->TOP.prediction}
    , bhr_write{vlSymsp->TOP.bhr_write}
    , pht_write{vlSymsp->TOP.pht_write}
    , pht_data{vlSymsp->TOP.pht_data}
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
    , retired_inst{vlSymsp->TOP.retired_inst}
    , bhr_data{vlSymsp->TOP.bhr_data}
    , tb_direction{vlSymsp->TOP.tb_direction}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_direction::Vtb_direction(const char* _vcname__)
    : Vtb_direction(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_direction::~Vtb_direction() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_direction___024root___eval_debug_assertions(Vtb_direction___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_direction___024root___eval_static(Vtb_direction___024root* vlSelf);
void Vtb_direction___024root___eval_initial(Vtb_direction___024root* vlSelf);
void Vtb_direction___024root___eval_settle(Vtb_direction___024root* vlSelf);
void Vtb_direction___024root___eval(Vtb_direction___024root* vlSelf);

void Vtb_direction::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_direction::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_direction___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_direction___024root___eval_static(&(vlSymsp->TOP));
        Vtb_direction___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_direction___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_direction___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_direction::eventsPending() { return false; }

uint64_t Vtb_direction::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_direction::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_direction___024root___eval_final(Vtb_direction___024root* vlSelf);

VL_ATTR_COLD void Vtb_direction::final() {
    Vtb_direction___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_direction::hierName() const { return vlSymsp->name(); }
const char* Vtb_direction::modelName() const { return "Vtb_direction"; }
unsigned Vtb_direction::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtb_direction::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_direction___024root__trace_init_top(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_direction___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_direction___024root*>(voidSelf);
    Vtb_direction__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtb_direction___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtb_direction___024root__trace_register(Vtb_direction___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_direction::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_direction::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_direction___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
