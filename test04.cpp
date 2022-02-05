<<<<<<< HEAD
#include "all.h"
class X
{
    std::vector<int> data_;

public:
    X() : data_(100, 69) {}

    // *thisが左辺値の場合は、保持しているvectorオブジェクトへの参照を返す
    const std::vector<int> &data() const &
    {
        cout << "& ";
        return data_;
    }

    // *thisが右辺値の場合は参照を返すと一時オブジェクトの寿命が尽きてしまうため、
    // ムーブで返す
    std::vector<int> data() &&
    {
        // return std::move(data_);
        cout << "&& ";
        return data_;
    }
};

int main()
{
    auto x{X()};
    const std::vector<int> &v1 = x.data();
    std::vector<int> v2 = X().data();
    //  cout << v2.at(99);
=======
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
>>>>>>> ac13d2231092528c7916356129b732c0256f7ebb
}