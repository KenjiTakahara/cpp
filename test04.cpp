#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[])
{
    int x = 12;
    int y = 34;
    auto b = [x](auto a)
    { return x * a; };
    std::cout << b(y) << std::endl;
}