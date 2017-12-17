#include <fstream>
#include "newton_method.h"
#include <complex>
#include <vector>
#include "iostream"

typedef std::complex<double> cdouble;

static const double PI = std::acos(-1);
static const std::vector<cdouble> ROOTS = {
        {1, 0},
        {cos(2*PI/3), sin(2*PI/3)},
        {cos(4*PI/3), sin(4*PI/3)}
};

static const int DIVERGES = -1;

static int calculate(double x, double y, double precision = 0.01) {
    double sq_precision = precision * precision;
    cdouble prev(x, y);

    for (int i = 0; i < MAX_ITERATIONS; i++) {
        cdouble next = prev - cdouble(1/3.0) * (prev - cdouble(1.0) / (prev * prev));
        swap(next, prev);
        if (norm(prev - next) <= sq_precision) {
            break;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (norm(ROOTS[i] - prev) <= sq_precision + 1e-9) {
            return i;
        }
    }
    return DIVERGES;
}

void draw_attraction_basins(std::ofstream& plot) {

    for (double x = x_min; x <= x_max;) {
        for (double y = y_min; y <= y_max;) {
            plot << x << " " << y << " " << calculate(x, y) << "\n";
            y += step;
        }
        x += step;
    }
    if (system("gnuplot newton_gnu -p")) {
        std::cerr << "Can't draw the graph\n";
    }
}

void draw_convergence_path(std::ofstream& plot, double x, double y, double precision) {
    double sq_precision = precision * precision;
    cdouble prev(x, y);

    for (int i = 0; i < MAX_ITERATIONS; i++) {
        cdouble next = prev - cdouble(1/3.0) * (prev - cdouble(1.0) / (prev * prev));
        plot << next.real() << " " << next.imag() << "\n";
        swap(next, prev);
        if (norm(prev - next) <= sq_precision) {
            break;
        }
    }
    if (system("gnuplot path_gnu -p")) {
        std::cerr << "Can't draw the graph\n";
    }
}