`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:41:10 04/13/2016 
// Design Name: 
// Module Name:    rotate_words 
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
module rotate_words(
    input [31:0] rot_in,
	 input [3:0] rot_round_in,
	 output [3:0] rot_round_out,
    output reg [31:0] rot_out
    );
assign rot_round_out = rot_round_in;

always@(rot_in)
	 begin
	 rot_out = {rot_in[23:0],rot_in[31:24]};
end

endmodule
