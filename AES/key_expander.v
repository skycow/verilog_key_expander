`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:57:30 04/13/2016 
// Design Name: 
// Module Name:    key_expander 
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
module key_expander(
    input [127:0] cipher_key,
    output reg [127:0] expanded_key_1,
	 output reg [127:0] expanded_key_2,
	 output reg [127:0] expanded_key_3,
	 output reg [127:0] expanded_key_4,
	 output reg [127:0] expanded_key_5,
	 output reg [127:0] expanded_key_6,
	 output reg [127:0] expanded_key_7,
	 output reg [127:0] expanded_key_8,
	 output reg [127:0] expanded_key_9,
	 output reg [127:0] expanded_key_10,
	 output reg [127:0] expanded_key_11
    );
	 
	 wire [127:0]con12;
	 wire [3:0]rcon12;
	 wire [127:0]con23;
	 wire [3:0]rcon23;
	 wire [127:0]con34;
	 wire [3:0]rcon34;
	 wire [127:0]con45;
	 wire [3:0]rcon45;
	 wire [127:0]con56;
	 wire [3:0]rcon56;
	 wire [127:0]con67;
	 wire [3:0]rcon67;
	 wire [127:0]con78;
	 wire [3:0]rcon78;
	 wire [127:0]con89;
	 wire [3:0]rcon89;
	 wire [127:0]con910;
	 wire [3:0]rcon910;
	 wire [127:0]con1011;
	 wire [3:0]rcon1011;

	 reg [3:0]round_start;
	 initial
	 begin
	 round_start = 0;
	 end
	 
  h_module h_module_1(
		.h_in(cipher_key[127:0]),
		.h_round_in(round_start[3:0]),
		.h_round_out(rcon12[3:0]),
		.h_out(con12[127:0])
		);
		
  h_module h_module_2(
		.h_in(con12[127:0]),
		.h_round_in(rcon12[3:0]),
		.h_round_out(rcon23[3:0]),
		.h_out(con23[127:0])
		);
		
  h_module h_module_3(
		.h_in(con23[127:0]),
		.h_round_in(rcon23[3:0]),
		.h_round_out(rcon34[3:0]),
		.h_out(con34[127:0])
		);

	h_module h_module_4(
		.h_in(con34[127:0]),
		.h_round_in(rcon34[3:0]),
		.h_round_out(rcon45[3:0]),
		.h_out(con45[127:0])
		);
		
	h_module h_module_5(
		.h_in(con45[127:0]),
		.h_round_in(rcon45[3:0]),
		.h_round_out(rcon56[3:0]),
		.h_out(con56[127:0])
		);
		
	h_module h_module_6(
		.h_in(con56[127:0]),
		.h_round_in(rcon56[3:0]),
		.h_round_out(rcon67[3:0]),
		.h_out(con67[127:0])
		);
	h_module h_module_7(
		.h_in(con67[127:0]),
		.h_round_in(rcon67[3:0]),
		.h_round_out(rcon78[3:0]),
		.h_out(con78[127:0])
		);
	h_module h_module_8(
		.h_in(con78[127:0]),
		.h_round_in(rcon78[3:0]),
		.h_round_out(rcon89[3:0]),
		.h_out(con89[127:0])
		);
		h_module h_module_9(
		.h_in(con89[127:0]),
		.h_round_in(rcon89[3:0]),
		.h_round_out(rcon910[3:0]),
		.h_out(con910[127:0])
		);
		h_module h_module_10(
		.h_in(con910[127:0]),
		.h_round_in(rcon910[3:0]),
		.h_round_out(rcon1011[3:0]),
		.h_out(con1011[127:0])
		);

	
	always@(cipher_key)
begin	
    expanded_key_1[127:0]= cipher_key[127:0];
end
always@(con12)
begin
	 expanded_key_2[127:0]= con12;
end
always@(con23)
begin
	 expanded_key_3[127:0]= con23;
end
always@(con34)
begin
	 expanded_key_4[127:0]= con34;
end
always@(con45)
begin
	 expanded_key_5[127:0]= con45;
end
always@(con56)
begin
	 expanded_key_6[127:0]= con56;
end
always@(con67)
begin
	 expanded_key_7[127:0]= con67;
end
always@(con78)
begin
	 expanded_key_8[127:0]= con78;
end
always@(con89)
begin
	 expanded_key_9[127:0]= con89;
end
always@(con910)
begin
	 expanded_key_10[127:0]= con910;
end
always@(con1011)
begin
	 expanded_key_11[127:0]= con1011;
end	 

/*	
	always@(cipher_key)
begin	
    expanded_key_11[127:0]= cipher_key[127:0];
end
always@(con12)
begin
	 expanded_key_10[255:128]= con12;
end
always@(con23)
begin
	 expanded_key_9[383:256]= con23;
end
always@(con34)
begin
	 expanded_key_8[511:384]= con34;
end
always@(con45)
begin
	 expanded_key_7[639:512]= con45;
end
always@(con56)
begin
	 expanded_key_6[767:640]= con56;
end
always@(con67)
begin
	 expanded_key_5[895:768]= con67;
end
always@(con78)
begin
	 expanded_key_4[1023:896]= con78;
end
always@(con89)
begin
	 expanded_key_3[1151:1024]= con89;
end
always@(con910)
begin
	 expanded_key_2[1279:1152]= con910;
end
always@(con1011)
begin
	 expanded_key_1[1407:1280]= con1011;
end	 

	 assign expanded_key[383:256]= con23;
	 assign expanded_key[511:384]= con34;
	 assign expanded_key[639:512]= con45;
	 assign expanded_key[767:640]= con56;
	 assign expanded_key[895:768]= con67;
	 assign expanded_key[1023:896]= con78;
	 assign expanded_key[1151:1024]= con89;
	 assign expanded_key[1279:1152]= con910;
	 assign expanded_key[1407:1280]= con1011;
*/	 
		
endmodule
