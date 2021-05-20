#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI (3.141592)
#define MM (1000.0)
#define RN (0.5)
int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        printf("%d番目1--> %s\n", i + 1, argv[i]);
    }
    float k = atoi(argv[1]), b = atof(argv[2]), s = atof(argv[3]);
    printf("排気量--> %d cc\n", (int)((pow(b / 2, 2) * PI * s * k / MM) + RN));
    return 0;
}