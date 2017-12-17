#include <vector>
#include "simple_iterations.h"

static const int ITERS = 1000;

static void print(std::ofstream& plot, double r, std::vector<double>& points) {
    plot << r;
    for (int i = 0; i < points.size(); i++) {
        plot << " " << points[i];
    }
    plot << std::endl;
}

static void print2(std::ofstream& plot, double r, std::vector<double>& points) {
    plot << r;
    for (int i = 0; i < points.size(); i++) {
        plot << " " << points[i];
    }
    for (int i = 0; i < points.size(); i++) {
        plot << " " << points[i];
    }
    plot << std::endl;
}

void draw_bifurcation(std::ofstream& plot) {
    int max_bif;
    std::cout << "Enter the desired number of bifurcation points: ";
    std::cin >> max_bif;

    double prev = 0, cur;
    double r = 0.1, step = 0.01;
    int branches = 1;

    for (int i = 0; i < max_bif; i++) {
        double r_i = get_next_bif();
        std::vector<double> next(branches);
        while (r < r_i) {
            cur = 1 - 1 / r + eps;
            for (int k = 0; k < ITERS - branches; k++) {
                prev = cur;
                cur = phi(prev, r);
            }
            for (int j = 0; j < branches; j++) {
                next[j] = cur;
                cur = phi(cur, r);
            }
            print(plot, r, next);
            r += step;
        }
        print2(plot, r - step, next);

        branches *= 2;
        step *= 0.3;
    }

    branches /= 2;
    std::ofstream gnuf("bif_gnu");
    gnuf << "set term wxt\nset grid xtics ytics\nshow grid\nset clip two\nplot\\\n";
    for (int i = 2; i <= branches; i++) {
        gnuf << "\"bif_plot\" using 1:" << i << " ps 0 lw 2 with linespoints,\\\n";
    }
    gnuf << "\"bif_plot\" using 1:" << branches + 1 << " ps 0 lw 2 with linespoints" << std::endl;
    gnuf.close();

    if (system("gnuplot bif_gnu -p")) {
        std::cerr << "Can't draw the graph\n";
    }
}

