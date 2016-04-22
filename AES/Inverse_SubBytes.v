`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:40:48 04/19/2016 
// Design Name: 
// Module Name:    Inverse_SubBytes 
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
module inverse_sub_bytes_r(
    input [127:0] sub_r_in,
    output reg [127:0] sub_r_out
    );
	 
	 wire [31:0]temp1;
	 wire [31:0]temp2;
	 wire [31:0]temp3;
	 wire [31:0]temp4;
	 wire [3:0] z1;
	 wire [3:0] z2;
	 wire [3:0] z3;
	 wire [3:0] z4;

inverse_sub_bytes_four inverse_sub_bytes_four_1(
	.sub_four_in(sub_r_in[127:96]),
	.sub_round_in(4'd0),
	.sub_round_out(z1),
	.sub_four_out(temp1)
	);
	
inverse_sub_bytes_four inverse_sub_bytes_four_2(
	.sub_four_in(sub_r_in[95:64]),
	.sub_round_in(4'd0),
	.sub_round_out(z2),
	.sub_four_out(temp2)
	);

inverse_sub_bytes_four inverse_sub_bytes_four_3(
	.sub_four_in(sub_r_in[63:32]),
	.sub_round_in(4'd0),
	.sub_round_out(z3),
	.sub_four_out(temp3)
	);

inverse_sub_bytes_four inverse_sub_bytes_four_4(
	.sub_four_in(sub_r_in[31:0]),
	.sub_round_in(4'd0),
	.sub_round_out(z4),
	.sub_four_out(temp4)
	);

	
	always@(temp1)
begin
 sub_r_out[127:96] = temp1;
end

always@(temp2)
begin
sub_r_out[95:64] = temp2;
end

always@(temp3)
begin
sub_r_out[63:32] = temp3;
end

always@(temp4)
begin
sub_r_out[31:0] = temp4;
end

endmodule
