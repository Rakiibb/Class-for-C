#include <stdio.h>
int main()
{
    int a = 30;
    int b = 50;

    int *pta = &a;
    int *ptb = &b;

    int sum = *pta + *ptb;

    printf("%d",sum);
    return 0;
}
