#include <iostream>

struct BoundingBox {
    int x, y, width, height;
};

struct Detection {
    BoundingBox box;
};

void updatePosition(Detection& det, int delta_x, int delta_y) {
    det.box.x += delta_x;
    det.box.y += delta_y;
}

int main() {
    Detection myDet = {{100, 200, 50, 50}};
    std::cout << "Original position: (" << myDet.box.x << ", " << myDet.box.y << ")" << std::endl;
    updatePosition(myDet, 10, -5);
    std::cout << "New position: (" << myDet.box.x << ", " << myDet.box.y << ")" << std::endl;
    return 0;
}