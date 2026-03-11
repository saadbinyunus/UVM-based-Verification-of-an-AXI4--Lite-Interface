// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__S_ARADDR),32);
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__S_ARVALID));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__S_RREADY));
        bufp->chgIData(oldp+3,(vlSelf->top__DOT__S_AWADDR),32);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__S_AWVALID));
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__S_WDATA),32);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__S_WSTRB),4);
        bufp->chgBit(oldp+7,(vlSelf->top__DOT__S_WVALID));
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__S_BREADY));
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__unnamedblk1__DOT__timeout),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+10,((3U == (IData)(vlSelf->top__DOT__DUT__DOT__state))));
        bufp->chgIData(oldp+11,(((4U == (IData)(vlSelf->top__DOT__DUT__DOT__state))
                                  ? vlSelf->top__DOT__DUT__DOT__register
                                 [(0x1fU & vlSelf->top__DOT__DUT__DOT__addr)]
                                  : 0U)),32);
        bufp->chgBit(oldp+12,((4U == (IData)(vlSelf->top__DOT__DUT__DOT__state))));
        bufp->chgBit(oldp+13,((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state))));
        bufp->chgBit(oldp+14,((2U == (IData)(vlSelf->top__DOT__DUT__DOT__state))));
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__DUT__DOT__register[0]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__DUT__DOT__register[1]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__DUT__DOT__register[2]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__DUT__DOT__register[3]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__DUT__DOT__register[4]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__DUT__DOT__register[5]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__DUT__DOT__register[6]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__DUT__DOT__register[7]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__DUT__DOT__register[8]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__DUT__DOT__register[9]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__DUT__DOT__register[10]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__DUT__DOT__register[11]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__DUT__DOT__register[12]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__DUT__DOT__register[13]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__DUT__DOT__register[14]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__DUT__DOT__register[15]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__DUT__DOT__register[16]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__DUT__DOT__register[17]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__DUT__DOT__register[18]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__DUT__DOT__register[19]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__DUT__DOT__register[20]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__DUT__DOT__register[21]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__DUT__DOT__register[22]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__DUT__DOT__register[23]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__DUT__DOT__register[24]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__DUT__DOT__register[25]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__DUT__DOT__register[26]),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__DUT__DOT__register[27]),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__DUT__DOT__register[28]),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__DUT__DOT__register[29]),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__DUT__DOT__register[30]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__DUT__DOT__register[31]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__DUT__DOT__addr),32);
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__DUT__DOT__state),3);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__DUT__DOT__i),32);
    }
    bufp->chgBit(oldp+50,(vlSelf->top__DOT__ACLK));
    bufp->chgBit(oldp+51,(vlSelf->top__DOT__ARESETN));
    bufp->chgBit(oldp+52,(((IData)(vlSelf->top__DOT__S_AWVALID) 
                           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__state)))));
    bufp->chgBit(oldp+53,(((1U == (IData)(vlSelf->top__DOT__DUT__DOT__state)) 
                           & (IData)(vlSelf->top__DOT__S_WVALID))));
    bufp->chgCData(oldp+54,(vlSelf->top__DOT__DUT__DOT__next_state),3);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
