`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:42:22 04/13/2016 
// Design Name: 
// Module Name:    rcon 
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
module rcon(
    input [31:0] rcon_in,
    input [3:0] rcon_round,
    output reg [31:0] rcon_out
    );
	 
//wire [31:0]temp;

//request request1(
//	.in2(rin[31:0]),
//	.out2(temp[31:0])
//);

always@(rcon_in)
begin
case(rcon_round)
4'd0:rcon_out=rcon_in^32'h01000000;
4'd1:rcon_out=rcon_in^32'h02000000;
4'd2:rcon_out=rcon_in^32'h04000000;
4'd3:rcon_out=rcon_in^32'h08000000;
4'd4:rcon_out=rcon_in^32'h10000000;
4'd5:rcon_out=rcon_in^32'h20000000;
4'd6:rcon_out=rcon_in^32'h40000000;
4'd7:rcon_out=rcon_in^32'h80000000;
4'd8:rcon_out=rcon_in^32'h1B000000;
4'd9:rcon_out=rcon_in^32'h36000000;
4'd10:rcon_out=rcon_in^32'h6C000000;
endcase
end

endmodule
