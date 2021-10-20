#include <iostream>
// Section 1 - Lesson 1
int main() {
    const std::string creator = "Bjarne Stroutstrup";
    std::cout << "C++ is a general purpose programming language created by " << creator << "\n";

    std::cout << " C++ is:" << "\n";

    std::string is[3] = {"Low-level",
                          "Supports a variety of features",
                          "Supports move semantics, smart pointers, and automatic type inference, as well as threading, and lambda functions.",};

    for (const auto &item : is) {
        std::cout << "- " << item << "\n";
    }

    const std::string name = "ISO Standard Committee";

    std::cout << "The " << name << "is responsible for adding new features to C++" << "\n";

    std::cout << "The " << name << " has representatives in respective companies, such as:" << "\n";

    std::string companies[3] = { "Microsoft", "Google", "IBM" };

    for (const auto &item : companies) {
        std::cout << "- " << item << "\n";
    }

    std::cout << "These companies come together and propose new standard which are decided in a vote." << "\n";


    std::flush(std::cout);

    return 0;
}
