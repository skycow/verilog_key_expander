module round_xor(
	input [127:0] round_xor_a,
	input [127:0] round_xor_b,
	output [127:0] round_xor_out
	);

assign round_xor_out = round_xor_a ^ round_xor_b;

endmodule