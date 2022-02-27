#include "all.h"
int main(int argc, char const *argv[])
{
    auto s{std::array{1, 2, 3, 43, 4}};
    for (const auto &i : s)
        cout << i << '\n';
    cout << "配列の要素数は" << s.size() << "個です\n";

    try
    {
        cout << s.at(5);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}