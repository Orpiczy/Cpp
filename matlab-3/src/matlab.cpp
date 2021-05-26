#include "matlab.hpp"

#include <iostream>
#include <cmath>
#include <sstream>
#include <algorithm>


// [OPT]
MatVect::MatVect(std::string str) {
    std::istringstream iss(str);

    std::vector<int> elements;
    int elem;
    while (iss) {
        if (!isdigit(iss.peek())) {
            iss.get();
        } else {
            iss >> elem;
            elements.push_back(elem);
        }
    }

    v_ = elements;
}

double MatVect::norm() {
    double sum_of_squares = 0.0;
    for (const auto& elem : v_) {
        sum_of_squares += elem * elem;
    }
    return sqrt(sum_of_squares);
}

MatVect add_vectors(const MatVect& v1, const MatVect& v2) {
    MatVect v_sum(v1.size());

    std::transform(v1.cbegin(), v1.cend(), v2.cbegin(), v_sum.begin(), std::plus<>());

    return v_sum;
}

std::string to_string(const MatVect& v) {
    std::ostringstream oss;

    for (const auto& elem : v) {
        oss << elem << " ";
    }

    return oss.str();
}
