#include <iostream>
// Section 1 - Lesson 1
int main() {
    const std::string creator = "Bjarne Stroutstrup";
    std::cout << "C++ is a general purpose programming language created by " << creator << "\n";

    std::cout << " C++ is:";

    std::string is[10] = {"Low-level",
                          "Supports a variety of features",
                          "Supports move semantics, smart pointers, and automatic type inference, as well as threading, and lambda functions.",};

    for (const auto &item : is) {
        std::cout << "- " << item << "\n";
    }

    return 0;
}
