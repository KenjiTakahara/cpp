#include "all.h"

class T
{
public:
    int func()
    {
        return 1;
    }
};

int main()
{
    int (T::*p)() = &T::func;
    T t;
    int n = (t.*p)();
    int n = (&t->*p)();
    int n = t.func();
    cout << n << endl;
}