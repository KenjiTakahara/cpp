#include <iostream>

class AgeProxy
{
    Person &p;

public:
    AgeProxy(Person &p0) : p(p0) {}

    AgeProxy &operator=(int a)
    {
        if (a >= 0)
            this->p.age = a;
        return *this;
    }
    operator int()
    {
        return this->p.age;
    }
} Age;

class Person
{
    int age;
    AgeProxy Age;

public:
    friend class AgeProxy;
    Person() : Age(*this) { this->Age = 0; }
    Person(int a) : Age(*this) { this->Age = a; }
};

int main()
{
    Person p;
    Age = 20;
    std::cout << (int)Age;
    return 0;
}