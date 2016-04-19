`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:50:53 04/19/2016 
// Design Name: 
// Module Name:    inverse_shift_rows 
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
module inverse_shift_rows(
    input [127:0] state_in,
    output [127:0] state_out
    );

	assign state_out[127:96] = {state_in[127:120], state_in[23:16], state_in[47:40], state_in[71:64]};
	assign state_out[95:64]  = {state_in[95:88], state_in[119:112], state_in[15:8], state_in[39:32]};
	assign state_out[63:32]  = {state_in[63:56], state_in[87:80], state_in[111:104], state_in[7:0]};
	assign state_out[31:0]   = {state_in[31:24], state_in[55:48], state_in[79:72], state_in[103:96]};
   

endmodule
