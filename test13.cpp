#include "all.h"
struct test13
{
    explicit operator bool() &&
    {
        cout << "over load &&" << endl;
        return false;
    };
    operator bool() &
    {
        cout << "over load &" << endl;
        return true;
    };
};

int main()
{
    test13 T;
    T ? puts("true") : puts("false");

    test13() ? puts("true") : puts("false");
}