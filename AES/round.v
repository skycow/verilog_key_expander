`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:30:08 04/13/2016 
// Design Name: 
// Module Name:    round 
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
module round(
    input [127:0] round_in,
    input [127:0] key_in,
    output [127:0] round_out
    );
	 
	 wire [127:0]con1;
	 wire [127:0]con2;
	 wire [127:0]con3;
	 wire [127:0]con4;

round_xor round_xor_i(
		.round_xor_a(round_in[127:0]),
    	.round_xor_b(key_in[127:0]),
    	.round_xor_out(con1[127:0])
	);
	
sub_bytes_r sub_bytes_four_i(
		.sub_r_in(con1[127:0]),
		.sub_r_out(con2[127:0])
	    );
	
shift_rows shift_rows_four_i(
		.state_in(con2[127:0]),
		.state_out(con3[127:0])
    );
	
mix_col mix_col_i(
		.mix_in(con3[127:0]),
		.mix_out(con4[127:0])
    );

assign round_out = con4;

/*	
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
end*/
/*
assign h_out[31:0] = con5[31:0];
assign h_out[63:32] = con4[31:0];
assign h_out[95:64] = con3[31:0];
assign h_out[127:96] = con2[31:0];
*/
endmodule
