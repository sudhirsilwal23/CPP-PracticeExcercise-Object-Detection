// Question: Write a function `simulateFrameResize` that takes an `ImageFrame` object by value. The function should modify the width 
// and height of the local copy to new dimensions (e.g., `640x480`) and print them. Show that the original `ImageFrame` outside the function 
// is unaffected.


#include <iostream>

// A structure to hold the dimensions of an image frame.
struct ImageFrame {
    int width, height;
};

// This function takes an ImageFrame by value, so it operates on a copy.
void simulateFrameResize(ImageFrame frame) {
    // The function changes the dimensions of the local 'frame' copy.
    frame.width = 640;
    frame.height = 480;
    std::cout << "Resized frame inside function: " << frame.width << "x" << frame.height << std::endl;
}

int main() {
    // Create an instance of the ImageFrame with initial dimensions.
    ImageFrame myFrame = {1920, 1080};

    // Call the function, passing the object by value.
    simulateFrameResize(myFrame);

    // Print the original object's dimensions to show they haven't changed.
    std::cout << "Original frame outside function: " << myFrame.width << "x" << myFrame.height << std::endl;

    return 0;
}