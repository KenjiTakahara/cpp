#include <iostream>
#include <bitset>
struct Base
{
    /* data */
} b1;

struct Delv : public Base
{
    /* data */
} d1;

void func(Base &)
{
    std::cout << "call base\n";
}
void func1(Delv &)
{
    std::cout << "call delv\n";
}

int main()
{
    func(b1);
    func(d1);
}