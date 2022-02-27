#include "all.h"
int main()
{
    auto v{std::vector<int>{2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}};
    for (auto i = std::begin(v); i != std::end(v); ++i)
        cout << *i << endl;
}
