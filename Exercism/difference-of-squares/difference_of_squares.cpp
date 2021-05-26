#include "difference_of_squares.h"
#include <math.h>
#include <stdexcept>
#include <iostream>

namespace difference_of_squares {
    int square_of_sum(const int n) {

        if (n < 0) {
            throw std::domain_error("n has to be positive integer");
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += i + 1;
        }
        return pow(sum, 2);
    }

    int sum_of_squares(const int n) {
        if (n < 0) {
            throw std::domain_error("n has to be positive integer");
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += pow(i + 1, 2);
        }
        return sum;
    }

    int difference(const int n) {
        return square_of_sum(n) - sum_of_squares(n);
    }
}  // namespace difference_of_squares
