#include "all.h"

struct S
{
    int a;
    S(int a = 0) : a(a) {}
    S &operator=(int a)
    {
        this->a = a;
        return *this;
    }
    S &operator+(S a)
    {
        this->a += a.a;
        return *this;
    }
    operator int()
    {
        return a;
    }
};

int main()
{
    S obj1{44}, obj2{56};
    std::cout << obj1 + obj2 << std::endl;
}