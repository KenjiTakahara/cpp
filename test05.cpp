#include <iostream>
#include <variant>
#include <string>
#include "all.h"

int main()
{
    std::variant<int, char, std::string> v = "💩";
    if (std::holds_alternative<std::string>(v))
    {
        auto &x = std::get<std::string>(v);
        std::cout << x << std::endl;
    }
    v = 1234;
    if (std::holds_alternative<int>(v))
    {
        auto &x = std::get<int>(v);
        std::cout << x << std::endl;
        cout << x * 2;
    }
}
