#include "utils.hpp"

bool is_double(std::string &str) {
    bool result = true;
    
    try {
        std::stod(str);
    }
    catch (...) {
        result = false;
    }

    return result;
}