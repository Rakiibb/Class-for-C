#include <stdio.h>
int main()
{
    int value = 50;

    int *pt = &value;


    printf("%d\n", *pt);
    printf("%p", (void*)pt);
    return 0;
}
