`define OUTPUT_FILEPATH  "C:\\Users\\uttej\\Desktop\\My Docs\\DSD assignment\\assignment2\\phase1\\output.txt"
//`define INPUT_PATH_RED "C:\\Users\\uttej\\Desktop\\My Docs\\DSD assignment\\assignment2\\phase1\\pic_r.txt"
`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:57:10 03/03/2018
// Design Name:   Color2BW
// Module Name:   C:/Users/uttej/Desktop/My Docs/DSD assignment/assignment2/phase1/Question1/Color2BW_tb.v
// Project Name:  Color2BW
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Color2BW
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Color2BW_tb;

	// Inputs
	reg [7:0] colorRed;
	reg [7:0] colorGreen;
	reg [7:0] colorBlue;
	reg [7:0] red [0:16383];
	reg [7:0] green [0:16383];
	reg [7:0] blue [0:16383];
	// Outputs
	wire [7:0] out;
	reg en;
	integer i, fid_output;
	// Instantiate the Unit Under Test (UUT)
	Color2BW uut (
		.colorRed(colorRed), 
		.colorGreen(colorGreen), 
		.colorBlue(colorBlue), 
		.out(out)
	);
	
	initial begin
		$readmemh("C:\\Users\\uttej\\Desktop\\My Docs\\DSD assignment\\assignment2\\phase1\\pic_r.txt",red);
		$readmemh("C:\\Users\\uttej\\Desktop\\My Docs\\DSD assignment\\assignment2\\phase1\\pic_g.txt",green);
		$readmemh("C:\\Users\\uttej\\Desktop\\My Docs\\DSD assignment\\assignment2\\phase1\\pic_b.txt",blue);
		$monitor("Red = %h, Green = %h, Blue = %h", red[0], green[0], blue[0]);
		

	fid_output = $fopen(`OUTPUT_FILEPATH,"w");
	for(i=0; i<16384; i= i+1) begin
		assign colorRed = red[i];
		assign colorGreen = green[i];
		assign colorBlue = blue[i];
		en = 0;
		#20;
		en = 1;
		#20;	
	end
	$fclose(fid_output);
	end
	
	//initial fid_output = $fopen(`OUTPUT_FILEPATH, "w");
	always @(en) begin
		//repeat(16384)
		$monitor("out = %h", out);
		$fwrite(fid_output, "%d\n",out);
		#20;
		//end
		
	end
	      
endmodule

