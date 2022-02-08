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
    struct fn
    {
        // fn() {}
        int operator()(int a) { return a * a; }
    };
    //  fn f;
    cout << fn()(1) << endl;
}