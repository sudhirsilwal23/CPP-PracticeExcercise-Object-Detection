#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

int main() {
    int image_width = 800;
    int image_height = 600;
    BoundingBox bbox = {750, 550, 100, 100}; // Out of bounds

    auto is_within_bounds = [image_width, image_height](const BoundingBox& b) {
        return (b.x >= 0 && b.y >= 0 &&
                b.x + b.width <= image_width &&
                b.y + b.height <= image_height);
    };
    
    std::cout << "Is the bounding box within image bounds? " 
              << std::boolalpha << is_within_bounds(bbox) << std::endl;
    return 0;
}