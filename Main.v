`timescale 1ns / 1ps
module Main(
		input clk, 
		input reset, 
		input[7:0] number, 
		output[7:0] fact
    );
	 wire [31:0] Factorial;
	 assign fact = Factorial[7:0];
	 
	 reg[1:0] cst;
	 wire z;
	 wire[1:0] nst;
	 wire[1:0] Wa;
	 wire[1:0] Wb;
	 FSM_CL FCL(z, cst, Wa, Wb, nst);
	 FSM_LOGICA FL(clk, {24'h0,number}, Wa, Wb, Factorial, z);
	 always @(posedge clk or posedge reset)
		begin
			if(reset) begin
				cst = 2'b00;
				end
			else begin
				cst = nst;
				end
		end
endmodule
