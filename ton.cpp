/*様々な実験コード*/
#include "all.h"
auto f01(int a) -> int;
auto func(void) -> int (*)(int);
using fp = int (*(*)(void))(int);
int main()
{
    fp p = &func;
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