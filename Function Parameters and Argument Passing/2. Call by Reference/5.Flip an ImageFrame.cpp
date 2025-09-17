#include <iostream>
#include <vector>

struct ImageFrame {
    int width, height;
    std::vector<int> pixelData;
};

void flipImageHorizontally(ImageFrame& frame) {
    for (int i = 0; i < frame.height; ++i) {
        for (int j = 0; j < frame.width / 2; ++j) {
            std::swap(frame.pixelData[i * frame.width + j], frame.pixelData[i * frame.width + (frame.width - 1 - j)]);
        }
    }
}

int main() {
    ImageFrame myFrame;
    myFrame.width = 3;
    myFrame.height = 1;
    myFrame.pixelData = {1, 2, 3};
    std::cout << "Original pixels: 1 2 3" << std::endl;
    flipImageHorizontally(myFrame);
    std::cout << "Flipped pixels: " << myFrame.pixelData[0] << " " << myFrame.pixelData[1] << " " << myFrame.pixelData[2] << std::endl;
    return 0;
}