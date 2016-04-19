`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:42:34 04/13/2016 
// Design Name: 
// Module Name:    seq_xor 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module seq_xor(
    input [31:0] seq_xor_a,
	 input [31:0] seq_xor_b,
    output [31:0] seq_xor_out
    );

assign seq_xor_out[31:0] = seq_xor_a[31:0]^seq_xor_b[31:0];

endmodule
