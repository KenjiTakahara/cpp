#include "all.h"

class Base
{
    virtual const char *eat() = 0;
};

class Deli : public Base
{
    bool bl;

public:
    Deli(bool bl) : bl(bl) {}
    const char *eat() override final
    {
        const char *kuso = "💩";
        const char *app = "🍎";
        return (bl ? kuso : app);
    }
    explicit operator bool()
    {
        if (bl)
            return true;
        else
            return false;
    }
    operator int()
    {
        if (bl)
            return 2;
        else
            return 0;
    }
} obj = true;

int main()
{
    cout << obj.eat() << endl;
    // obj ? cout << "true" << endl : cout << "false" << endl;
}