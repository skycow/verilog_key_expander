`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:14:22 04/13/2016 
// Design Name: 
// Module Name:    sub_bytes_four 
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
module sub_bytes_four(
    input [31:0] sub_four_in,
	 input [3:0] sub_round_in,
	 output [3:0] sub_round_out,
    output reg [31:0] sub_four_out
    );
	 
	 wire [7:0]temp1;
	 wire [7:0]temp2;
	 wire [7:0]temp3;
	 wire [7:0]temp4;

sub_bytes sub_bytes1(
	.sub_in(sub_four_in[31:24]),
	.sub_out(temp1)
	);
	
sub_bytes sub_bytes2(
	.sub_in(sub_four_in[23:16]),
	.sub_out(temp2)
	);

sub_bytes sub_bytes3(
	.sub_in(sub_four_in[15:8]),
	.sub_out(temp3)
	);

sub_bytes sub_bytes4(
	.sub_in(sub_four_in[7:0]),
	.sub_out(temp4)
	);
assign sub_round_out = sub_round_in;

	
	always@(temp1)
begin
 sub_four_out[31:24] = temp1;
end

always@(temp2)
begin
sub_four_out[23:16] = temp2;
end

always@(temp3)
begin
sub_four_out[15:8] = temp3;
end

always@(temp4)
begin
sub_four_out[7:0] = temp4;
end
	
endmodule
