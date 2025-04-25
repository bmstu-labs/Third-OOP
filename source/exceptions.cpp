#include "exceptions.hpp"

InvalidValueInMemory::InvalidValueInMemory(const std::string &msg) : message(msg) {}

const char *InvalidValueInMemory::what() const noexcept {
    return this->message.c_str();
}