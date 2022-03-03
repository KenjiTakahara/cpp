#include "all.h"
template <typename T>
T fn(T &valu)
{
    return valu;
}
template <typename T>
T fn(T &&valu)
{
    return valu * valu;
}
template <typename T>
T fn(T *valu)
{
    return *valu * 10;
}

int main()
{
    int i = 3;
    cout << fn(i) << endl;
    cout << fn(&i) << endl;
    cout << fn(std::move(i)) << endl;
}