module D_register (  
  input clk,
  input[31:0] D,
  output reg[31:0] Q
  );

module FSM_CL(
	input clk,
	input[31:0] N,
	input[1:0] waSel,
	input[1:0] wbSel,
	output reg[31:0] a,
	output reg z
	);

	reg[31:0] b;
	wire[31:0] b_temp; 
	wire[31:0] a_temp;

	D_register bc(clk,b,b_temp);
	D_register ac(clk,a,a_temp);

	assign a = a_temp;
	assign z = b_temp;

	parameter one_init=32'h00000001,
			zero = 2'b00,
			one = 2'b01,
			two = 2'b10;

	always @ (waSel or wbSel)
	begin
		case(waSel)
			zero: a = a_temp;
			one: a = a_temp * b_temp;
			two: a = one_init;
		endcase

		case(wbSel)
			zero: b = N;
			one: b = b_temp - 1;
			two: b = b_temp;
		endcase
	end

endmodule