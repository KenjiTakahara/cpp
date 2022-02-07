#include "all.h"
int func(int a)
{
    return a;
}
int f(const std::function<int(int)> &f,int n)
{
    return f(n) * n;
}

int main()
{
    std::function<int(int)> fn{func};
    cout << f(fn,4) << endl;
}