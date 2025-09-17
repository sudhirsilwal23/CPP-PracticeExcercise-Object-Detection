#include <iostream>

struct ImageFrame {
    int width, height;
};

void simulateFrameResize(ImageFrame frame) {
    frame.width = 640;
    frame.height = 480;
    std::cout << "Resized frame inside function: " << frame.width << "x" << frame.height << std::endl;
}

int main() {
    ImageFrame myFrame = {1920, 1080};
    simulateFrameResize(myFrame);
    std::cout << "Original frame outside function: " << myFrame.width << "x" << myFrame.height << std::endl;
    return 0;
}