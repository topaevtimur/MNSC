#include <iostream>
#include <fstream>
#include "simple_iteration/bifurcations.cpp"

int main() {
    double r;
    size_t iterations;
    std::cin >> r;
    std::ofstream os("plot");
    //get_next_approx(os, r);
    draw_bifurcation(os);
    os.close();
    return 0;
}