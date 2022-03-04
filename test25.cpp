#include "all.h"

struct Base
{
    virtual void getname() = 0;
    virtual void getage() = 0;
    Base()
    {
        // cout << "Base start\n";
    }
    ~Base()
    {
        // cout << "Base end\n";
    }
};

struct Deli : Base
{
    Deli(const char *name = "ton", const int age = 1)
        : name(name), age{[&]() -> int
                          { return age; }()}
    {
        //    cout << "Deli start\n";
    }
    void getname() override
    {
        cout << this->name << endl;
    }
    void getage() override
    {
        cout << this->age << endl;
    }

    ~Deli()
    {
        // cout << "Deli end\n";
    }

private:
    const int age;
    const char *name;
};
#define N 10
int main()
{
    auto up = std::make_unique<Deli[]>(N);
    //  auto up = new Deli("mantuku", 27);
    for (size_t i = 0; i < N; ++i)
    {
        up[i].getname(), up[i].getage();
    }
}
