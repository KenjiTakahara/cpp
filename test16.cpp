#include "all.h"
namespace ton
{
    int func(int a = 0)
    {
        return a;
    }
    int f(const std::function<int(int)> &f, int n = 0)
    {
        return f(n) * n;
    }
}

int main()
{
    std::function<int(int)> fn{ton::func};
    cout << ton::f(fn, 6) << endl;
}