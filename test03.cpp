#define _USE_MATH_DEFINES
#include "all.h"
int main()
{
    static int g_a;
    const char *str = "takahara";
    for (auto n = 0; n < 9; ++n)
    {
        cout << str[n];
    }
    cout << endl;
}