`timescale 1ns / 1ps
module MUX(
	input[31:0] I1,
	input[31:0] I2,
	input[31:0] I3,
	input[1:0] C,
	output reg[31:0] out
    );
	 parameter
		zero = 2'b00,
		one = 2'b01,
		two = 2'b10;
	
	always @(C or I1 or I2 or I3)
		begin
			out=out;
			case(c)
				zero:
					begin
					out =I1; 
					end
				one: 
					begin
					out = I2;
					end
				two: 
					begin
					out = I3
					end
			endcase	
		end
endmodule
