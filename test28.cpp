#include "all.h"

struct Hoge
{
    int i;
    double d;
    unsigned int u;
};

int main()
{
    int a[] = {1, 3, 5};
    auto [a1, a2, a3] = a;
    // 配列の各要素をを構造化束縛宣言で取り出す.
    // a1 == 1, a2 == 3, a3 == 5.

    auto t = std::make_tuple(1, "po", 5.0);
    auto [t1, t2, t3] = t;
    // std::tupleの各要素を構造化束縛宣言で取り出す.
    // t1 == 1, t2 == "po", t3 == 5.0.

    Hoge h = {1, 5.0, 100};
    auto [h1, h2, h3] = h;
    // 構造体の各publicメンバ変数を構造化束縛宣言で取り出す.
    // h1 == 1, h2 == 5.0, h3 == 100.

    auto vec{std::array<int, 10000>()};
    std::generate(vec.begin(), vec.end(),
                  []() -> int
                  {
                      static int i;
                      return i++;
                  });
    for (auto i : vec)
        cout << i;
}