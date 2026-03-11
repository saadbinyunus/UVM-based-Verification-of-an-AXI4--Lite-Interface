module top;
    // Clock and reset
    logic ACLK;
    logic ARESETN;

    // AXI4-Lite master signals
    logic [31:0] S_ARADDR;
    logic S_ARVALID;
    logic S_RREADY;
    logic [31:0] S_AWADDR;
    logic S_AWVALID;
    logic [31:0] S_WDATA;
    logic [3:0] S_WSTRB;
    logic S_WVALID;
    logic S_BREADY;

    // AXI4-Lite slave signals (inputs from DUT)
    logic S_ARREADY;
    logic [31:0] S_RDATA;
    logic [1:0]  S_RRESP;
    logic S_RVALID;
    logic S_AWREADY;
    logic S_WREADY;
    logic [1:0]  S_BRESP;
    logic S_BVALID;

    // Instantiate your DUT
    axi4_lite_slave DUT (
        .ACLK(ACLK),
        .ARESETN(ARESETN),
        .S_ARADDR(S_ARADDR),
        .S_ARVALID(S_ARVALID),
        .S_RREADY(S_RREADY),
        .S_AWADDR(S_AWADDR),
        .S_AWVALID(S_AWVALID),
        .S_WDATA(S_WDATA),
        .S_WSTRB(S_WSTRB),
        .S_WVALID(S_WVALID),
        .S_BREADY(S_BREADY),
        .S_ARREADY(S_ARREADY),
        .S_RDATA(S_RDATA),
        .S_RRESP(S_RRESP),
        .S_RVALID(S_RVALID),
        .S_AWREADY(S_AWREADY),
        .S_WREADY(S_WREADY),
        .S_BRESP(S_BRESP),
        .S_BVALID(S_BVALID)
    );

    // Clock generation: 100MHz
    initial begin
        ACLK = 0;
        forever #5 ACLK = ~ACLK;
    end

    // Reset sequence
    initial begin
        ARESETN = 0;
        #20;
        ARESETN = 1;
    end

    // AXI Test Sequence with timeouts
    initial begin
        int timeout;

        // Initialize signals
        S_AWADDR  = 0; S_AWVALID = 0; S_WDATA = 0; S_WSTRB = 4'b1111; S_WVALID = 0; S_BREADY = 1;
        S_ARADDR  = 0; S_ARVALID = 0; S_RREADY = 1;

        @(posedge ARESETN);

        // --- WRITE Transaction ---
        #10;
        S_AWADDR  = 5; S_AWVALID = 1;
        S_WDATA   = 32'hDEADBEEF; S_WVALID  = 1;

        // Wait for handshake with timeout
        timeout = 50;
        while (!(S_AWREADY && S_WREADY) && timeout > 0) begin
            @(posedge ACLK);
            timeout--;
        end
        if (timeout == 0) $display("Warning: Write handshake never completed!");
        #5;
        S_AWVALID = 0; S_WVALID = 0;

        // Wait for write response
        timeout = 50;
        while (!S_BVALID && timeout > 0) begin
            @(posedge ACLK);
            timeout--;
        end
        if (timeout == 0) $display("Warning: Write response never received!");
        #5;

        // --- READ Transaction ---
        S_ARADDR  = 5; S_ARVALID = 1;

        // Wait for read handshake
        timeout = 50;
        while (!S_ARREADY && timeout > 0) begin
            @(posedge ACLK);
            timeout--;
        end
        if (timeout == 0) $display("Warning: Read handshake never completed!");
        #5;
        S_ARVALID = 0;

        // Wait for read data valid
        timeout = 50;
        while (!S_RVALID && timeout > 0) begin
            @(posedge ACLK);
            timeout--;
        end
        if (timeout == 0) $display("Warning: Read data never valid!");
        else $display("Read data: %h", S_RDATA);
        #5;

        // End simulation
        #50;
        $finish;
    end

    // Optional debug monitor
    initial begin
        $monitor("Time=%0t | AWVALID=%b WVALID=%b BVALID=%b ARVALID=%b RVALID=%b",
                 $time, S_AWVALID, S_WVALID, S_BVALID, S_ARVALID, S_RVALID);
    end
endmodule
