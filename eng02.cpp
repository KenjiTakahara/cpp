#define _USE_MATH_DEFINES
#include "all.h"



int main()
{
    float kit, boa, str;
    auto chkin = [](auto &k)
    {
        cin >> k;
        while (cin.fail() || k <= 0)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1024, '\n');
                cout << "Enter an integer number" << endl;
            }
            else if (k <= 0)
            {
                cout << "must be larger than 1, try again" << '\n';
            }
            cin >> k;
        }
    };
    cout << "How many cylinders? ", chkin(kit);
    cout << "Boa? ", chkin(boa);
    cout << "stroke? ", chkin(str);
    auto cc = [&]()
    { return pow(boa / 2, 2) * M_PI * str * kit / 1000; };
    cout << "Displacement is " << cc() <<"cc" << endl;
}