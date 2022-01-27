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
    cout << "気筒数はいくつですか？", chkin(kit);
    cout << "ボアは何ミリですか？", chkin(boa);
    cout << "ストロークは何ミリですか？", chkin(str);
    auto cc = [&]()
    { return pow(boa / 2, 2) * M_PI * str * kit / 1000; };
    cout << L"排気量は【" << cc() << "㏄】です。" << endl;
}