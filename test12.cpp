#include "all.h"
struct test12
{
    int *num;
    test12(int num)
        : num{new int(num)}
    {
        cout << "num=" << *this->num << endl;
    }
    ~test12()
    {
        delete num;
        cout << "num=" << *this->num << endl;
    }
};

int main()
{
    auto test{test12{123456789}};
}