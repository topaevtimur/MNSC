#include <fstream>
#include <iostream>
#include "constants.h"

void draw_bifurcation(std::ofstream& plot) {
    int max_bif;
    std::cout << "Enter the desired number of bifurcation points: ";
    std::cin >> max_bif;
    static double prev = 0, cur;
    static double r = 0.1, step = 0.01;
    static int branches = 1;

    for (int i = 0; i < max_bif; i++) {
        double r_i = get_next_bif();
        while (r < r_i) {
            cur = 1 - 1 / r + eps;
            for (int k = 0; k < 1000; k++) {
                prev = cur;
                cur = phi(prev, r);
            }
            for (int j = 0; j < branches; j++) {
                plot << r << " " << cur << "\n" << std::endl;
                cur = phi(cur, r);
            }
            r += step;
        }
        branches *= 2;
        step *= 0.3;
    }

    if (system("gnuplot bif_gnu -p")) {
        std::cerr << "Can't draw the graph\n";
    }
}

