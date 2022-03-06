#include <iostream>

void hoge() // noexcept
{
    throw "aabb";
}

void (&abc)(void) = hoge;

int main()
{
    try
    {
        abc();
    }
    catch (...)
    {
        std::cout << "error!";
    }
    return 0;
}