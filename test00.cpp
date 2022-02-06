#include <iostream>
#include <bitset>
const char *func()
{
    const char *str = "abvfg";
    return str;
}

int main()
{
    auto a = 0x1;
    std::cout << a << std::endl;
    std::cout << static_cast<std::bitset<32>>(~a) << std::endl;
}