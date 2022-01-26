#include <stdio.h>
int Add(int,int);
int main()
{
    const int kazu1 = 3;
    const int kazu2 = 4;
    int (*f)(int, int);
    f = &Add;
    printf("ŒvZŒ‹‰Ê: %d", (*f)(kazu1, kazu2));
    getchar();
}
int Add(int num1, int num2)
{
    return num1 + num2;
}