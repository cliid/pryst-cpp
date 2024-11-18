#pragma once

#include <string>
#include <map>
#include <any>
#include "error_impl.hpp"

namespace pryst {
namespace web {

class Request {
public:
    Request(const std::string& body);
    std::map<std::string, std::any> json();

private:
    std::string body_;
};

} // namespace web
} // namespace pryst
