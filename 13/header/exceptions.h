#pragma once
#include <stdexcept>

class BirthDayException : public std::invalid_argument {
public:
    explicit BirthDayException(const std::string& msg) : std::invalid_argument(msg) {}
};

class PhoneException : public std::invalid_argument {
public:
    explicit PhoneException(const std::string& msg) : std::invalid_argument(msg) {}
};

class EmailException : public std::invalid_argument {
public:
    explicit EmailException(const std::string& msg) : std::invalid_argument(msg) {}
};

class FullNameException : public std::invalid_argument {
public:
    explicit FullNameException(const std::string& msg) : std::invalid_argument(msg) {}
};
