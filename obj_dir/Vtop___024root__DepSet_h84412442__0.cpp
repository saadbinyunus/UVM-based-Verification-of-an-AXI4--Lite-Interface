// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->top__DOT__ACLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__ACLK__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->top__DOT__ARESETN) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__ARESETN__0))));
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ACLK__0 
        = vlSelf->top__DOT__ACLK;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ARESETN__0 
        = vlSelf->top__DOT__ARESETN;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 2048> Vtop__ConstPool__TABLE_h4a344f30_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vtop__ConstPool__TABLE_h73f9fdf5_0;

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("Time=%0t | AWVALID=%b WVALID=%b BVALID=%b ARVALID=%b RVALID=%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->top__DOT__S_AWVALID),
                  1,vlSelf->top__DOT__S_WVALID,1,(2U 
                                                  == (IData)(vlSelf->top__DOT__DUT__DOT__state)),
                  1,(IData)(vlSelf->top__DOT__S_ARVALID),
                  1,(4U == (IData)(vlSelf->top__DOT__DUT__DOT__state)));
    }
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__S_AWVALID) 
                     << 0xaU) | (((((IData)(vlSelf->top__DOT__S_AWVALID) 
                                    & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__state))) 
                                   & (IData)(vlSelf->top__DOT__S_WVALID)) 
                                  << 9U) | (((IData)(vlSelf->top__DOT__S_BREADY) 
                                             << 8U) 
                                            | (((2U 
                                                 == (IData)(vlSelf->top__DOT__DUT__DOT__state)) 
                                                << 7U) 
                                               | (((3U 
                                                    == (IData)(vlSelf->top__DOT__DUT__DOT__state)) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->top__DOT__S_ARVALID) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->top__DOT__S_RREADY) 
                                                         << 4U) 
                                                        | (((4U 
                                                             == (IData)(vlSelf->top__DOT__DUT__DOT__state)) 
                                                            << 3U) 
                                                           | (IData)(vlSelf->top__DOT__DUT__DOT__state)))))))));
    if (Vtop__ConstPool__TABLE_h4a344f30_0[__Vtableidx1]) {
        vlSelf->top__DOT__DUT__DOT__next_state = Vtop__ConstPool__TABLE_h73f9fdf5_0
            [__Vtableidx1];
    }
}
