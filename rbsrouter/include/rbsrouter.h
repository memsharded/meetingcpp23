#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define RBSROUTER_EXPORT __declspec(dllexport)
#else
  #define RBSROUTER_EXPORT
#endif

RBSROUTER_EXPORT void rbsrouter();
RBSROUTER_EXPORT void rbsrouter_print_vector(const std::vector<std::string> &strings);
