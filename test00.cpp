#include <iostream>
const char *func()
{
    const char *str = "abvfg";
    return str;
}

int main()
{
    std::cout << func() << std::endl;
}