#include <stdio.h>
#include <stdbool.h>

static void printBool(bool b)
{
    if (b)
    {
        puts("true");
    }
    else
    {
        puts("false");
    }
}

int main(void)
{
    bool a = false;
    printBool(a);

    a = !a;
    printBool(a);
}