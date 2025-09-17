#include <iostream>
#include <queue>
#include <string>

void processImages(std::queue<std::string>& imageQueue) {
    while (!imageQueue.empty()) {
        std::string filePath = imageQueue.front();
        imageQueue.pop();
        std::cout << "Processing image file: " << filePath << "..." << std::endl;
        std::cout << "  [Detection Complete]" << std::endl;
    }
    std::cout << "All images have been processed." << std::endl;
}

int main() {
    std::queue<std::string> imageFiles;
    imageFiles.push("C:\\images\\frame_001.jpg");
    imageFiles.push("C:\\images\\frame_002.jpg");
    imageFiles.push("C:\\images\\frame_003.jpg");
    processImages(imageFiles);
    return 0;
}