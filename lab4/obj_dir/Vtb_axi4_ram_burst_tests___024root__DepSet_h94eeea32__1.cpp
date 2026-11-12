// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram_burst_tests.h for the primary calling header

#include "verilated.h"

#include "Vtb_axi4_ram_burst_tests__Syms.h"
#include "Vtb_axi4_ram_burst_tests___024root.h"

VlCoroutine Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__0__1(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__0__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__cycles;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__cycles = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__limit;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__limit = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__cycles;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__cycles = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__limit;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__limit = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w = 0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd 
        = vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__l 
        = vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out;
    if (VL_UNLIKELY((0xa0000002U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd))) {
        VL_WRITEF("  FAIL: slave not usable after reserved burst, mem[0x388]=0x%0x exp 0xa0000002\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 3U;
    vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr = 0x38cU;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd 
        = vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__l 
        = vlSelf->__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out;
    if (VL_UNLIKELY((0xa0000003U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd))) {
        VL_WRITEF("  FAIL: slave not usable after reserved burst, mem[0x38c]=0x%0x exp 0xa0000003\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 4U;
    if (VL_UNLIKELY((vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                     != vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__pre_err))) {
        VL_WRITEF("  FAIL: reserved burst type caused %0d channel timeout(s)\n",
                  32,(vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                      - vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__pre_err));
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc)) {
        VL_WRITEF("  PASS: reserved burst type stays live and leaves the slave usable\n");
    } else {
        vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       210);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("[BURST 8] AW intrusion mid-burst: AWREADY must stay low until the write completes\n");
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0x400U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0x404U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0x408U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0x40cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0x480U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0x484U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0x488U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0x48cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 4U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__b_hold_viol = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_viol_addr = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_watch_en = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       300);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr = 0x400U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__id = 0x11U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__len;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__bt;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           321);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       323);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data = 0xc0000000U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data = 0xc0000001U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__cycles = 6U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__addr = 0x480U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       371);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid = 0xeeU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__cycles)) {
        if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg) {
            __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted = 1U;
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           377);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c);
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__accepted 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data = 0xc0000002U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__last = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data = 0xc0000003U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           343);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w);
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg;
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got))))) {
        VL_WRITEF("  TIMEOUT: BVALID\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       346);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__bgot 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       306);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_watch_en = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__accepted) 
                     | (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol)))) {
        VL_WRITEF("  FAIL: slave accepted a second AW (0x0480) while the 0x0400 burst was open\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol)) {
        VL_WRITEF("  FAIL: AWREADY was asserted while the write burst still owed beats\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__bgot))))) {
        VL_WRITEF("  FAIL: no BVALID for the interrupted burst\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0x400U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    if (VL_UNLIKELY((0xc0000000U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x400]=0x%0x exp 0xc0000000 (burst retargeted by the intruding AW)\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0x404U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    if (VL_UNLIKELY((0xc0000001U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x404]=0x%0x exp 0xc0000001 (burst retargeted by the intruding AW)\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0x408U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    if (VL_UNLIKELY((0xc0000002U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x408]=0x%0x exp 0xc0000002 (burst retargeted by the intruding AW)\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0x40cU;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    if (VL_UNLIKELY((0xc0000003U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x40c]=0x%0x exp 0xc0000003 (burst retargeted by the intruding AW)\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0x480U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    if (VL_UNLIKELY((0U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x480]=0x%0x, beats leaked to the intruder's address\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0x484U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    if (VL_UNLIKELY((0U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x484]=0x%0x, beats leaked to the intruder's address\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0x488U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    if (VL_UNLIKELY((0U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x488]=0x%0x, beats leaked to the intruder's address\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0x48cU;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    if (VL_UNLIKELY((0U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x48c]=0x%0x, beats leaked to the intruder's address\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 4U;
    if (VL_UNLIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc)) {
        VL_WRITEF("  PASS: AW intrusion rejected, burst landed intact\n");
    } else {
        vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       210);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("[BURST 9] read transaction started mid-write-burst\n");
    vlSelf->tb_axi4_ram_burst_tests__DOT__expv[0U] = 0xd0000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__expv
        [0U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0x500U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__expv[1U] = 0xd0000001U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__expv
        [1U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0x504U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__expv[2U] = 0xd0000002U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__expv
        [2U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0x508U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__expv[3U] = 0xd0000003U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__expv
        [3U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0x50cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0x440U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0x444U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0x448U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0x44cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 4U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__b_hold_viol = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_viol_addr = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_watch_en = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       300);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr = 0x440U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__id = 0x22U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__len;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__bt;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           321);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       323);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data = 0xc1000000U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data = 0xc1000001U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base = 0x500U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       390);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__len;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__bt;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           394);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: burst AR addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       396);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g = 0U;
    while ((((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g)) 
            & VL_GTS_III(32, 0x20U, vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                         & vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           402);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g);
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data = 0xc1000002U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__last = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data = 0xc1000003U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           343);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w);
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg;
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got))))) {
        VL_WRITEF("  TIMEOUT: BVALID\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       346);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__bgot 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       306);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_watch_en = 0U;
    if (VL_UNLIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol)) {
        VL_WRITEF("  FAIL: read traffic re-asserted AWREADY while the write burst was open\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol)) {
        VL_WRITEF("  FAIL: a second AW was accepted while the write burst was open\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__bgot))))) {
        VL_WRITEF("  FAIL: no BVALID after the read intrusion\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    if (VL_UNLIKELY((1U & (~ ((((((4U == vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                                  & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
                                 & (vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat
                                    [0U] == vlSelf->tb_axi4_ram_burst_tests__DOT__expv
                                    [0U])) & (vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat
                                              [1U] 
                                              == vlSelf->tb_axi4_ram_burst_tests__DOT__expv
                                              [1U])) 
                               & (vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat
                                  [2U] == vlSelf->tb_axi4_ram_burst_tests__DOT__expv
                                  [2U])) & (vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat
                                            [3U] == 
                                            vlSelf->tb_axi4_ram_burst_tests__DOT__expv
                                            [3U])))))) {
        VL_WRITEF("  FAIL: mid-write read beats=%0d got[%0x %0x %0x %0x] exp[%0x %0x %0x %0x]\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat_n,
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat
                  [0U],32,vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat
                  [1U],32,vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat
                  [2U],32,vlSelf->tb_axi4_ram_burst_tests__DOT__rbeat
                  [3U],32,vlSelf->tb_axi4_ram_burst_tests__DOT__expv
                  [0U],32,vlSelf->tb_axi4_ram_burst_tests__DOT__expv
                  [1U],32,vlSelf->tb_axi4_ram_burst_tests__DOT__expv
                  [2U],32,vlSelf->tb_axi4_ram_burst_tests__DOT__expv
                  [3U]);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0x440U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    if (VL_UNLIKELY((0xc1000000U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x440]=0x%0x exp 0xc1000000 (write burst disturbed by the read)\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0x444U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    if (VL_UNLIKELY((0xc1000001U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x444]=0x%0x exp 0xc1000001 (write burst disturbed by the read)\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0x448U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    if (VL_UNLIKELY((0xc1000002U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x448]=0x%0x exp 0xc1000002 (write burst disturbed by the read)\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0x44cU;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    if (VL_UNLIKELY((0xc1000003U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x44c]=0x%0x exp 0xc1000003 (write burst disturbed by the read)\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 4U;
    if (VL_UNLIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc)) {
        VL_WRITEF("  PASS: concurrent read left the open write burst alone\n");
    } else {
        vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       210);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       211);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       212);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("[BURST 10] BREADY withheld: the response must be held, not dropped or overtaken\n");
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0x4c0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0x4c4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0x4c8U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0x4ccU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0x580U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0x584U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0x588U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0x58cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 4U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__errors;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__b_hold_viol = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_viol_addr = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_watch_en = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       300);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr = 0x4c0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__id = 0x33U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__len;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__bt;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           321);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       323);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data = 0xc2000000U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data = 0xc2000001U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data = 0xc2000002U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__last = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data = 0xc2000003U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       332);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__last;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           334);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W data=0x%0x\n",32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       336);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__limit = 0x100U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got = 0U;
    while (((~ (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got)) 
            & VL_LTS_III(32, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__limit))) {
        if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg) {
            __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got = 1U;
        } else {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               358);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w);
        }
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__bseen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       1062);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       1062);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       1062);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       1062);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       1062);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       1062);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__cycles = 6U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__addr = 0x580U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       371);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid = 0xeeU;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__cycles)) {
        if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg) {
            __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted = 1U;
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           377);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c);
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__accepted 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__limit = 0x100U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got = 0U;
    while (((~ (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got)) 
            & VL_LTS_III(32, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__limit))) {
        if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg) {
            __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got = 1U;
        } else {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               358);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w);
        }
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__bgot 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       1066);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       306);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__aw_watch_en = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__bseen))))) {
        VL_WRITEF("  FAIL: no BVALID after the last beat\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__b_hold_viol)) {
        VL_WRITEF("  FAIL: BVALID was withdrawn while BREADY was low, the response is lost\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__accepted) 
                     | (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol)))) {
        VL_WRITEF("  FAIL: slave accepted a new AW (0x0580) while the B response was still outstanding\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol)) {
        VL_WRITEF("  FAIL: AWREADY was asserted while the write burst still owed beats\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__bgot))))) {
        VL_WRITEF("  FAIL: no BVALID once BREADY was finally asserted, the write never completed\n");
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0x4c0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    if (VL_UNLIKELY((0xc2000000U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x4c0]=0x%0x exp 0xc2000000\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0x4c4U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    if (VL_UNLIKELY((0xc2000001U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x4c4]=0x%0x exp 0xc2000001\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0x4c8U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    if (VL_UNLIKELY((0xc2000002U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x4c8]=0x%0x exp 0xc2000002\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0x4ccU;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    if (VL_UNLIKELY((0xc2000003U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x4cc]=0x%0x exp 0xc2000003\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0x580U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    if (VL_UNLIKELY((0U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x580]=0x%0x, beats leaked to the intruder's address\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0x584U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    if (VL_UNLIKELY((0U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x584]=0x%0x, beats leaked to the intruder's address\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0x588U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    if (VL_UNLIKELY((0U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x588]=0x%0x, beats leaked to the intruder's address\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0x58cU;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    if (VL_UNLIKELY((0U != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF("  FAIL: mem[0x58c]=0x%0x, beats leaked to the intruder's address\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__data = 0xc2ffffffU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr = 0x5c0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__id = 0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__id;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           226);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF("  TIMEOUT: AW addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       228);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__data;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__strb;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           230);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF("  TIMEOUT: W addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       232);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w = 0U;
        while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w))) {
            co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(negedge clk)", 
                                                               "tb_axi4_ram_burst_tests.v", 
                                                               234);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            VL_WRITEF("  TIMEOUT: B addr=0x%0x\n",16,
                      __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr);
            vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           236);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr = 0x5c0U;
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       246);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           250);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF("  TIMEOUT: AR addr=0x%0x\n",16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       252);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w = 0U;
    while (((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w))) {
        co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "tb_axi4_ram_burst_tests.v", 
                                                           253);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w);
    }
    if (VL_LIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF("  TIMEOUT: RVALID addr=0x%0x\n",
                  16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr);
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c23eb16__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out 
            = vlSelf->tb_axi4_ram_burst_tests__DOT____Vxrand_h9c26aeca__0;
    }
    co_await vlSelf->__VtrigSched_h44bcd224__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "tb_axi4_ram_burst_tests.v", 
                                                       260);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out;
    vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out;
    if (VL_UNLIKELY((0xc2ffffffU != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF("  FAIL: write channel wedged after the stalled response, mem[0x05C0]=0x%0x\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY((vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                     != vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err))) {
        VL_WRITEF("  FAIL: %0d channel timeout(s) caused by the withheld BREADY\n",
                  32,(vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
                      - vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err));
        vlSelf->tb_axi4_ram_burst_tests__DOT__errors 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err;
        vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelf->tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc)) {
        VL_WRITEF("  PASS: response held until BREADY and never overtaken\n");
    } else {
        vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    VL_WRITEF("[SUMMARY B] burst corner fails=%0d, infra=%0d\n",
              32,vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail,
              32,vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
    if (((0U == vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail) 
         & (0U == vlSelf->tb_axi4_ram_burst_tests__DOT__errors))) {
        VL_WRITEF("[RESULT B] ALL burst corner tests PASSED\n");
        vlSelf->corner_pass = 1U;
    } else {
        VL_WRITEF("[RESULT B] burst corner tests FAILED: %0d corner(s), %0d infra error(s)\n           (a correct implementation passes all corners)\n",
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__corner_fail,
                  32,vlSelf->tb_axi4_ram_burst_tests__DOT__errors);
        vlSelf->corner_pass = 0U;
    }
    VL_WRITEF("=========================================================\n[RESULT] burst edge=%0s  burst corner=%0s\n=========================================================\n",
              32,((IData)(vlSelf->edge_pass) ? 0x50415353U
                   : 0x4641494cU),32,((IData)(vlSelf->corner_pass)
                                       ? 0x50415353U
                                       : 0x4641494cU));
    vlSelf->done = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtb_axi4_ram_burst_tests___024root___ico_sequent__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut_rst = 
        ((IData)(vlSelf->reset) | (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst));
}

void Vtb_axi4_ram_burst_tests___024root___eval_ico(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tests___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_axi4_ram_burst_tests___024root___act_comb__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut_rst = 
        ((IData)(vlSelf->reset) | (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst));
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready)));
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_reg;
    if ((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg)))) {
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next 
                = ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize))
                    ? (7U & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize))
                    : 2U);
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_next 
                = (0xffffU & (((0x1fU >= ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize))
                                           ? (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize)
                                           : 2U)) ? 
                               (((IData)(1U) + (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen)) 
                                << ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize))
                                     ? (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize)
                                     : 2U)) : 0U) - (IData)(1U)));
        }
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_reg;
    if ((0U != (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
            if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg) 
                 & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid))) {
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en = 1U;
                if ((0U >= (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg))) {
                    if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                               | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
                        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next 
                            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
                    }
                }
            }
        } else if ((2U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
            if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                       | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
            }
        }
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next 
        = ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg) 
           & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready)));
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next 
            = (1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next)));
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next 
                = ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize))
                    ? (7U & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize))
                    : 2U);
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 1U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_next 
                = (0xffffU & (((0x1fU >= ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize))
                                           ? (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize)
                                           : 2U)) ? 
                               (((IData)(1U) + (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen)) 
                                << ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize))
                                     ? (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize)
                                     : 2U)) : 0U) - (IData)(1U)));
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 1U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr;
        } else {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 1U;
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid))) {
            if ((0U >= (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg))) {
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
                if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                           | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
                    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next = 1U;
                    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
                }
            }
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
                = (0xffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg) 
                            - (IData)(1U)));
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next 
                = ((0U < (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg))
                    ? 1U : ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                                   | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))
                             ? 0U : 2U));
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__wrap_mask 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_reg;
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__burst 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg;
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__size 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg;
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__addr 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr 
                = (0xffffU & (((IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__addr) 
                               & (~ (((IData)(1U) << (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__size)) 
                                     - (IData)(1U)))) 
                              + ((IData)(1U) << (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__size))));
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__Vfuncout 
                = ((0U == (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__burst))
                    ? (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__addr)
                    : ((2U == (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__burst))
                        ? (((IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__addr) 
                            & (~ (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__wrap_mask))) 
                           | ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr) 
                              & (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__wrap_mask)))
                        : (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr)));
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
                = vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__Vfuncout;
        } else {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                   | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next = 1U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
        } else {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 2U;
        }
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg;
    if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) {
        if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) {
            if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready) 
                       | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg))))) {
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next = 1U;
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en = 1U;
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg));
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg;
                if ((0U >= (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg))) {
                    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 1U;
                }
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg) 
                                - (IData)(1U)));
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__wrap_mask 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_reg;
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__burst 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg;
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__size 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg;
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__addr 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg;
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr 
                    = (0xffffU & (((IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__addr) 
                                   & (~ (((IData)(1U) 
                                          << (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__size)) 
                                         - (IData)(1U)))) 
                                  + ((IData)(1U) << (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__size))));
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__Vfuncout 
                    = ((0U == (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__burst))
                        ? (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__addr)
                        : ((2U == (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__burst))
                            ? (((IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__addr) 
                                & (~ (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__wrap_mask))) 
                               | ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr) 
                                  & (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__wrap_mask)))
                            : (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr)));
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
                    = vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__Vfuncout;
            }
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next 
                = (1U & ((~ ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready) 
                             | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)))) 
                         | (0U < (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg))));
        }
    } else {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 0U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 1U;
        } else {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 0U;
        }
    }
}

