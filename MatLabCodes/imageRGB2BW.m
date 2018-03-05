function [ origImageData newImageData ] = imageRGB2BW( imageFile )
% Converts RGB image to Black & White
%
%   imageFile: Location of image to convert


%Ensure file exists
fileExist = exist(imageFile,'file');
if(~fileExist)
    error('Error: File doesnt exist or is unreadable');
end

%Read in image file
origImageData = imread(imageFile);

%Get image size
[num_rows num_cols rgb] = size(origImageData);

%Display original RGB image
figure('Name','Original RGB Image');
imshow(origImageData);

%Create Black & White image using luminosity (0.21R + 0.71G + 0.07B)
newImageData = uint8(zeros(size(origImageData)));
newImageData(:,:,1) = .21*origImageData(:,:,1)+.71*origImageData(:,:,2)+...
                      .07*origImageData(:,:,3);
newImageData(:,:,2) = newImageData(:,:,1);
newImageData(:,:,3) = newImageData(:,:,1);

%Display B&W image
figure('Name','Adjusted BW Image'),
imshow(newImageData);

end