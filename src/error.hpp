#pragma once

#include <string>

namespace pryst {

class Error : public std::exception {
public:
    Error(const std::string& msg) : message_(msg) {}
    Error(const std::string& type, const std::string& msg) : message_(type + ": " + msg) {}

    const std::string& message() const { return message_; }
    const char* what() const noexcept override { return message_.c_str(); }

private:
    std::string message_;
};

} // namespace pryst
