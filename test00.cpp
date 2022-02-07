#include <iostream>
#include <bitset>
const char *func()
{
    const char *str = "abvfg";
    return str;
}

int main()
{
    int a = 0b0111;
    int b = 0b0010;
    std::cout << (a ^ b) << std::endl;
    // std::cout << static_cast<std::bitset<32>>(~a) << std::endl;
}