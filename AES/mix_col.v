`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:13:34 04/16/2016 
// Design Name: 
// Module Name:    gfmult 
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
module mix_col(
    input [127:0] mix_in,
    output [127:0] mix_out
    );

wire [7:0]res1_0;
wire [7:0]res2_0;
wire [7:0]res3_0;
wire [7:0]res4_0;
wire [7:0]res5_0;
wire [7:0]res6_0;
wire [7:0]res7_0;
wire [7:0]res8_0;

wire [7:0]res1_1;
wire [7:0]res2_1;
wire [7:0]res3_1;
wire [7:0]res4_1;
wire [7:0]res5_1;
wire [7:0]res6_1;
wire [7:0]res7_1;
wire [7:0]res8_1;

wire [7:0]res1_2;
wire [7:0]res2_2;
wire [7:0]res3_2;
wire [7:0]res4_2;
wire [7:0]res5_2;
wire [7:0]res6_2;
wire [7:0]res7_2;
wire [7:0]res8_2;

wire [7:0]res1_3;
wire [7:0]res2_3;
wire [7:0]res3_3;
wire [7:0]res4_3;
wire [7:0]res5_3;
wire [7:0]res6_3;
wire [7:0]res7_3;
wire [7:0]res8_3;

gfmult gfmult1_0(
	.val_a(mix_in[31:24]),
	.val_b(8'd2),
	.val_p(res1_0)
	);
gfmult gfmult2_0(
	.val_a(mix_in[23:16]),
	.val_b(8'd2),
	.val_p(res2_0)
	);
gfmult gfmult3_0(
	.val_a(mix_in[15:8]),
	.val_b(8'd2),
	.val_p(res3_0)
	);
gfmult gfmult4_0(
	.val_a(mix_in[7:0]),
	.val_b(8'd2),
	.val_p(res4_0)
	);
gfmult gfmult5_0(
	.val_a(mix_in[23:16]),
	.val_b(8'd3),
	.val_p(res5_0)
	);
gfmult gfmult6_0(
	.val_a(mix_in[15:8]),
	.val_b(8'd3),
	.val_p(res6_0)
	);
gfmult gfmult7_0(
	.val_a(mix_in[31:24]),
	.val_b(8'd3),
	.val_p(res7_0)
	);
gfmult gfmult8_0(
	.val_a(mix_in[7:0]),
	.val_b(8'd3),
	.val_p(res8_0)
	);

assign mix_out[31:24] = res1_0 ^ res5_0 ^ mix_in[15:8] ^ mix_in[7:0];
assign mix_out[23:16] = mix_in[31:24] ^ res2_0 ^ res6_0 ^ mix_in[7:0];
assign mix_out[15:8] = mix_in[31:24] ^ mix_in[23:16] ^ res3_0 ^ res8_0;
assign mix_out[7:0] = res7_0 ^ mix_in[23:16] ^ mix_in[15:8] ^ res4_0;

gfmult gfmult1_1(
	.val_a(mix_in[63:56]),
	.val_b(8'd2),
	.val_p(res1_1)
	);
gfmult gfmult2_1(
	.val_a(mix_in[55:48]),
	.val_b(8'd2),
	.val_p(res2_1)
	);
gfmult gfmult3_1(
	.val_a(mix_in[47:40]),
	.val_b(8'd2),
	.val_p(res3_1)
	);
gfmult gfmult4_1(
	.val_a(mix_in[39:32]),
	.val_b(8'd2),
	.val_p(res4_1)
	);
gfmult gfmult5_1(
	.val_a(mix_in[55:48]),
	.val_b(8'd3),
	.val_p(res5_1)
	);
gfmult gfmult6_1(
	.val_a(mix_in[47:40]),
	.val_b(8'd3),
	.val_p(res6_1)
	);
gfmult gfmult7_1(
	.val_a(mix_in[63:56]),
	.val_b(8'd3),
	.val_p(res7_1)
	);
gfmult gfmult8_1(
	.val_a(mix_in[39:32]),
	.val_b(8'd3),
	.val_p(res8_1)
	);

assign mix_out[63:56] = res1_1        ^ res5_1        ^ mix_in[47:40] ^ mix_in[39:32];
assign mix_out[55:48] = mix_in[63:56] ^ res2_1        ^ res6_1        ^ mix_in[39:32];
assign mix_out[47:40] = mix_in[63:56] ^ mix_in[55:48] ^ res3_1        ^ res8_1;
assign mix_out[39:32] = res7_1        ^ mix_in[55:48] ^ mix_in[47:40] ^ res4_1;

gfmult gfmult1_2(
	.val_a(mix_in[95:88]),
	.val_b(8'd2),
	.val_p(res1_2)
	);
gfmult gfmult2_2(
	.val_a(mix_in[87:80]),
	.val_b(8'd2),
	.val_p(res2_2)
	);
gfmult gfmult3_2(
	.val_a(mix_in[79:72]),
	.val_b(8'd2),
	.val_p(res3_2)
	);
gfmult gfmult4_2(
	.val_a(mix_in[71:64]),
	.val_b(8'd2),
	.val_p(res4_2)
	);
gfmult gfmult5_2(
	.val_a(mix_in[87:80]),
	.val_b(8'd3),
	.val_p(res5_2)
	);
gfmult gfmult6_2(
	.val_a(mix_in[79:72]),
	.val_b(8'd3),
	.val_p(res6_2)
	);
gfmult gfmult7_2(
	.val_a(mix_in[95:88]),
	.val_b(8'd3),
	.val_p(res7_2)
	);
gfmult gfmult8_2(
	.val_a(mix_in[71:64]),
	.val_b(8'd3),
	.val_p(res8_2)
	);

assign mix_out[95:88] = res1_2        ^ res5_2        ^ mix_in[79:72] ^ mix_in[71:64];
assign mix_out[87:80] = mix_in[95:88] ^ res2_2        ^ res6_2       ^ mix_in[71:64];
assign mix_out[79:72] = mix_in[95:88] ^ mix_in[87:80] ^ res3_2       ^ res8_2;
assign mix_out[71:64] = res7_2        ^ mix_in[87:80] ^ mix_in[79:72] ^ res4_2;

gfmult gfmult1_3(
	.val_a(mix_in[127:120]),
	.val_b(8'd2),
	.val_p(res1_3)
	);
gfmult gfmult2_3(
	.val_a(mix_in[119:112]),
	.val_b(8'd2),
	.val_p(res2_3)
	);
gfmult gfmult3_3(
	.val_a(mix_in[111:104]),
	.val_b(8'd2),
	.val_p(res3_3)
	);
gfmult gfmult4_3(
	.val_a(mix_in[103:96]),
	.val_b(8'd2),
	.val_p(res4_3)
	);
gfmult gfmult5_3(
	.val_a(mix_in[119:112]),
	.val_b(8'd3),
	.val_p(res5_3)
	);
gfmult gfmult6_3(
	.val_a(mix_in[111:104]),
	.val_b(8'd3),
	.val_p(res6_3)
	);
gfmult gfmult7_3(
	.val_a(mix_in[127:120]),
	.val_b(8'd3),
	.val_p(res7_3)
	);
gfmult gfmult8_3(
	.val_a(mix_in[103:96]),
	.val_b(8'd3),
	.val_p(res8_3)
	);

assign mix_out[127:120] = res1_3        ^ res5_3        ^ mix_in[111:104] ^ mix_in[103:96];
assign mix_out[119:112] = mix_in[127:120] ^ res2_3        ^ res6_3       ^ mix_in[103:96];
assign mix_out[111:104] = mix_in[127:120] ^ mix_in[119:112] ^ res3_3       ^ res8_3;
assign mix_out[103:96] = res7_3         ^ mix_in[119:112] ^ mix_in[111:104] ^ res4_3;
/*
always@(res1b)
begin
	
end
always@(res2b)
begin
	
end
always@(res3b)
begin
	
end
always@(res4b)
begin
	
end
*/

endmodule
