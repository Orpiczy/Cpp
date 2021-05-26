#if !defined(ALL_YOUR_BASE_H)
#define ALL_YOUR_BASE_H
#include <vector>

namespace all_your_base {
    std::vector<unsigned int> convert(unsigned int old_base, std::vector<unsigned int> coded_value, unsigned int new_base);
}  // namespace all_your_base

#endif // ALL_YOUR_BASE_H