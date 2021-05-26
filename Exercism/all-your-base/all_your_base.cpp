#include <vector>
#include <cmath>
#include "all_your_base.h"
#include <list>
#include <stdexcept>

namespace all_your_base {
    std::vector<unsigned int>
    convert(unsigned int old_base, std::vector<unsigned int> coded_value, unsigned int new_base) {

        std::vector<unsigned int> invalid_arg = {0, 1};
        for (auto elem:invalid_arg) {
            if (old_base == elem || new_base == elem) {
                throw std::invalid_argument("Attempt to compare strings of not equal length");
            }
        }
        int size = static_cast<int>(coded_value.size());
        int uncoded_value = 0;
        for (int i = 0; i < size; i++) {
            uncoded_value += coded_value[size - 1 - i] * std::pow(old_base, i);
        }

        std::list<unsigned int> newly_coded_value;
        newly_coded_value.push_front(
                uncoded_value % new_base); //musimy sprawić by kodowana wartość była wielokrotnością podstawy
        uncoded_value -= uncoded_value % new_base;


        int base_pow = 1;
        unsigned int bit = 0;
        int calculated_pow = 0;
        while (uncoded_value != 0) {
            calculated_pow = static_cast<int >(pow(new_base, base_pow));
            bit = (int) uncoded_value / calculated_pow;
            if (bit < 10) {
                if (base_pow != static_cast<int>(newly_coded_value.size())) {
                    //już istnieje bit odpowiadjący tej potendze, cofamy się
                    auto it = newly_coded_value.begin();
                    std::advance(it, base_pow);
                    *it = bit;
                    uncoded_value -= bit * calculated_pow;
                    base_pow--;
                } else {
                    newly_coded_value.push_front(bit);
                    uncoded_value -= bit * calculated_pow;
                    base_pow--;
                }
            } else {
                newly_coded_value.push_front(0);
                base_pow++;
            };
        }

        std::vector<unsigned int> result(newly_coded_value.size());
        std::copy(newly_coded_value.begin(), newly_coded_value.end(), result.begin());

        return result;
    }
}  // namespace all_your_base
