#include <iostream>
#include <fstream>
#include "simple_iteration/iterations.h"

int main() {
    double r;
    size_t iterations;
    std::cin >> r;
    std::ofstream os("plot");
    //std::ifstream is("config");
    std::cin >> iterations;
    if (r <= 0)
        std::cout << "Must be positive\n";
    for (size_t i = 0; i < iterations; i++) {
        os << i << " " << get_next_approx(r, i) << std::endl;
    }
    if (system("gnuplot first_gnu -p")) {
        std::cerr << "Can't draw the graph\n";
    }
    os.close();
    return 0;
}