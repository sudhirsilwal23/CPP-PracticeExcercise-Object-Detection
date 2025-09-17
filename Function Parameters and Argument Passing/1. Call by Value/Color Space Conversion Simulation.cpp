#include <iostream>

struct Pixel {
    int r, g, b;
};

void convertColorSpace(Pixel p) {
    int grayscale = (p.r + p.g + p.b) / 3;
    p.r = p.g = p.b = grayscale;
    std::cout << "Grayscale pixel inside function: (" << p.r << ", " << p.g << ", " << p.b << ")" << std::endl;
}

int main() {
    Pixel myPixel = {255, 128, 64};
    convertColorSpace(myPixel);
    std::cout << "Original pixel outside function: (" << myPixel.r << ", " << myPixel.g << ", " << myPixel.b << ")" << std::endl;
    return 0;
}