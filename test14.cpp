#include "all.h"
class CManiac
{
    friend int operator+(const CManiac &, const CManiac &);
    int a;

public:
    CManiac(int a = 0) : a(a) {}
};

int operator+(const CManiac &rmaniac1, const CManiac &rmaniac2)
{
    return rmaniac1.a + rmaniac2.a;
}

int main()
{
    std::int8_t i8 = 118;
    std::uint16_t();
    // CManiac c1{2}, c2{5};
    // cout << c1 + c2 << endl;
    // cout << CManiac(3) + CManiac{5} << endl;
    cout << (int)i8 << endl;
}