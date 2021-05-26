#ifndef MATLAB_HPP_
#define MATLAB_HPP_

// Biblioteka <cstddef> zawiera definicję typu `std::size_t`.
#include <cstddef>
// Biblioteka <vector> zawiera definicję szablonu klasy `std::vector`.
#include <vector>

class MatVect {
public:
    MatVect(std::size_t n) : v_(n, 0) {}

    MatVect(std::vector<int> v) : v_(v) {}

    int get_elem(std::size_t pos) { return v_[pos]; }

    void set_elem(std::size_t pos, int val) { v_[pos] = val; }

    std::size_t size() { return v_.size(); }

    double norm();

private:
    std::vector<int> v_;
};

MatVect add_vectors(MatVect v1, MatVect v2);

void print_vector(MatVect v);


#endif /* MATLAB_HPP_ */
