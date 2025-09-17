#include <iostream>
#include <chrono>

struct BoundingBox {
    int w = 100, h = 100;
};

// Regular function for area calculation
int calculate_area_func(const BoundingBox& bbox) {
    return bbox.w * bbox.h;
}

int main() {
    BoundingBox bbox;
    const int iterations = 100000000;

    // Lambda performance test
    auto start_lambda = std::chrono::high_resolution_clock::now();
    int sum_lambda = 0;
    auto area_lambda = [&](const BoundingBox& b) { return b.w * b.h; };
    for (int i = 0; i < iterations; ++i) {
        sum_lambda += area_lambda(bbox);
    }
    auto end_lambda = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff_lambda = end_lambda - start_lambda;
    
    // Regular function performance test
    auto start_func = std::chrono::high_resolution_clock::now();
    int sum_func = 0;
    for (int i = 0; i < iterations; ++i) {
        sum_func += calculate_area_func(bbox);
    }
    auto end_func = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff_func = end_func - start_func;

    std::cout << "Lambda time: " << diff_lambda.count() << "s, Sum: " << sum_lambda << std::endl;
    std::cout << "Function time: " << diff_func.count() << "s, Sum: " << sum_func << std::endl;
    return 0;
}