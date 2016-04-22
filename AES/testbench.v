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
	wire [127:0] cipher_text;
	wire [127:0] plain_text;

	AES aes_mod(message, cipher_text, cipher_key, plain_text, cipher_text);
	
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

//	always @(*)
//	begin
//		cipher_text1 = cipher_text;
//	end
endmodule

