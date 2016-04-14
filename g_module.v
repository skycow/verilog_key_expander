`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:25 04/13/2016 
// Design Name: 
// Module Name:    g_module 
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
module g_module(
    input [31:0] g_in,
    input [3:0] g_round,
    output  [31:0] g_out
    );
	 
	 //reg [31:0] con0;
	 wire [31:0] con1;
	 wire [31:0] con2;
	 wire [3:0] conr3;
	 wire [3:0] conr4;
	 
	 rotate_words rotate_words_1(
		.rot_in(g_in),
		.rot_round_in(g_round),
		.rot_round_out(conr3),
		.rot_out(con1)
	 );
	 
	 sub_bytes_four sub_bytes_four_1(
		.sub_four_in(con1),
		.sub_round_in(conr3),
		.sub_round_out(conr4),
		.sub_four_out(con2)
	 );
	 
	 //con3=g_round;
	 
	 rcon rcon_1(
		.rcon_in(con2),
		.rcon_round(conr4),
		.rcon_out(g_out)
	 );
//always@(g_in)
//begin
//con0 = g_in;
//end

//always@(con3)
//begin
//g_out = con3;
//end

endmodule
