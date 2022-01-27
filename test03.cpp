#include <iostream>
#include <array>

int main()
{
    const auto n = 200000;
    std::array<int, n> myarray;
    for (auto i = 0; i < n; ++i)
        myarray.at(i) = i + 1;
    for (auto &r : myarray)
        std::cout << ' ' << r;
    return 0;
}