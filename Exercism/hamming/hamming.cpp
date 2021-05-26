#include "hamming.h"
#include <stdexcept>
namespace hamming {
    int compute(const std::string&  str1,const std::string&  str2){
        int dist = 0;
        if(str1.length()!=str2.length()){
            throw std::domain_error("Attempt to compare strings of not equal length");
        }
        for(std::pair<std::string::const_iterator,std::string::const_iterator> i(std::cbegin(str1),std::cbegin(str2));
            i.first != str1.cend() && i.second != str2.cend();++i.first, ++i.second){
            if(*i.first !=  *i.second){
                dist++;
            }
        }
        return dist;
    }
}  // namespace hamming
