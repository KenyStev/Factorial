`timescale 1ns / 1ps
module fact_tb();
    reg clk;
    reg reset;
    reg [31:0] number;
    wire [31:0] fact;
	wire [1:0] state;
	wire [31:0] b;
    Main fm1 (clk, reset, number, fact);
    
    initial begin
        clk = 0;
        reset = 0;
        number = 8'h05;
        #10
        reset = 1;
        #10
        reset = 0;
    end
    
    always
        #40
        clk = !clk;
        
endmodule