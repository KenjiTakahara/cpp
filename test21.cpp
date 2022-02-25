// #define NDEBUG
#include <cassert>

void f(int x)
{
    // パラメータxは、正数でなければならない
    assert(x >= 0);

    // …xを使った処理…
}

int main()
{
    f(-1); // OK
           //   f(-1); // プログラムが異常終了する
}