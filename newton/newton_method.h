#ifndef NEWTON_METHOD_H
#define NEWTON_METHOD_H

const int MAX_ITERATIONS = 50;
const double x_min = -2, x_max = 2, y_min = -2, y_max = 2;
const double step = 0.01;

void draw_attraction_basins(std::ofstream& plot);
void draw_convergence_path(std::ofstream& plot, double x, double y, double precision = 0.01);

#endif // NEWTON_METHOD_H