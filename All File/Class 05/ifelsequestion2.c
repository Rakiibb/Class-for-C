#include <stdio.h>
int main()
{
    int num1 = 54, num2 = 64, num3 = 100;

    if(num1 > num2 && num1 > num3){
        printf("number 1 is the biggest");
    }
    else if(num2 > num1 && num2 > num3){
        printf("number 2 is the biggest");
    }
    else if(num3 > num1 && num3 > num2){
        printf("number 3 is the biggest");
    }

    return 0;
}
