#include <iostream>

void hoge() noexcept
{
    throw "aabb";
}

int main()
{
    try
    {
        hoge();
    }
    catch (...)
    {
        std::cout << "error!";
    }
    return 0;
}