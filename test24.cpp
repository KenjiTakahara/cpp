#include "all.h"
using namespace std;
class T24
{
    const int a, b, c;

public:
    T24(int a, int b, int c)
        : a(a), b(b), c(c) {}
    friend ostream &operator<<(ostream &, T24 &);
    friend ostream &operator<<(ostream &, const T24 &&);
};

ostream &operator<<(ostream &s, T24 &t)
{
    return s << (t.a * t.b * t.c);
};

ostream &operator<<(ostream &s, const T24 &&t)
{
    return s << (t.a + t.b + t.c);
};

int main()
{
    T24 test01{2, 3, 4};
    cout << test01 << endl;
    cout << std::move(test01) << endl;
    cout << T24{1, 2, 3} << endl;
    char str[1];
    cout << std::end(str) - std::begin(str);
#include <limits>
    constexpr float f = std::numeric_limits<float>::infinity();
    constexpr double d = std::numeric_limits<double>::infinity();

    std::cout << "float : " << f << std::endl;
    std::cout << "double : " << d << std::endl;
}