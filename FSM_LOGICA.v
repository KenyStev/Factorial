`timescale 1ns / 1ps
module FSM_LOGICA(
	input clk,
	input[31:0] N,
	input[1:0] waSel,
	input[1:0] wbSel,
	output [31:0] a_fact,
	output z
	);

	reg[31:0] rb;
	reg[31:0] ra;
	reg[31:0] rb_temp; 
	reg[31:0] ra_temp;
	assign b_reg = rb;
	assign a_fact = ra;
	
	//asignando valores a los registros 
	always @(posedge clk)
	begin
			ra = ra_temp;
			rb = rb_temp;
	end
	
	//
	always @(waSel or ra)
	begin
		case(waSel)
			2'b00: ra_temp = ra;
			2'b01: ra_temp = ra * rb;
			2'b10: ra_temp = 32'h1;
			default: 
				ra_temp = 32'hxxxxxxxx;
		endcase
	end
	
	
		always @(wbSel or rb)
	begin
		case(wbSel)
			2'b00: rb_temp = N;
			2'b01: rb_temp = rb -1;
			2'b10: rb_temp = rb;
			default: 
				rb_temp = 32'hxxxxxxxx;
		endcase
	end
	assign z = rb_temp==0? 1'b1 : 1'b0;
endmodule
