
#include <random>
#include <iostream>
#include <fstream>

double const q = 0.99;
double const eps = 0.1;

double phi(double x, double r) {
    return r * x * (1 - x);
}

static double lower(double r) {
    return (r - 1) / (2 * r);
}

static double upper(double r) {
    return (r + 1) / (2 * r);
}

static double init_first_value(double r) {
    double l = lower(r);
    double u = upper(r);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(l, u);
    return dis(gen);
}

void get_next_approx(std::ofstream& os, double r) {

    static double prev = 0;
    static double cur = init_first_value(r);
    int i = 0;

    while (std::abs(cur - prev) > (1 - q) / q * eps) {
        os << i << " " << cur << std::endl;
        prev = cur;
        cur = phi(cur, r);
        i++;
    }
    if (system("gnuplot first_gnu -p")) {
        std::cerr << "Can't draw the graph\n";
    }
}


