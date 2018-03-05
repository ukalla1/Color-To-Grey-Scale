function matrix_to_picture()
    filename = 'output.txt';
    data = importdata(filename);
    display(size(data));
    data_modified = reshape(data,128,128);
    display(size(data_modified));
    newImageData = uint8(zeros(128,128,3));
    newImageData(:,:,1) = data_modified';
    newImageData(:,:,2) = newImageData(:,:,1);
    newImageData(:,:,3) = newImageData(:,:,1);
    figure('Name','Adjusted BW Image'),
    imshow(newImageData);
    display(size(newImageData));