#include "all.h"

struct ST
{
    ST() { cout << "CONST" << endl; }
    ~ST() { cout << "DEST" << endl; }
};

int main()
{
    std::unique_ptr<ST[]> ptr(new ST[10]);
}