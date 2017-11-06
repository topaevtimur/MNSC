#include <iostream>
#include "simple_iteration/iterations.h"

int main() {
    double r = 2;

    for (int i = 0; i < 50; i++) {
        std::cout << get_next_approx(r, i) << std::endl;
    }
    return 0;
}