// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf);
VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf);

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtop___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtop___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ACLK__0 
        = vlSelf->top__DOT__ACLK;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ARESETN__0 
        = vlSelf->top__DOT__ARESETN;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->top__DOT__ACLK = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb/top.sv", 
                                           53);
        vlSelf->top__DOT__ACLK = (1U & (~ (IData)(vlSelf->top__DOT__ACLK)));
    }
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSelf->top__DOT__ARESETN = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb/top.sv", 
                                       59);
    vlSelf->top__DOT__ARESETN = 1U;
}

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__Vtiming__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    vlSelf->top__DOT__S_AWADDR = 0U;
    vlSelf->top__DOT__S_AWVALID = 0U;
    vlSelf->top__DOT__S_WDATA = 0U;
    vlSelf->top__DOT__S_WSTRB = 0xfU;
    vlSelf->top__DOT__S_WVALID = 0U;
    vlSelf->top__DOT__S_BREADY = 1U;
    vlSelf->top__DOT__S_ARADDR = 0U;
    vlSelf->top__DOT__S_ARVALID = 0U;
    vlSelf->top__DOT__S_RREADY = 1U;
    co_await vlSelf->__VtrigSched_hc2bb3b81__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge top.ARESETN)", 
                                                       "tb/top.sv", 
                                                       71);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb/top.sv", 
                                       74);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__S_AWADDR = 5U;
    vlSelf->top__DOT__S_AWVALID = 1U;
    vlSelf->top__DOT__S_WDATA = 0xdeadbeefU;
    vlSelf->top__DOT__S_WVALID = 1U;
    vlSelf->top__DOT__unnamedblk1__DOT__timeout = 0x32U;
    while (((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state)) 
            & VL_LTS_III(32, 0U, vlSelf->top__DOT__unnamedblk1__DOT__timeout))) {
        co_await vlSelf->__VtrigSched_hdfb31e52__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top.ACLK)", 
                                                           "tb/top.sv", 
                                                           81);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->top__DOT__unnamedblk1__DOT__timeout 
            = (vlSelf->top__DOT__unnamedblk1__DOT__timeout 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((0U == vlSelf->top__DOT__unnamedblk1__DOT__timeout))) {
        VL_WRITEF("Warning: Write handshake never completed!\n");
    }
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb/top.sv", 
                                       85);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__S_AWVALID = 0U;
    vlSelf->top__DOT__S_WVALID = 0U;
    vlSelf->top__DOT__unnamedblk1__DOT__timeout = 0x32U;
    while (((2U != (IData)(vlSelf->top__DOT__DUT__DOT__state)) 
            & VL_LTS_III(32, 0U, vlSelf->top__DOT__unnamedblk1__DOT__timeout))) {
        co_await vlSelf->__VtrigSched_hdfb31e52__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top.ACLK)", 
                                                           "tb/top.sv", 
                                                           91);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->top__DOT__unnamedblk1__DOT__timeout 
            = (vlSelf->top__DOT__unnamedblk1__DOT__timeout 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((0U == vlSelf->top__DOT__unnamedblk1__DOT__timeout))) {
        VL_WRITEF("Warning: Write response never received!\n");
    }
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb/top.sv", 
                                       95);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__S_ARADDR = 5U;
    vlSelf->top__DOT__S_ARVALID = 1U;
    vlSelf->top__DOT__unnamedblk1__DOT__timeout = 0x32U;
    while (((3U != (IData)(vlSelf->top__DOT__DUT__DOT__state)) 
            & VL_LTS_III(32, 0U, vlSelf->top__DOT__unnamedblk1__DOT__timeout))) {
        co_await vlSelf->__VtrigSched_hdfb31e52__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top.ACLK)", 
                                                           "tb/top.sv", 
                                                           103);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->top__DOT__unnamedblk1__DOT__timeout 
            = (vlSelf->top__DOT__unnamedblk1__DOT__timeout 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((0U == vlSelf->top__DOT__unnamedblk1__DOT__timeout))) {
        VL_WRITEF("Warning: Read handshake never completed!\n");
    }
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb/top.sv", 
                                       107);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->top__DOT__S_ARVALID = 0U;
    vlSelf->top__DOT__unnamedblk1__DOT__timeout = 0x32U;
    while (((4U != (IData)(vlSelf->top__DOT__DUT__DOT__state)) 
            & VL_LTS_III(32, 0U, vlSelf->top__DOT__unnamedblk1__DOT__timeout))) {
        co_await vlSelf->__VtrigSched_hdfb31e52__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge top.ACLK)", 
                                                           "tb/top.sv", 
                                                           113);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->top__DOT__unnamedblk1__DOT__timeout 
            = (vlSelf->top__DOT__unnamedblk1__DOT__timeout 
               - (IData)(1U));
    }
    if ((0U == vlSelf->top__DOT__unnamedblk1__DOT__timeout)) {
        VL_WRITEF("Warning: Read data never valid!\n");
    } else {
        VL_WRITEF("Read data: %x\n",32,((4U == (IData)(vlSelf->top__DOT__DUT__DOT__state))
                                         ? vlSelf->top__DOT__DUT__DOT__register
                                        [(0x1fU & vlSelf->top__DOT__DUT__DOT__addr)]
                                         : 0U));
    }
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb/top.sv", 
                                       118);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "tb/top.sv", 
                                       121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb/top.sv", 122, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((7ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__DUT__DOT__register__v0;
    __Vdlyvdim0__top__DOT__DUT__DOT__register__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__DUT__DOT__register__v0;
    __Vdlyvval__top__DOT__DUT__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__DUT__DOT__register__v0;
    __Vdlyvset__top__DOT__DUT__DOT__register__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__DUT__DOT__register__v1;
    __Vdlyvset__top__DOT__DUT__DOT__register__v1 = 0;
    // Body
    __Vdlyvset__top__DOT__DUT__DOT__register__v0 = 0U;
    __Vdlyvset__top__DOT__DUT__DOT__register__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ARESETN)))) {
        vlSelf->top__DOT__DUT__DOT__i = 0x20U;
    }
    if (vlSelf->top__DOT__ARESETN) {
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state))) {
            __Vdlyvval__top__DOT__DUT__DOT__register__v0 
                = vlSelf->top__DOT__S_WDATA;
            __Vdlyvset__top__DOT__DUT__DOT__register__v0 = 1U;
            __Vdlyvdim0__top__DOT__DUT__DOT__register__v0 
                = (0x1fU & vlSelf->top__DOT__S_AWADDR);
        }
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__state))) {
            if ((3U == (IData)(vlSelf->top__DOT__DUT__DOT__state))) {
                vlSelf->top__DOT__DUT__DOT__addr = vlSelf->top__DOT__S_ARADDR;
            }
        }
        vlSelf->top__DOT__DUT__DOT__state = vlSelf->top__DOT__DUT__DOT__next_state;
    } else {
        __Vdlyvset__top__DOT__DUT__DOT__register__v1 = 1U;
        vlSelf->top__DOT__DUT__DOT__state = 0U;
    }
    if (__Vdlyvset__top__DOT__DUT__DOT__register__v0) {
        vlSelf->top__DOT__DUT__DOT__register[__Vdlyvdim0__top__DOT__DUT__DOT__register__v0] 
            = __Vdlyvval__top__DOT__DUT__DOT__register__v0;
    }
    if (__Vdlyvset__top__DOT__DUT__DOT__register__v1) {
        vlSelf->top__DOT__DUT__DOT__register[0U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[1U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[2U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[3U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[4U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[5U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[6U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[7U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[8U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[9U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0xaU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0xbU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0xcU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0xdU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0xeU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0xfU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x10U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x11U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x12U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x13U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x14U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x15U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x16U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x17U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x18U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x19U] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x1aU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x1bU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x1cU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x1dU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x1eU] = 0U;
        vlSelf->top__DOT__DUT__DOT__register[0x1fU] = 0U;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtop___024root___timing_resume(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hc2bb3b81__0.resume("@(posedge top.ARESETN)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hdfb31e52__0.resume("@(posedge top.ACLK)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtop___024root___timing_commit(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hc2bb3b81__0.commit("@(posedge top.ARESETN)");
    }
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hdfb31e52__0.commit("@(posedge top.ACLK)");
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    Vtop___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___timing_resume(vlSelf);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/top.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
