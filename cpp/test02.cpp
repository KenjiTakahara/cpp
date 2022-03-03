#include <stdio.h>

int main(void)
{
    puts("Please enter the your family name.");
    char family_name[40];
    fgets(family_name, sizeof(family_name), stdin);

    puts("Please enter the your first name.");
    char first_name[40];
    fgets(first_name, sizeof(first_name), stdin);

    printf("Hello, %c.%c\n", family_name[0], first_name[0]);
}