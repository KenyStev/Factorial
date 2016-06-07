`timescale 1ns / 1ps
module FSM_CL(
	input z,
	input [1:0] cur_s,
	output reg[1:0] WAsel,
	output reg[1:0] WBsel,
	output reg[1:0] next_s
	 );
	 parameter
		Q0 = 2'b00,
		Q1 = 2'b01,
		Q2 = 2'b10;
	 
	 always @(z or cur_s)
		begin
		next_s = cur_s;
		WAsel =WAsel;
		WBsel =WBsel;
		case(cur_s)
				Q0:
				begin
					WAsel = Q2;
					WBsel = Q0;
					next_s =Q1;
				end
				Q1:
				begin
					if(!z)begin
						WAsel = Q1;
						WBsel = Q1;
						next_s =Q1;
						end
					else begin
						WAsel = Q1;
						WBsel = Q1;
						next_s =Q2;
						end
				end
				Q2:
				begin
					if(!z)begin
						WAsel = Q0;
						WBsel = Q2;
						next_s =Q2;
						end
					else begin
						WAsel = Q0;
						WBsel = Q2;
						next_s =Q2;
						end
				end
			endcase
		end
endmodule
