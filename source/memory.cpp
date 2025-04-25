#include "memory.hpp"
#include "utils.hpp"
#include "exceptions.hpp"

#define DEFAULT_MEMORY_VALUE "0"

std::string Memory::get() const {
    return this->number;
}

void Memory::set(std::string value) {
    if (is_double(value)) {
        this->number = value;
    }
    else {
        throw InvalidValueInMemory("Trying to memory an expression, not a number");
    }
}

void Memory::clear() {
    this->number = DEFAULT_MEMORY_VALUE;
}