#include "all.h"

int main()
{
    std::vector<int> v = {3, 1, 4};

    // vの全ての要素にラムダ式を適用する
    std::for_each(v.begin(), v.end(), [](auto x)
                  { cout << x << endl; });

    cout << "----" << endl;

    // 要素の内容を書き換えても構わないし、呼び出し順序に依存した処理を書いても構わない
    int n = 0;
    int m = 0;
    [&n, &m]() mutable
    { m++, cout << m; }();
    [&n, &m]() mutable
    { m++, cout << m; }();
    [&n, &m]() mutable
    { m++, cout << m; }();
    // std::for_each(v.begin(), v.end(), [n, m](auto &x) mutable
    //               { x += n++, m++; });
    // std::for_each(v.begin(), v.end(), [](auto x)
    //               { cout << x << endl; });
    cout
        << "n= " << n << endl;
    cout << "m= " << m << endl;
}