void Vtb_axi4_ram_burst_tests___024root___eval_act(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_act\n"); );
    // Body
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tests___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_axi4_ram_burst_tests___024root___nba_sequent__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*13:0*/ __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0;
    __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0;
    __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0;
    __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0;
    __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1;
    __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1;
    __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1;
    __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1;
    __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 0;
    SData/*13:0*/ __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2;
    __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2;
    __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2;
    __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2;
    __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0;
    SData/*13:0*/ __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3;
    __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3;
    __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3;
    __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3;
    __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0;
    // Body
    __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 0U;
    __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0U;
    __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__i = 4U;
    if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb))) {
        __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 
            = (0xffU & vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata);
        __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 1U;
        __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0U;
        __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 
            = (0x3fffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
    }
    if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb) 
            >> 1U))) {
        __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 
            = (0xffU & (vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
                        >> 8U));
        __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 1U;
        __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 8U;
        __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 
            = (0x3fffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
    }
    if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb) 
            >> 2U))) {
        __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 
            = (0xffU & (vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
                        >> 0x10U));
        __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 1U;
        __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0x10U;
        __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 
            = (0x3fffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
    }
    if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb) 
            >> 3U))) {
        __Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 
            = (vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
               >> 0x18U);
        __Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 1U;
        __Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0x18U;
        __Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 
            = (0x3fffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next;
    if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut_rst) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg = 0U;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg = 0U;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg = 0U;
    }
    if (vlSelf->tb_axi4_ram_burst_tests__DOT__aw_watch_en) {
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__b_outstanding) 
             & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg)))) {
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__b_hold_viol))))) {
                VL_WRITEF("  VIOL: BVALID dropped at t=%0t without a BREADY handshake\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
            vlSelf->tb_axi4_ram_burst_tests__DOT__b_hold_viol = 1U;
        }
        if ((((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__wr_data_phase) 
              & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
             & (~ (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
                    & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                   & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast))))) {
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol))))) {
                VL_WRITEF("  VIOL: AWREADY asserted at t=%0t with the write burst still owing beats\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9);
            }
            vlSelf->tb_axi4_ram_burst_tests__DOT__aw_ready_viol = 1U;
        }
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg) 
             & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready)))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__b_outstanding = 1U;
        }
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__b_outstanding = 0U;
        }
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))) {
            if (vlSelf->tb_axi4_ram_burst_tests__DOT__wr_inflight) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol))))) {
                    VL_WRITEF("  VIOL: second AW accepted (addr=0x%0x) at t=%0t before the current write returned B\n",
                              16,vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr,
                              64,VL_TIME_UNITED_Q(1000),
                              -9);
                }
                vlSelf->tb_axi4_ram_burst_tests__DOT__aw_viol_addr 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr;
                vlSelf->tb_axi4_ram_burst_tests__DOT__aw_accept_viol = 1U;
            }
            vlSelf->tb_axi4_ram_burst_tests__DOT__wr_data_phase = 1U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__wr_inflight = 1U;
        }
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__wr_inflight = 0U;
        }
        if ((((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
              & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wlast))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__wr_data_phase = 0U;
        }
    } else {
        vlSelf->tb_axi4_ram_burst_tests__DOT__wr_inflight = 0U;
        vlSelf->tb_axi4_ram_burst_tests__DOT__wr_data_phase = 0U;
        vlSelf->tb_axi4_ram_burst_tests__DOT__b_outstanding = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg)) 
               | (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready)))) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_pipe_reg 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_reg;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg;
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next;
    if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg 
            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
            [(0x3fffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg) 
                         >> 2U))];
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_reg 
            = ((1U & (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_written[
                      (0x1ffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg) 
                                 >> 7U))] >> (0x1fU 
                                              & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg) 
                                                 >> 2U))))
                ? 0U : 2U);
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next;
    if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut_rst) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg = 0U;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg = 0U;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg = 0U;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg = 0U;
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg = 0U;
    }
    if (__Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[__Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0))) 
                & vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
                [__Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0))));
    }
    if (__Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[__Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1))) 
                & vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
                [__Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1))));
    }
    if (__Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[__Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2))) 
                & vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
                [__Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2))));
    }
    if (__Vdlyvset__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[__Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3))) 
                & vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
                [__Vdlyvdim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3))));
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next;
    if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & (0U != (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wstrb)))) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_written[(0x1ffU 
                                                                     & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                                                                        >> 7U))] 
            = (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_written[
               (0x1ffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 7U))] | ((IData)(1U) << 
                                      (0x1fU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                                                >> 2U))));
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next;
}

