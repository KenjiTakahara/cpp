#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{5, 6, -1, 3, 7, 2, 3};
    auto a = [](int a, int b) -> auto { return a < b; };
    std::sort(std::begin(v), std::end(v), a);
    for (auto e : v)
    {
        std::cout << e << " ";
    }
    std::cout << "\n";
}