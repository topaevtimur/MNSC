#ifndef MNSC_ITERATIONS_H_H
#define MNSC_ITERATIONS_H_H

#include <fstream>
#include <iostream>
#include <cmath>

static double const q = 0.999;
static double const eps = 0.1;
static double const r_1 = 3.0;
static double const r_inf = 3.5699456;
static double const delta_0 = 4.6692016;
static double const bif_const = (r_inf - r_1) * delta_0;

static double delta = 1;

static double phi(double x, double r) {
    return r * x * (1 - x);
}

static double lower(double r) {
    return (r - 1) / (2 * r);
}

static double upper(double r) {
    return (r + 1) / (2 * r);
}

static bool aposter(double cur, double prev) {
    return std::abs(cur - prev) > (1 - q) / q * eps;
}

static double get_next_bif() {
    delta *= delta_0;
    return r_inf - (bif_const / delta);
}

void draw_iterations(std::ofstream& plot);
void draw_bifurcation(std::ofstream& plot);

#endif //MNSC_ITERATIONS_H_H
