#include <iostream>
class Test01
{
public:
    Test01();
    void unnko() const;
    ~Test01();
};

Test01::Test01()
{
    std::cout << "test-const" << std::endl;
}

void Test01::unnko() const
{
    std::cout << "kussa" << std::endl;
}

Test01::~Test01()
{
    std::cout << "test-dest" << std::endl;
}

int main()
{
    //    auto t = Test01();
    Test01().unnko();
}