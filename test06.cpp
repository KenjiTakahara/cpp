#include "all.h"
int main()
{
    int a = 12;
    int *r = &a;
    int **rr = &r;
    cout << **rr << '\b';
}