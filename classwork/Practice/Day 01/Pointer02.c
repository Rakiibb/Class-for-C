#include <stdio.h>
int main()
{
    int value = 10;

    int *pt = &value;

    *pt = 500;

    printf("%d", *pt);
    return 0;
}
