#include "all.h"
//#include <bitset>
#include <iostream>
int main()
{
    cout << std::bitset<8>(0b00001111 << 6) << endl;
}