#include "all.h"
int main()
{
    try
    {
        auto v = std::vector<std::string>{"abc", "def"};
        for (auto &r : v)
        {
            cout << r << endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}