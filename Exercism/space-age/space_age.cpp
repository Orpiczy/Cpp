#include "space_age.h"

namespace space_age {

    space_age::space_age(double time_sec) :time_sec_(round(abs(time_sec))){

        on_earth_ = time_sec_/31557600;

        on_mercury_ = on_earth_/0.2408467;
        on_venus_ = on_earth_/0.61519726;
        on_mars_ = on_earth_/1.8808158;
        on_jupiter_ = on_earth_/11.862615;
        on_saturn_ = on_earth_/29.447498;
        on_uranus_ = on_earth_/84.016846;
        on_neptune_ = on_earth_/164.79132;
    }


}  // namespace space_age
