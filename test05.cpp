#include "all.h"
template <size_t N>
void func(const char (&arr)[N])
{
    for (auto i : arr)
    {
        cout << i;
    }
    cout << endl;
}
int main()
{
    const char ar[] = "abcd";
    func(ar);
}