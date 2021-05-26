#ifndef COMPLEX1_HPP_
#define COMPLEX1_HPP_

class Complex {
public:
    Complex(double re, double im) : re_(re), im_(im) {}

    // Użycie delegowania konstruktora.
    Complex(double data[2]) : Complex(data[0], data[1]) {}

    double re() const { return re_; }
    double im() const { return im_; }
private:
    double re_;
    double im_;
};

#endif
