#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

vluint64_t main_time = 0;         // Global simulation time
double sc_time_stamp() { return main_time; }

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Verilated::traceEverOn(true);

    Vtop* top = new Vtop;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("sim/top.vcd");

    // Run until SystemVerilog $finish triggers
    while (!Verilated::gotFinish()) {
        top->eval();        // Evaluate top module
        tfp->dump(main_time); // Dump VCD
        main_time += 1;     // Advance simulation time (1 time unit)
    }

    top->final();
    tfp->close();
    delete top;
    delete tfp;

    return 0;
}
