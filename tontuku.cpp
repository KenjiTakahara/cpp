#include <iostream>

int main()
{
    int value{0};
    auto chkin = [](auto &k)
    {
        std::cin >> k;
        while (std::cin.fail() || k <= 0)
        {
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(1024, '\n');
                std::cout << "Enter an integer number" << std::endl;
            }
            else if (k <= 0)
            {
                std::cout << "must be larger than 1, try again" << '\n';
            }
            std::cin >> k;
        }
    };
    std::cout << "Please enter the integer.\n", chkin(value);
    switch (value)
    {
    case 0:
        std::cout << "Good morning.\n";
        break;
    case 1:
        std::cout << "Hello.\n";
        break;
    case 2:
        std::cout << "Good evening.\n";
        break;
    default:
        std::cout << "kusoyaroo\n";
        break;
    }
}