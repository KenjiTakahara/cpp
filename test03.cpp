#include "all.h"
int main()
{
    static int g_a;
    // const char *str = "takahara";
    const char str[] = "takahara";
    // for (auto n = 0; n < 9; ++n)
    for (auto n : str)
    {
        cout << n << flush;
    }
}