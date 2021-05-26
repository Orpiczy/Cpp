#include "complex.hpp"

int main() {
    Complex c1(1.0, 0.5);

    double data[] = {0.2, 1.0};
    Complex c2(data);

    // Powyższy test można w skrócie zapisać z użyciem
    // tzw. list initialization.
    Complex c3({0.2, 1.0});

    return 0;
}
