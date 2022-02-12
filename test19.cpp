#include "all.h"

int main()
{
    struct A
    {
        int a = 1;
        int b = 1;
    };

    struct B : A
    {
        int a = 2;
        int b = 2;
    };
    B x = {};
    cout << x.A::b << '\n';
    cout << x.A::a << '\n';
    cout << x.B::b << '\n';
    cout << x.B::a << '\n';
}