#include <vector>
#include <iostream>

int main()
{
    int arr[4]{};
    std::cout << std::size(arr) << std::endl;

    std::cout << std::size(u8"arikitari") << std::endl;

    std::vector<int> v = {1, 1, 2, 3, 5, 8};
    int hoge = 13;
    v.push_back(hoge);
    std::cout << std::size(v) << std::endl;

    //変数vの型はstd名前空間にあるクラス型なので
    // ADLによって `std::`がなくとも発見できる
    std::cout << size(v) << std::endl;
}