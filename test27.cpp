#include "all.h"
int main()
{
    struct Base
    {
        const char *str;
        Base(const char *str)
            : str(str) {}
        virtual int func(int a) = 0;
    };

    struct Deli : Base
    {
        int a;
        Deli(int a, const char *str)
            : Base(str), a(a) {}
        int func(int a) override final
        {
            return this->a * 2;
        }
    };

    auto obj1 = Deli(3, "takahara");
    auto fn = [](Base *bp)
    { cout << bp->func(2) << '\n'
           << bp->str << endl; };
    fn(&obj1);
}
