#include <iostream>
#include <vector>

using Image = std::vector<std::vector<int>>;

struct BoundingBox {
    int x, y, width, height;
};

int main() {
    Image image(100, std::vector<int>(100, 0));
    std::vector<BoundingBox> detections = {{10, 10, 30, 30}, {50, 50, 20, 20}};

    auto draw_box = [&](const BoundingBox& bbox) {
        for (int i = bbox.y; i < bbox.y + bbox.height; ++i) {
            for (int j = bbox.x; j < bbox.x + bbox.width; ++j) {
                if (i < image.size() && j < image[0].size()) {
                    image[i][j] = 255; // Set pixel to white
                }
            }
        }
    };

    for (const auto& box : detections) {
        draw_box(box);
    }
    
    std::cout << "Simulated image modification: pixels at (15, 15) and (55, 55) are now " 
              << image[15][15] << " and " << image[55][55] << std::endl;
    return 0;
}