#include "iterations.h"
#include <random>

static double phi(double x, double r) {
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

double get_next_approx(double r, size_t iter) {
    static double x;
    if (iter == 0) {
        x = init_first_value(r);
        return x;
    }
    x = phi(x, r);
    return x;
}