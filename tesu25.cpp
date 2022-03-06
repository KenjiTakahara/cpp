#include "all.h"
// using namespace std;

enum class week
{
    mon,
    tue,
};

std::ostream &operator<<(std::ostream &a, week b)
{
    return a << static_cast<int>(b);
}

int main()
{
    week w{week::tue};
    cout << w << endl;
}