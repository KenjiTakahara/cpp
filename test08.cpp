#include "all.h"

void func(int &) { cout << "non-const"; };
void func(const int &) { cout << "const"; };

int main()
{
    const int n = 12;
    func(n);
    return 0;
}