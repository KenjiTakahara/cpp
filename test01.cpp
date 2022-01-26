#include <stdio.h>

class BadBase
{
public:
    BadBase() { printf("open-BAS\n"); }
    virtual ~BadBase() { printf("close-BAS\n"); }
};
class BadSub : public BadBase
{
public:
    BadSub() { printf("open-SUB\n"); }
    ~BadSub() { printf("close-SUB\n"); }
};

int main()
{
    BadSub *sub = new BadSub();
    delete sub;

    printf("\n");

    BadBase *base = new BadSub();
    delete base;

    return 0;
}