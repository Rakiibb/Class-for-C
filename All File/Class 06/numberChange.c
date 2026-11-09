#include <stdio.h>
int main()
{
    int num, sum = 0;
    scanf("%d", &num);

    int num2 = num;

    if(num2 != 0){
        sum = num2 % 10 + sum;


    }
    return 0;
}
