#include <iostream>
#include <fstream>
#include "simple_iteration/bifurcations.cpp"
#include "simple_iteration/iterations.cpp"

int main() {
    std::ofstream it("it_plot");
    draw_iterations(it);
    it.close();
    std::ofstream bif("bif_plot");
    draw_bifurcation(bif);
    bif.close();

    return 0;
}