#include <iostream>

namespace my_lib
{
    class Pair
    {
        int a, b;

    public:
        Pair(int a, int b) : a(a), b(b) {}
        void show()
        {
            std::cout << "{" << a << "," << b << "}" << std::endl;
        }
        int sum()
        {
            return a + b;
        }
    };
}

int main()
{
    auto pair = my_lib::Pair(4, 6);
    pair.show();
    std::cout << pair.sum() << std::endl;
    return 0;
}