#include <iostream>
#include <fstream>
#include "simple_iteration/iterations.h"

int main() {
    double r;
    size_t iterations;
    std::cin >> r;
    std::ofstream os("plot");
    std::ifstream is("config");
    is >> iterations;
    if (r <= 0)
        std::cout << "Must be positive\n";
    for (size_t i = 0; i < iterations; i++) {
        os << i << " " << get_next_approx(r, i) << std::endl;
    }
    return 0;
}