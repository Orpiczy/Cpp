#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H
#include <math.h>

namespace space_age {
class space_age {
public:
    explicit space_age(double time_sec);

    double seconds() const {return (int) time_sec_;}
    double on_mercury () const {return on_mercury_;};
    double on_venus() const {return on_venus_;};
    double on_earth() const {return on_earth_;};
    double on_mars() const {return on_mars_;};
    double on_jupiter() const {return on_jupiter_;};
    double on_saturn() const {return on_saturn_;};
    double on_uranus() const {return on_uranus_;};
    double on_neptune() const {return on_neptune_;};

private:
    double time_sec_ = 0;
    double on_mercury_ = -1;
    double on_venus_ = -1;
    double on_earth_ = -1;
    double on_mars_ = -1;
    double on_jupiter_ = -1;
    double on_saturn_ = -1;
    double on_uranus_ = -1;
    double on_neptune_ = -1;
};
}  // namespace space_age

#endif // SPACE_AGE_H