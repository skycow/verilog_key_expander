`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:59:15 04/19/2016 
// Design Name: 
// Module Name:    Last_round 
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
module last_round(
    input [127:0] round_in,
    input [127:0] key_in1,
    input [127:0] key_in2,
    output [127:0] round_out
    );

	wire [127:0] xor_result;
	wire [127:0] subBytes_result;
	wire [127:0] shift_result;
	wire [127:0] result;
	
	round_xor xor1(round_in, key_in1, xor_result);
	sub_bytes_r sub(xor_result, subBytes_result);
	shift_rows shift(subBytes_result, shift_result);
	round_xor xor2(shift_result, key_in2, round_out);
	
	//assign round_out[127:0] = result[127:0];
	
endmodule
