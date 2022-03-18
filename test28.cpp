#include "all.h"

struct Hoge
{
    Hoge() { cout << "constructer" << endl; }
};

Hoge fn()
{
    Hoge h;
    return h;
}

int main()
{
    Hoge h = fn();
}