VL_INLINE_OPT void Vtb_axi4_ram_burst_tests___024root___nba_comb__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_reg;
    if ((1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg)))) {
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arid;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next 
                = ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize))
                    ? (7U & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize))
                    : 2U);
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arburst;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_next 
                = (0xffffU & (((0x1fU >= ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize))
                                           ? (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize)
                                           : 2U)) ? 
                               (((IData)(1U) + (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen)) 
                                << ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize))
                                     ? (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arsize)
                                     : 2U)) : 0U) - (IData)(1U)));
        }
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut_rst = 
        ((IData)(vlSelf->reset) | (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__force_rst));
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next 
        = ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg) 
           & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready)));
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready)));
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 0U;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg;
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en = 0U;
    if ((0U != (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
            if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg) 
                 & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid))) {
                if ((0U >= (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg))) {
                    if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                               | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
                        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next 
                            = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
                    }
                }
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en = 1U;
            }
        } else if ((2U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
            if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                       | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
            }
        }
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg;
    if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) {
        if (vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) {
            if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready) 
                       | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg))))) {
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next = 1U;
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en = 1U;
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg));
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg;
                if ((0U >= (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg))) {
                    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 1U;
                }
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg) 
                                - (IData)(1U)));
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__wrap_mask 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_wrap_mask_reg;
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__burst 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg;
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__size 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg;
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__addr 
                    = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg;
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr 
                    = (0xffffU & (((IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__addr) 
                                   & (~ (((IData)(1U) 
                                          << (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__size)) 
                                         - (IData)(1U)))) 
                                  + ((IData)(1U) << (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__size))));
                vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__Vfuncout 
                    = ((0U == (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__burst))
                        ? (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__addr)
                        : ((2U == (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__burst))
                            ? (((IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__addr) 
                                & (~ (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__wrap_mask))) 
                               | ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr) 
                                  & (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__wrap_mask)))
                            : (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr)));
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
                    = vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__116__Vfuncout;
            }
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next 
                = (1U & ((~ ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_rready) 
                             | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)))) 
                         | (0U < (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg))));
        }
    } else {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arvalid))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 0U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_arlen;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_araddr;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 1U;
        } else {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 0U;
        }
    }
    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
        = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next 
            = (1U & (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next)));
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awvalid))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awburst;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awid;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next 
                = ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize))
                    ? (7U & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize))
                    : 2U);
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 1U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_next 
                = (0xffffU & (((0x1fU >= ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize))
                                           ? (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize)
                                           : 2U)) ? 
                               (((IData)(1U) + (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen)) 
                                << ((2U > (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize))
                                     ? (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awsize)
                                     : 2U)) : 0U) - (IData)(1U)));
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awlen;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 1U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_awaddr;
        } else {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 1U;
        if (((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg) 
             & (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_wvalid))) {
            if ((0U >= (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg))) {
                vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
                if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                           | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
                    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next = 1U;
                    vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
                }
            }
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
                = (0xffU & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg) 
                            - (IData)(1U)));
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next 
                = ((0U < (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg))
                    ? 1U : ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                                   | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))
                             ? 0U : 2U));
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__wrap_mask 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_wrap_mask_reg;
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__burst 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg;
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__size 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg;
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__addr 
                = vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr 
                = (0xffffU & (((IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__addr) 
                               & (~ (((IData)(1U) << (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__size)) 
                                     - (IData)(1U)))) 
                              + ((IData)(1U) << (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__size))));
            vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__Vfuncout 
                = ((0U == (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__burst))
                    ? (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__addr)
                    : ((2U == (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__burst))
                        ? (((IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__addr) 
                            & (~ (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__wrap_mask))) 
                           | ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr) 
                              & (IData)(vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__wrap_mask)))
                        : (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__Vstatic__incr)));
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
                = vlSelf->__Vfunc_tb_axi4_ram_burst_tests__DOT__dut__DOT__next_addr__115__Vfuncout;
        } else {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 1U;
        }
    } else if ((2U == (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        if ((1U & ((IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__s_axi_bready) 
                   | (~ (IData)(vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_reg))))) {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next = 1U;
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
        } else {
            vlSelf->tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 2U;
        }
    }
}

void Vtb_axi4_ram_burst_tests___024root___eval_nba(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tests___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tests___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_axi4_ram_burst_tests___024root___eval_triggers__ico(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__ico(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_axi4_ram_burst_tests___024root___eval_triggers__act(Vtb_axi4_ram_burst_tests___024root* vlSelf);
void Vtb_axi4_ram_burst_tests___024root___timing_commit(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__act(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_axi4_ram_burst_tests___024root___timing_resume(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__nba(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axi4_ram_burst_tests___024root___eval(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtb_axi4_ram_burst_tests___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtb_axi4_ram_burst_tests___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("tb_axi4_ram_burst_tests.v", 60, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtb_axi4_ram_burst_tests___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_axi4_ram_burst_tests___024root___eval_triggers__act(vlSelf);
            Vtb_axi4_ram_burst_tests___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_axi4_ram_burst_tests___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_axi4_ram_burst_tests.v", 60, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtb_axi4_ram_burst_tests___024root___timing_resume(vlSelf);
                Vtb_axi4_ram_burst_tests___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_axi4_ram_burst_tests___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_axi4_ram_burst_tests.v", 60, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_axi4_ram_burst_tests___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_axi4_ram_burst_tests___024root___timing_commit(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9fca03cb__0.commit("@(negedge reset)");
    }
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h44bcd263__0.commit("@(posedge clk)");
    }
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h44bcd224__0.commit("@(negedge clk)");
    }
}

void Vtb_axi4_ram_burst_tests___024root___timing_resume(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9fca03cb__0.resume("@(negedge reset)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h44bcd263__0.resume("@(posedge clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h44bcd224__0.resume("@(negedge clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_axi4_ram_burst_tests___024root___eval_debug_assertions(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
