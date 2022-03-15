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

    cout <<
        [](std::vector<int> && vec) -> auto
    {
        return std::accumulate(vec.begin(), vec.end(), 0);
    }
    ({1, 2, 3, 4, 5, 3, 5, 6, 67, 78, 8, 9, 90})
        << endl;
}
