#include <variant>
#include <iostream>

int main()
{
    std::variant v[] = {1, 2.34, "tatata3", 4};
    for (const auto &e : v)
    {
        std::visit([](const auto &x)
                   { std::cout << x << std::endl; },
                   e);
    }
    return 0;
}