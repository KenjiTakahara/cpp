#include <stdio.h>
#include <initializer_list> // std::initializer_listを利用するのに必要
void func(std::initializer_list<int> list)
{
    for (int value : list)
    {
        printf("%d\n", value);
    }
}
int main()
{
    func({1, 2, 8});                             // そのまま渡す
    std::initializer_list<int> list = {4, 5, 6}; // 一旦変数に入れてから
    func(list);                                  // 渡す
    return 0;
}