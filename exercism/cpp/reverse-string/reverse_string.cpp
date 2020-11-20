#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(const std::string &word){
        return std::string(word.rbegin(), word.rend());
    }

}  // namespace reverse_string
