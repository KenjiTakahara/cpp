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
}