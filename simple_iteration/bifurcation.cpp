
#include <fstream>
#include "iterations.cpp"


void draw_bifurcation(std::ofstream& os) {
    std::cout << 454;
    double prev, cur, last1, last2, last3, last4;
    double a[1000];
    int cnt = 0;
    double r = 0.1;

    while (r < 3) {
        cur = 1 - 1 / r + eps;
        prev = 0;
        while (std::abs(prev - cur) > (1 - q) / q * eps) {
            prev = cur;
            cur = phi(prev, r);
            cnt++;
        }
        os << r << " " << cur << "\n" << std::endl;
        r += 0.1;
    }
    while (r < 3.5) {
        cur = 1 - 1 / r + eps;
        for (int i = 0; i < 1000; i++) {
            prev = cur;
            cur = phi(prev, r);
        }
        os << r << " " << cur << "\n" <<std::endl;
        os << r << " " << phi(cur, r) << "\n" << std::endl;
        r += 0.1;
    }
    while (r < 3.54) {
        cur = 1 - 1 / r + eps;
        for (int i = 0; i < 997; i++) {
            prev = cur;
            cur = phi(prev, r);
        }
        os << r << " " << cur << "\n" <<std::endl;
        cur = phi(cur, r);
        os << r << " " << cur << "\n" << std::endl;
        cur = phi(cur, r);
        os << r << " " << cur << "\n" << std::endl;
        cur = phi(cur, r);
        os << r << " " << cur << "\n" << std::endl;
        r += 0.01;
    }

    if (system("gnuplot first_gnu -p")) {
        std::cerr << "Can't draw the graph\n";
    }
}

