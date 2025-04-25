#pragma once

#include <string>

class Memory {
private:
    std::string number;
public:
    std::string get() const;

    void clear();

    void set(std::string);
};