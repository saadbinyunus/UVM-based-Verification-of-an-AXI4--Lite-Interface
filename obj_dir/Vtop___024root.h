// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top__DOT__ACLK;
    CData/*0:0*/ top__DOT__ARESETN;
    CData/*0:0*/ top__DOT__S_ARVALID;
    CData/*0:0*/ top__DOT__S_RREADY;
    CData/*0:0*/ top__DOT__S_AWVALID;
    CData/*3:0*/ top__DOT__S_WSTRB;
    CData/*0:0*/ top__DOT__S_WVALID;
    CData/*0:0*/ top__DOT__S_BREADY;
    CData/*2:0*/ top__DOT__DUT__DOT__state;
    CData/*2:0*/ top__DOT__DUT__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__ACLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__ARESETN__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__S_ARADDR;
    IData/*31:0*/ top__DOT__S_AWADDR;
    IData/*31:0*/ top__DOT__S_WDATA;
    IData/*31:0*/ top__DOT__unnamedblk1__DOT__timeout;
    IData/*31:0*/ top__DOT__DUT__DOT__addr;
    IData/*31:0*/ top__DOT__DUT__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__DUT__DOT__register;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc2bb3b81__0;
    VlTriggerScheduler __VtrigSched_hdfb31e52__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
