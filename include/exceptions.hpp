#pragma once

#include <exception>
#include <string>

class InvalidValueInMemory : public std::exception {
private:
    std::string message;
public:
    explicit InvalidValueInMemory(const std::string &);

    const char *what() const noexcept override;
};