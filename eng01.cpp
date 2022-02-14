#define _USE_MATH_DEFINES
#include "all.h"
class Eng
{
private:
    const std::string name;
    const double kit, boa, str;

public:
    Eng(double kit, double boa, double str, std::string &name)
        : kit(kit), boa(boa), str(str), name(std::move(name))
    {
    }
    auto disp()
    {
        return pow(boa / 2, 2) * M_PI * str * kit / 1000;
    };
    auto getboa()
    {
        return this->boa;
    }
    auto getstr()
    {
        return this->str;
    }
    auto getcyl()
    {
        return this->kit;
    }
    auto getname()
    {
        return this->name;
    }
};

int main()
{
    double kit, boa, str;
    std::string type_name;
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
    cout << "type name? ", cin >> type_name;
    cout << "cylinders? ", chkin(kit);
    cout << "boa? ", chkin(boa);
    cout << "stroke? ", chkin(str);
    auto ton = Eng(kit, boa, str, type_name);

    cout << ton.getname() << " "
         << "Displacement is " << ton.disp() << "cc" << flush;
}