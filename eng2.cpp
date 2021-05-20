#include "all.h"
int main()
{
    float kit, boa, str;
    auto chkin = [](auto &k) {
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
    cout << "気筒数を入力しろ→ ", chkin(kit);
    cout << "ボア（mm)を入力しろ→ ", chkin(boa);
    cout << "ストローク(mm)を入力しろ→ ", chkin(str);
    auto cc = [&]() { return pow(boa / 2, 2) * M_PI * str * kit / 1000; };
    cout << "排気量 = " << cc() << endl;
}