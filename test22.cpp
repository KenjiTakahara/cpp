#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    char ch[] = "Kitty on your lap";
    wchar_t wch[] = L"Kitty on your lap";

    printf("char 型文字列 = %d\n", (int)sizeof ch);
    printf("wchar_t 型文字列 = %d\n", (int)sizeof wch);
    std::wcout << wch << std::endl;
    return 0;
}