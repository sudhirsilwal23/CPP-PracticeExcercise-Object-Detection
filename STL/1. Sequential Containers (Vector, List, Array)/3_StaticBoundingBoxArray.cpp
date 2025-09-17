#include <iostream>

struct BoundingBox {
    double x, y, width, height;
};

void analyzeBoundingBoxes(const BoundingBox boxes[], int size) {
    if (size == 0) return;
    int largestWidthIndex = 0;
    int smallestHeightIndex = 0;
    for (int i = 1; i < size; ++i) {
        if (boxes[i].width > boxes[largestWidthIndex].width) {
            largestWidthIndex = i;
        }
        if (boxes[i].height < boxes[smallestHeightIndex].height) {
            smallestHeightIndex = i;
        }
    }
    std::cout << "Bounding box with the largest width (" << boxes[largestWidthIndex].width << ") is at index " << largestWidthIndex << std::endl;
    std::cout << "Bounding box with the smallest height (" << boxes[smallestHeightIndex].height << ") is at index " << smallestHeightIndex << std::endl;
}

int main() {
    const int MAX_BOXES = 5;
    BoundingBox detections[MAX_BOXES] = {
        {10, 20, 50, 40}, {100, 150, 80, 60}, {200, 250, 30, 20},
        {300, 350, 100, 50}, {400, 450, 70, 90}
    };
    analyzeBoundingBoxes(detections, MAX_BOXES);
    return 0;
}