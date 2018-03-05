
%To Convert the input image int a matrix and store in a different location


%   imageFile: Location of image to convert
imageFile = 'C:\Users\uttej\Desktop\My Docs\DSD assignment\assignment2\phase1\parrot128.png';

%Ensure file exists
fileExist = exist(imageFile,'file');
if(~fileExist)
    error('Error: File doesnt exist or is unreadable');
end

%Read in image file
origImageData = imread(imageFile);

%Get image size
[pic_matrix_row pic_matrix_col rgb] = size(origImageData);

%To open files to store my data
file_inputid_r = fopen('pic_r.txt','wt');
file_inputid_g = fopen('pic_g.txt','wt');
file_inputid_b = fopen('pic_b.txt','wt');
for i = 1:pic_matrix_row
    for j =1:pic_matrix_col
        fprintf(file_inputid_r,'%x\n',origImageData(i,j,1));
        fprintf(file_inputid_g,'%x\n',origImageData(i,j,2));
        fprintf(file_inputid_b,'%x\n',origImageData(i,j,3));
    end
end
fclose(file_inputid_r);
fclose(file_inputid_g);
fclose(file_inputid_b);