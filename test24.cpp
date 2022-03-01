#include "all.h"
std::vector<int> fn()
{
    return {1, 2, 3};
}

int main()
{
    auto vec{fn()};
    cout << vec.at(1) << endl;
    // std::string str1 = "abcde";
    // std::string str2{std::move(str1)};
}