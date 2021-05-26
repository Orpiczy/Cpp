#include "matlab.hpp"

#include <iostream>
#include <cmath>
#include <sstream>
#include <algorithm>
#include <numeric>


MatVect::MatVect(std::string str) {
    std::istringstream iss(str);

    std::vector<int> elems;
    int elem;
    while (iss) {
        if (!isdigit(iss.peek())) {
            iss.get();
        } else {
            iss >> elem;
            elems.push_back(elem);
        }
    }

    v_ = elems;
}

double MatVect::norm() {
    double sum_of_squares = std::accumulate(v_.begin(), v_.end(), 0,
                                            [](int acc, int elem) { return acc + elem * elem; });
    return sqrt(sum_of_squares);
}

int MatVect::sum() const {
    return std::accumulate(v_.begin(), v_.end(), 0);
}

MatVect add_vectors(const MatVect& v1, const MatVect& v2) {
    MatVect v_sum(v1.size());

    std::transform(v1.begin(), v1.end(), v2.begin(), v_sum.begin(), std::plus<>());

    return v_sum;
}

std::string to_string(const MatVect& v) {
    std::ostringstream oss;

    oss << "[";
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        oss << " " << *it << ((it != v.cend() - 1) ? "," : " ");
    }
    oss << "]";

    return oss.str();
}

Matrix::Matrix(const std::vector<std::vector<int>>& m) {
    std::copy(m.begin(), m.end(), std::back_inserter(matrix_));

//  // Analogiczny kod napisany z użyciem "klasycznej" pętli for.
//  matrix_.reserve(m.size());
//  for (std::size_t i = 0; i < m.size(); i++) {
//    matrix_.push_back(m[i]);
//  }
}

int Matrix::sum() const {
    return std::accumulate(matrix_.begin(), matrix_.end(), 0,
                           [](int acc, const auto& v) { return acc + v.sum(); });
}

Matrix add_matrices(const Matrix& m1, const Matrix& m2) {
    Matrix m_sum(m1);

    std::transform(m1.begin(), m1.end(), m2.begin(), m_sum.begin(),
                   [](const auto& v1, const auto& v2) { return add_vectors(v1, v2); });

//  // Wersja z zastosowaniem pętli for.
//  for (std::size_t i = 0; i < m2.size(); i++) {
//    m_sum[i] = add_vectors(m1[i], m2[i]);
//  }

    return m_sum;
}

std::string to_string(const Matrix& m) {
    std::ostringstream oss;

    oss << "[" << "\n";
    for (auto it = m.cbegin(); it != m.cend(); ++it) {
        oss << "  " << to_string(*it) << ((it != m.cend() - 1) ? "," : "") << "\n";
    }
    oss << "]";

    return oss.str();
}
