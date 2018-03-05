`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:30:01 03/03/2018 
// Design Name: 
// Module Name:    Color2BW 
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
module Color2BW(
						input [7:0] colorRed, 
						input [7:0] colorGreen, 
						input [7:0] colorBlue,
						output [7:0] out
			    );

//declaration of wires to hold temp values. They are 14 bits since they are the sum of the above inputs and need extension
wire [15:0] tempRed, tempRed1, tempRed2, tempGreen, tempGreen1, tempGreen2, tempBlue, tempOut, tempOut1;
reg[7:0] convOut [0:16383];

//here I'm multiplying the red value with 0.21 which in binary is 0.00110101
	assign tempRed = {{colorRed,{8'b00000000}}>>>3} + {{colorRed,{8'b00000000}}>>>4};
	assign tempRed1 = {{colorRed,{8'b00000000}}>>>6} + {{colorRed,{8'b00000000}}>>>8};
	assign tempRed2 = tempRed + tempRed1;
	//here I'm multiplying the green value with 0.71 which in binary is 0.10110101
	assign tempGreen = {{colorGreen,{8'b00000000}}>>>1} + {{colorGreen,{8'b00000000}}>>>2};
	assign tempGreen1 = {{colorGreen,{8'b00000000}}>>>5} + {{colorGreen,{8'b00000000}}>>>7};
	assign tempGreen2 = tempGreen - tempGreen1;

	//here I'm multiplying the green value with 0.07 which in binary is 0.00010001
	assign tempBlue = {{colorBlue,{8'b00000000}}>>>4} + {{colorBlue,{8'b00000000}}>>>8};

	//assigning my output which is the sum of the temp values
	assign tempOut = tempRed2 + tempGreen2;
	assign tempOut1 = tempOut + tempBlue;
	assign out = tempOut1 [15:8];

endmodule
