/*様々な実験コード*/
#pragma once
#include "all.h"
auto f01(int a) -> int;
auto func(void) -> int (*)(int);
using fp = int (*(*)(void))(int);
static const fp p = &func;

int main()
{
    cout << p()(123);
}

auto func(void) -> int (*)(int)
{
    return &f01;
}
auto f01(int a) -> int
{
    return a;
}