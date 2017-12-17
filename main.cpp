#include <iostream>
#include <fstream>
#include "simple_iteration/iterations.h"
#include "newton/newton_method.h"

int main() {
    std::ofstream it("it_plot");
    draw_iterations(it);
    it.close();

    std::ofstream bif("bif_plot");
    draw_bifurcation(bif);
    bif.close();

    std::ofstream newton("newton_plot");
    draw_attraction_basins(newton);
    newton.close();

//    std::ofstream path("path_plot");
//    draw_convergence_path(path, -2, -1.89);
//    path.close();

    return 0;
}