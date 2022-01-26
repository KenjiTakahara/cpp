#include <stdio.h>

int Add(int, int);

int main()
{
    int kazu1 = 3;
    int kazu2 = 4;
    int kekka = Add(kazu1, kazu2);
    printf("tttt: %d", kekka);
    getchar();
}

int Add(int num1, int num2)
{
    int num;
    num = num1 + num2;
    return num;
}