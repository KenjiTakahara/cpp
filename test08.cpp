#include "all.h"

std::pair<const char *, const char *> f()
{
    return {"abcdfrgy", "dddd"};
};
int main()
{
    auto t = f();
    auto s = std::pair<const char *, const char *>{"aa", "aadede"};
    cout << t.first << endl;
    cout << s.second << endl;
}
