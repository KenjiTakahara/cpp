#include <iostream>

int main()
{
    struct BF
    {
        unsigned a : 8;
        unsigned b : 8;
        unsigned c : 8;
        unsigned d : 8;
    };

    union
    {
        struct BF f;
        unsigned u;
    } d;

    d.f.a = 'a';
    d.f.b = 'b';
    d.f.c = 'c';
    d.f.d = '\0';

    std::cout << (reinterpret_cast<char *>(&d))[0] << std::endl;
    std::cout << reinterpret_cast<char *>(&d) << std::endl;
}