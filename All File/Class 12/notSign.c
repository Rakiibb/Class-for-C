#include <stdio.h>
int main()
{
    int num =5;
    int num1 = 0;

    if(!(num < 6)){
        printf("num is small");
    }
    else{
        printf("num is big\n");
    }

    printf("%d\n", !num1);
    printf("%d\n", !num);

    return 0;
}
