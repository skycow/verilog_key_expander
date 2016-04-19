`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:16:09 04/19/2016 
// Design Name: 
// Module Name:    inverse_round 
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
module inverse_round(
    input [127:0] round_in,
    input [127:0] key_in,
    output [127:0] round_out
    );
	
	wire [127:0] con1;
	wire [127:0] con2;
	wire [127:0] con3;
	wire [127:0] con4;
	
	round_xor round_xor_i(round_in, key_in, con1);
	inverse_mix_col inverse_mix_col_i(con1,con2);
	inverse_shift_rows inverse_shift_rows_i(con2,con3);
	inverse_sub_bytes_r inverse_sub_bytes_r_i(con3,con4);

	assign round_out = con4;
endmodule
