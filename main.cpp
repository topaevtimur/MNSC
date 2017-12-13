#include <iostream>
#include <fstream>
//#include "simple_iteration/iterations.cpp"
#include "simple_iteration/bifurcation.cpp"

int main() {
    double r;
    std::cin >> r;
    std::ofstream os("plot");
    get_next_approx(os, r);
//    draw_bifurcation(os);
    os.close();
    return 0;
}