`timescale 1ns / 1ps
// Module for shifting the rows of the state matrix


module shift_rows(
    input  [31:0] state0_in,
    input  [31:0] state1_in,
    input  [31:0] state2_in,
    input  [31:0] state3_in,
    output  [31:0] state0_out,
    output  [31:0] state1_out,
    output  [31:0] state2_out,
    output  [31:0] state3_out
    );

    // state0 stays the same
    assign state0_out = state0_in;

    // When there is an input of state1 change the output
    always@(state1_in)
    begin
        state1_out = { state1_in[23:0], state1_in[31:24] };
    end

    // When there is an input of state2 change the output
    always@(state2_in)
    begin
        state2_out = { state2_in[15:0], state2_in[31:16] };
    end

    // When there is an input of state3 change the output
    always@(state1_in)
    begin
        state3_out = { state3_in[7:0], state3_in[31:8] };
    end

endmodule
