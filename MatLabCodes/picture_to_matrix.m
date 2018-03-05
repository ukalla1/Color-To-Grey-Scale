%function [pic_matrix] = picture_to_matrix(picture_name)
% this funcation take the image and changes to a matrix of 16384x3 matrix
picture_name='parrot128.png'

input_mat = imread(picture_name);

figure('Name','Original RGB Image');
imshow(input_mat);

[row col color] = size(input_mat);
temp = zeros(row*col,color);

for i=1:row
    for j=1:col
        temp(row*(i-1)+j, 1) = typecast(input_mat(i, j, 1),'uint8');
        temp(row*(i-1)+j, 2) = typecast(input_mat(i, j, 2),'uint8');
        temp(row*(i-1)+j, 3) = typecast(input_mat(i, j, 3),'uint8');
    end
end


pic_matrix = temp;
