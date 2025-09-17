
// Question: Write a function `convertColorSpace` that takes a `Pixel` struct by value. Inside the function, change the `r, g, and b` values to
// simulate a grayscale conversion (e.g., `(r+g+b)/3`). Print the new pixel values and confirm the original `Pixel` is unchanged.


#include <iostream>

// A structure to represent a pixel with red, green, and blue components.
struct Pixel {
    int r, g, b;
};

// This function converts a Pixel's color to grayscale.
// It takes the Pixel object by value, so it operates on a copy.
void convertColorSpace(Pixel p) {
    // Calculate the average of the RGB values for grayscale.
    int grayscale = (p.r + p.g + p.b) / 3;
    // Set all color components of the local copy to the grayscale value.
    p.r = p.g = p.b = grayscale;
    std::cout << "Grayscale pixel inside function: (" << p.r << ", " << p.g << ", " << p.b << ")" << std::endl;
}

int main() {
    // Create a Pixel object with initial RGB values.
    Pixel myPixel = {255, 128, 64};

    // Call the function, passing the object by value.
    convertColorSpace(myPixel);

    // Print the original pixel's values to show they haven't changed.
    std::cout << "Original pixel outside function: (" << myPixel.r << ", " << myPixel.g << ", " << myPixel.b << ")" << std::endl;

    return 0;
}