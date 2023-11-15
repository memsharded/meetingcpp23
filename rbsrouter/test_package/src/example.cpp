#include "rbsrouter.h"
#include <vector>
#include <string>

int main() {
    rbsrouter();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    rbsrouter_print_vector(vec);
}
