#include "all.h"
using namespace std;
enum class color
{
    Red,    // 0
    Blue,   // 1
    Green,  // 2
    Yellow, // 3
    Purple, // 4
    White,  // 5
    Black   // 6
};
int main()
{
    auto str{"çÇå¥"s};
    cout << "çÇå¥"s[0];
    return EXIT_SUCCESS;
}