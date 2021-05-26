#include <vector>
#include <algorithm>
#include "reverse_string.h"

namespace reverse_string {
    std::string reverse_string(std::string word_in){

//        std::vector<char> word_out;
//
//        for(std::string::const_iterator it = word_in.cend();it!=word_in.cbegin();it--){
//            word_out.push_back(*(it-1));
//        }
//
//        return std::string(word_out.begin(),word_out.end());
        std::reverse(word_in.begin(),word_in.end());

        return word_in;
    }
}  // namespace reverse_string
