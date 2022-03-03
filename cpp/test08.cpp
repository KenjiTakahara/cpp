#include "all.h"
class Base
{
public:
    virtual void ton() = 0;
    Base() { cout << "Base-con" << endl; }
    virtual ~Base() { cout << "Base-des" << endl; }
};

class Derived : public Base
{
public:
    void ton() override { cout << "deli-tonton" << endl; }
    Derived() { cout << "Deli-con" << endl; }
    ~Derived() { cout << "Deli-des" << endl; }
};

int main()
{
    std::unique_ptr<Base> p{new Derived{}};
    p->ton();
}