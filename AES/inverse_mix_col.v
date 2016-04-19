`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:55:10 04/19/2016 
// Design Name: 
// Module Name:    inverse_mix_col 
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
module inverse_mix_col(
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
wire [7:0]res9_0;
wire [7:0]res10_0;
wire [7:0]res11_0;
wire [7:0]res12_0;
wire [7:0]res13_0;
wire [7:0]res14_0;
wire [7:0]res15_0;
wire [7:0]res16_0;

wire [7:0]res1_1;
wire [7:0]res2_1;
wire [7:0]res3_1;
wire [7:0]res4_1;
wire [7:0]res5_1;
wire [7:0]res6_1;
wire [7:0]res7_1;
wire [7:0]res8_1;
wire [7:0]res9_1;
wire [7:0]res10_1;
wire [7:0]res11_1;
wire [7:0]res12_1;
wire [7:0]res13_1;
wire [7:0]res14_1;
wire [7:0]res15_1;
wire [7:0]res16_1;

wire [7:0]res1_2;
wire [7:0]res2_2;
wire [7:0]res3_2;
wire [7:0]res4_2;
wire [7:0]res5_2;
wire [7:0]res6_2;
wire [7:0]res7_2;
wire [7:0]res8_2;
wire [7:0]res9_2;
wire [7:0]res10_2;
wire [7:0]res11_2;
wire [7:0]res12_2;
wire [7:0]res13_2;
wire [7:0]res14_2;
wire [7:0]res15_2;
wire [7:0]res16_2;

wire [7:0]res1_3;
wire [7:0]res2_3;
wire [7:0]res3_3;
wire [7:0]res4_3;
wire [7:0]res5_3;
wire [7:0]res6_3;
wire [7:0]res7_3;
wire [7:0]res8_3;
wire [7:0]res9_3;
wire [7:0]res10_3;
wire [7:0]res11_3;
wire [7:0]res12_3;
wire [7:0]res13_3;
wire [7:0]res14_3;
wire [7:0]res15_3;
wire [7:0]res16_3;

gfmult gfmult1_0(
	.val_a(mix_in[31:24]),
	.val_b(8'h0E),
	.val_p(res1_0)
	);
gfmult gfmult2_0(
	.val_a(mix_in[23:16]),
	.val_b(8'h0B),
	.val_p(res2_0)
	);
gfmult gfmult3_0(
	.val_a(mix_in[15:8]),
	.val_b(8'h0D),
	.val_p(res3_0)
	);
gfmult gfmult4_0(
	.val_a(mix_in[7:0]),
	.val_b(8'h09),
	.val_p(res4_0)
	);
gfmult gfmult5_0(
	.val_a(mix_in[31:24]),
	.val_b(8'h09),
	.val_p(res5_0)
	);
gfmult gfmult6_0(
	.val_a(mix_in[23:16]),
	.val_b(8'h0E),
	.val_p(res6_0)
	);
gfmult gfmult7_0(
	.val_a(mix_in[15:8]),
	.val_b(8'h0B),
	.val_p(res7_0)
	);
gfmult gfmult8_0(
	.val_a(mix_in[7:0]),
	.val_b(8'h0D),
	.val_p(res8_0)
	);
gfmult gfmult9_0(
	.val_a(mix_in[31:24]),
	.val_b(8'h0D),
	.val_p(res9_0)
	);
gfmult gfmult10_0(
	.val_a(mix_in[23:16]),
	.val_b(8'h09),
	.val_p(res10_0)
	);
gfmult gfmult11_0(
	.val_a(mix_in[15:8]),
	.val_b(8'h0E),
	.val_p(res11_0)
	);
gfmult gfmult12_0(
	.val_a(mix_in[7:0]),
	.val_b(8'h0B),
	.val_p(res12_0)
	);
gfmult gfmult13_0(
	.val_a(mix_in[31:24]),
	.val_b(8'h0B),
	.val_p(res13_0)
        );
gfmult gfmult14_0(
	.val_a(mix_in[23:16]),
	.val_b(8'h0D),
	.val_p(res14_0)
	);
gfmult gfmult15_0(
	.val_a(mix_in[15:8]),
	.val_b(8'h09),
	.val_p(res15_0)
	);
gfmult gfmult16_0(
	.val_a(mix_in[7:0]),
	.val_b(8'h0E),
	.val_p(res16_0)
	);

assign mix_out[31:24] = res1_0 ^ res2_0 ^ res3_0 ^ res4_0;
assign mix_out[23:16] = res5_0 ^ res6_0 ^ res7_0 ^ res8_0;
assign mix_out[15:8] =  res9_0 ^ res10_0 ^ res11_0 ^ res12_0;
assign mix_out[7:0] =   res13_0 ^ res14_0 ^ res15_0 ^ res16_0;

gfmult gfmult1_1(
	.val_a(mix_in[63:56]),
	.val_b(8'h0E),
	.val_p(res1_1)
	);
gfmult gfmult2_1(
	.val_a(mix_in[55:48]),
	.val_b(8'h0B),
	.val_p(res2_1)
	);
gfmult gfmult3_1(
	.val_a(mix_in[47:40]),
	.val_b(8'h0D),
	.val_p(res3_1)
	);
gfmult gfmult4_1(
	.val_a(mix_in[39:32]),
	.val_b(8'h09),
	.val_p(res4_1)
	);
gfmult gfmult5_1(
	.val_a(mix_in[63:56]),
	.val_b(8'h09),
	.val_p(res5_1)
	);
gfmult gfmult6_1(
	.val_a(mix_in[55:48]),
	.val_b(8'h0E),
	.val_p(res6_1)
	);
gfmult gfmult7_1(
	.val_a(mix_in[47:40]),
	.val_b(8'h0B),
	.val_p(res7_1)
	);
gfmult gfmult8_1(
	.val_a(mix_in[39:32]),
	.val_b(8'h0D),
	.val_p(res8_1)
	);
gfmult gfmult9_1(
	.val_a(mix_in[63:56]),
	.val_b(8'h0D),
	.val_p(res9_1)
	);
gfmult gfmult10_1(
	.val_a(mix_in[55:48]),
	.val_b(8'h09),
	.val_p(res10_1)
	);
gfmult gfmult11_1(
	.val_a(mix_in[47:40]),
	.val_b(8'h0E),
	.val_p(res11_1)
	);
gfmult gfmult12_1(
	.val_a(mix_in[39:32]),
	.val_b(8'h0B),
	.val_p(res12_1)
	);
gfmult gfmult13_1(
	.val_a(mix_in[63:56]),
	.val_b(8'h0B),
	.val_p(res13_1)
        );
gfmult gfmult14_1(
	.val_a(mix_in[55:48]),
	.val_b(8'h0D),
	.val_p(res14_1)
	);
gfmult gfmult15_1(
	.val_a(mix_in[47:40]),
	.val_b(8'h09),
	.val_p(res15_1)
	);
gfmult gfmult16_1(
	.val_a(mix_in[39:32]),
	.val_b(8'h0E),
	.val_p(res16_1)
	);

assign mix_out[63:56] = res1_1 ^ res2_1 ^ res3_1 ^ res4_1;
assign mix_out[55:48] = res5_1 ^ res6_1 ^ res7_1 ^ res8_1;
assign mix_out[47:40] =  res9_1 ^ res10_1 ^ res11_1 ^ res12_1;
assign mix_out[39:32] =   res13_1 ^ res14_1 ^ res15_1 ^ res16_1;

gfmult gfmult1_2(
	.val_a(mix_in[95:88]),
	.val_b(8'h0E),
	.val_p(res1_2)
	);
gfmult gfmult2_2(
	.val_a(mix_in[87:80]),
	.val_b(8'h0B),
	.val_p(res2_2)
	);
gfmult gfmult3_2(
	.val_a(mix_in[79:72]),
	.val_b(8'h0D),
	.val_p(res3_2)
	);
gfmult gfmult4_2(
	.val_a(mix_in[71:64]),
	.val_b(8'h09),
	.val_p(res4_2)
	);
gfmult gfmult5_2(
	.val_a(mix_in[95:88]),
	.val_b(8'h09),
	.val_p(res5_2)
	);
gfmult gfmult6_2(
	.val_a(mix_in[87:80]),
	.val_b(8'h0E),
	.val_p(res6_2)
	);
gfmult gfmult7_2(
	.val_a(mix_in[79:72]),
	.val_b(8'h0B),
	.val_p(res7_2)
	);
gfmult gfmult8_2(
	.val_a(mix_in[71:64]),
	.val_b(8'h0D),
	.val_p(res8_2)
	);
gfmult gfmult9_2(
	.val_a(mix_in[95:88]),
	.val_b(8'h0D),
	.val_p(res9_2)
	);
gfmult gfmult10_2(
	.val_a(mix_in[87:80]),
	.val_b(8'h09),
	.val_p(res10_2)
	);
gfmult gfmult11_2(
	.val_a(mix_in[79:72]),
	.val_b(8'h0E),
	.val_p(res11_2)
	);
gfmult gfmult12_2(
	.val_a(mix_in[71:64]),
	.val_b(8'h0B),
	.val_p(res12_2)
	);
gfmult gfmult13_2(
	.val_a(mix_in[95:88]),
	.val_b(8'h0B),
	.val_p(res13_2)
        );
gfmult gfmult14_2(
	.val_a(mix_in[87:80]),
	.val_b(8'h0D),
	.val_p(res14_2)
	);
gfmult gfmult15_2(
	.val_a(mix_in[79:72]),
	.val_b(8'h09),
	.val_p(res15_2)
	);
gfmult gfmult16_2(
	.val_a(mix_in[71:64]),
	.val_b(8'h0E),
	.val_p(res16_2)
	);

assign mix_out[95:88] = res1_2 ^ res2_2 ^ res3_2 ^ res4_2;
assign mix_out[87:80] = res5_2 ^ res6_2 ^ res7_2 ^ res8_2;
assign mix_out[79:72] =  res9_2 ^ res10_2 ^ res11_2 ^ res12_2;
assign mix_out[71:64] =   res13_2 ^ res14_2 ^ res15_2 ^ res16_2;

gfmult gfmult1_3(
	.val_a(mix_in[127:120]),
	.val_b(8'h0E),
	.val_p(res1_3)
	);
gfmult gfmult2_3(
	.val_a(mix_in[119:112]),
	.val_b(8'h0B),
	.val_p(res2_3)
	);
gfmult gfmult3_3(
	.val_a(mix_in[111:104]),
	.val_b(8'h0D),
	.val_p(res3_3)
	);
gfmult gfmult4_3(
	.val_a(mix_in[103:96]),
	.val_b(8'h09),
	.val_p(res4_3)
	);
gfmult gfmult5_3(
	.val_a(mix_in[127:120]),
	.val_b(8'h09),
	.val_p(res5_3)
	);
gfmult gfmult6_3(
	.val_a(mix_in[119:112]),
	.val_b(8'h0E),
	.val_p(res6_3)
	);
gfmult gfmult7_3(
	.val_a(mix_in[111:104]),
	.val_b(8'h0B),
	.val_p(res7_3)
	);
gfmult gfmult8_3(
	.val_a(mix_in[103:96]),
	.val_b(8'h0D),
	.val_p(res8_3)
	);
gfmult gfmult9_3(
	.val_a(mix_in[127:120]),
	.val_b(8'h0D),
	.val_p(res9_3)
	);
gfmult gfmult10_3(
	.val_a(mix_in[119:112]),
	.val_b(8'h09),
	.val_p(res10_3)
	);
gfmult gfmult11_3(
	.val_a(mix_in[111:104]),
	.val_b(8'h0E),
	.val_p(res11_3)
	);
gfmult gfmult12_3(
	.val_a(mix_in[103:96]),
	.val_b(8'h0B),
	.val_p(res12_3)
	);
gfmult gfmult13_3(
	.val_a(mix_in[127:120]),
	.val_b(8'h0B),
	.val_p(res13_3)
   );
gfmult gfmult14_3(
	.val_a(mix_in[119:112]),
	.val_b(8'h0D),
	.val_p(res14_3)
	);
gfmult gfmult15_3(
	.val_a(mix_in[111:104]),
	.val_b(8'h09),
	.val_p(res15_3)
	);
gfmult gfmult16_3(
	.val_a(mix_in[103:96]),
	.val_b(8'h0E),
	.val_p(res16_3)
	);

assign mix_out[127:120] = res1_3 ^ res2_3 ^ res3_3 ^ res4_3;
assign mix_out[119:112] = res5_3 ^ res6_3 ^ res7_3 ^ res8_3;
assign mix_out[111:104] =  res9_3 ^ res10_3 ^ res11_3 ^ res12_3;
assign mix_out[103:96] =   res13_3 ^ res14_3 ^ res15_3 ^ res16_3;


endmodule
