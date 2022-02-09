#include "all.h"

class Base
{

public:
    Base()
    {
        cout << "const-base" << endl;
    }
    virtual ~Base()
    {
        cout << "dest-base" << endl;
    }
    virtual int eat(int e) = 0;
    virtual int getw() = 0;
};

class Deli : public Base
{
    int w;

public:
    Deli() : w()
    {
        cout << "const-deli" << endl;
    }
    ~Deli()
    {
        cout << "dest-deli" << endl;
    }
    int eat(int e) override
    {
        return w += e;
    }
    int getw()
    {
        return w;
    }
};

int main()
{
    // Deli dp = Deli();
    // dp.eat(100);
    // cout << dp.getw() << endl;
    Base *bp[]{new Deli, new Deli};
    // Base *array[2] = {new Base, new Super};
    //  Base *bp = reinterpret_cast<Base *>(&dp);
    bp[0]->eat(20);
    bp[1]->eat(40);
    cout << bp[0]->getw() << endl;
    cout << bp[1]->getw() << endl;
    delete bp[0];
    delete bp[1];
}