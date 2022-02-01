#include "all.h"
int main()
{
    int a = 12;
    int &r = a;
    int *pr = &r;
    cout << **&pr << '\n';
    cout << *&r << '\n';
}