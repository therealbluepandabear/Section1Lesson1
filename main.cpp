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

    const int first_standard_date = 1998;
    const int minor_revision_date = 2003;
    const int major_revision_date = 2011;
    const int major_revision_date_two = 2014;

    std::cout << "You may be asking when the first C++ standard was published, well that was in " << first_standard_date << "\n";

    std::cout << "It was then followed by a minor revision in " << minor_revision_date << "\n";
    std::cout << "Other dates which introduced major features/enhancements were " << major_revision_date << " and " << major_revision_date_two << "\n";

    std::cout << "Where is C++ used?" << "\n";

    std::string use_cases[4] = {"High-performance software", "A.I. applications", "Games", "Operating System Development"};

    for (const auto &item : use_cases) {
        std::cout << "- " << item << "\n";
    }
    std::cout << "And this is just only some of the industries C++ is used in!" << "\n";

    std::flush(std::cout);

    return 0;
}
