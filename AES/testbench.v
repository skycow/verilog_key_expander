`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:24:18 04/13/2016
// Design Name:   key_expander
// Module Name:   /home/A01209720/key_expander/testbench.v
// Project Name:  key_expander
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: key_expander
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg [127:0] cipher_key;
	reg [127:0] message;
	reg [127:0] cipher_text;

	// Outputs
	wire [127:0] expanded_key_1;
	wire [127:0] expanded_key_2;
	wire [127:0] expanded_key_3;
	wire [127:0] expanded_key_4;
	wire [127:0] expanded_key_5;
	wire [127:0] expanded_key_6;
	wire [127:0] expanded_key_7;
	wire [127:0] expanded_key_8;
	wire [127:0] expanded_key_9;
	wire [127:0] expanded_key_10;
	wire [127:0] expanded_key_11;
	
	wire [127:0] round_1;
	wire [127:0] round_2;
	wire [127:0] round_3;
	wire [127:0] round_4;
	wire [127:0] round_5;
	wire [127:0] round_6;
	wire [127:0] round_7;
	wire [127:0] round_8;
	wire [127:0] round_9;


	// Instantiate the Unit Under Test (UUT)
	key_expander uut (
		.cipher_key(cipher_key), 
		.expanded_key_1(expanded_key_1 [127:0]),
		.expanded_key_2(expanded_key_2 [127:0]),
		.expanded_key_3(expanded_key_3 [127:0]),
		.expanded_key_4(expanded_key_4 [127:0]),
		.expanded_key_5(expanded_key_5 [127:0]),
		.expanded_key_6(expanded_key_6 [127:0]),
		.expanded_key_7(expanded_key_7 [127:0]),
		.expanded_key_8(expanded_key_8 [127:0]),
		.expanded_key_9(expanded_key_9 [127:0]),
		.expanded_key_10(expanded_key_10 [127:0]),
		.expanded_key_11(expanded_key_11 [127:0])
	);
	
	round uut_round1(message, expanded_key_1, round_1);
	round uut_round2(round_1, expanded_key_2, round_2);
	round uut_round3(round_2, expanded_key_3, round_3);
	round uut_round4(round_3, expanded_key_4, round_4);
	round uut_round5(round_4, expanded_key_5, round_5);
	round uut_round6(round_5, expanded_key_6, round_6);
	round uut_round7(round_6, expanded_key_7, round_7);
	round uut_round8(round_7, expanded_key_8, round_8);
	round uut_round9(round_8, expanded_key_9, round_9);	
	//round uut_round10(round_9, expanded_key_10, round_10);
	
	last_round uut_last_round(round_9, expanded_key_10, expanded_key_11, cipher_text);
	
	initial begin
		// Initialize Inputs
		//cipher_key = 128'h0123465789abcdef0123465789abcdef;
		//cipher_key =0;
		cipher_key = 128'h0f1571c947d9e8590cb7add6af7f6798;
		message    = 128'h11111111111111111111111111111111;
		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here

	end
      
endmodule

