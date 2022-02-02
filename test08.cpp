#include "all.h"
int main()
{
    size_t n = 1024 * 1024 * 1024;
    auto *p = new int[n];
    for (auto i = 0; i < n; i++)
    {
        *(p + i) = i;
    }
    for (auto i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }
}
