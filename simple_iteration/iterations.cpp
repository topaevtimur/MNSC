#include <random>
#include <iostream>
#include <fstream>
#include "constants.h"

static double init_first_value(double r) {
    double l = lower(r);
    double u = upper(r);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(l, u);
    return dis(gen);
}

void draw_iterations(std::ofstream &os) {
    static double r;
    std::cout << "Enter the desired value of r: ";
    std::cin >> r;
    static double prev = 0;
    static double cur = init_first_value(r);

    static int i = 0;
    while (aposter(cur, prev)) {
        os << i << " " << cur << std::endl;
        prev = cur;
        cur = phi(cur, r);
        i++;
    }

    if (system("gnuplot it_gnu -p")) {
        std::cerr << "Can't draw the graph\n";
    }
}
