#pragma once

#include <string>

namespace pryst {
namespace web {

class ValidationError : public std::runtime_error {
public:
    ValidationError(const std::string& message, const std::string& field, const std::string& code)
        : std::runtime_error(message), field_(field), code_(code) {}

    const std::string& field() const { return field_; }
    const std::string& code() const { return code_; }

private:
    std::string field_;
    std::string code_;
};

} // namespace web
} // namespace pryst
