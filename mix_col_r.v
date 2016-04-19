`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:22 04/13/2016 
// Design Name: 
// Module Name:    mix_col__four 
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
module mix_col_r(
    input [127:0] mix_col_r_in,
	output reg [127:0] mix_col_r_out
    );
	 
	 wire [31:0]temp1;
	 wire [13:0]temp2;
	 wire [31:0]temp3;
	 wire [31:0]temp4;

mix_col mix_col_1(
	.mix_in(mix_four_in[127:96]),
	.mix_out(temp1)
	);
	
mix_col mix_col_2(
	.mix_in(mix_four_in[95:64]),
	.mix_out(temp2)
	);

mix_col mix_col_3(
	.mix_in(mix_four_in[63:32]),
	.mix_out(temp3)
	);

mix_col mix_col_4(
	.mix_in(mix_four_in[31:0]),
	.mix_out(temp4)
	);

assign mix_col_r_out[127:96] = temp1;
assign mix_col_r_out[95:64] = temp2;
assign mix_col_r_out[63:32] = temp3;
assign mix_col_r_out[31:0] = temp4;

	
/*	always@(temp1)
begin
 mix_four_out[31:24] = temp1;
end

always@(temp2)
begin
mix_four_out[23:16] = temp2;
end

always@(temp3)
begin
mix_four_out[15:8] = temp3;
end

always@(temp4)
begin
mix_four_out[7:0] = temp4;
end*/
	
endmodule
