#include <iostream>

class Base
{
private:
    int b;

    // public:
protected:
    Base();
    Base(int);
};

Base::Base()
{
    std::cout << "基底コンストラクタ" << std::endl;
}
Base::Base(int b)
    : b(b * 3)
{
    std::cout << "基底(int)コンストラクタ" << this->b << std::endl;
}
class Delv : public Base
{
private:
    int d;

public:
    Delv();
    Delv(int);
};

Delv ::Delv()
{
    std::cout << "派生コンストラクタ" << std::endl;
}
Delv ::Delv(int d)
    : d(d * 2), Base::Base(d)
{
    std::cout << "派生(int)コンストラクタ" << this->d << std::endl;
}

int main()
{
    //   Base obj0;
    Delv obj1;
    Delv obj2(3);
}