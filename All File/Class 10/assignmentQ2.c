#include <stdio.h>
int main()

{
    int num, newNum = 0;

    scanf("%d", &num);


    for(;num != 0; num = num/10){
            printf("%d\n", num);
        newNum = (newNum *10) + (num % 10);
    }
    printf("%d", newNum);

    return 0;
}
