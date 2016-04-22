`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:28 04/21/2016 
// Design Name: 
// Module Name:    AES 
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
module AES(
    input [127:0] plain_in,
    input [127:0] cipher_in,
    input [127:0] key,
    output [127:0] plain_out,
    output [127:0] cipher_out
    );

	Encryption encrypt(plain_in, key, cipher_out);
	Decryption decrtyp(cipher_in, key, plain_out);

endmodule
