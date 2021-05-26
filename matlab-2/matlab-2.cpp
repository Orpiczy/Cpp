#include <iostream>
#include <cstdlib>

#include "matlab.hpp"

int main() {
    std::vector<int> vs{1, 2};
    MatVect v(vs);
    print_vector(v);

    return EXIT_SUCCESS;
}
