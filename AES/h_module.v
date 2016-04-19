`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:08 04/13/2016 
// Design Name: 
// Module Name:    h_module 
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
module h_module(
    input [127:0] h_in,
    input [3:0] h_round_in,
	 output [3:0] h_round_out,
    output reg [127:0] h_out
    );
	 
	 wire [31:0]con1;
	 wire [31:0]con2;
	 wire [31:0]con3;
	 wire [31:0]con4;
	 wire [31:0]con5;

g_module g_module_1(
	 .g_in(h_in[31:0]),
    .g_round(h_round_in),
    .g_out(con1[31:0])
	);
	
seq_xor seq_xor_1(
		.seq_xor_a(h_in[127:96]),
		.seq_xor_b(con1[31:0]),
		.seq_xor_out(con2[31:0])
    );
	
seq_xor seq_xor_2(
		.seq_xor_a(h_in[95:64]),
		.seq_xor_b(con2[31:0]),
		.seq_xor_out(con3[31:0])
    );
	
seq_xor seq_xor_3(
		.seq_xor_a(h_in[63:32]),
		.seq_xor_b(con3[31:0]),
		.seq_xor_out(con4[31:0])
    );
	
seq_xor seq_xor_4(
		.seq_xor_a(h_in[31:0]),
		.seq_xor_b(con4[31:0]),
		.seq_xor_out(con5[31:0])
    );	 
assign h_round_out = h_round_in+1;

always@(con2)
begin
h_out[127:96] = con2[31:0];
end
always@(con3)
begin
h_out[95:64] = con3[31:0];
end
always@(con4)
begin
h_out[63:32] = con4[31:0];
end
always@(con5)
begin
h_out[31:0] = con5[31:0];
end
/*
assign h_out[31:0] = con5[31:0];
assign h_out[63:32] = con4[31:0];
assign h_out[95:64] = con3[31:0];
assign h_out[127:96] = con2[31:0];
*/
endmodule
