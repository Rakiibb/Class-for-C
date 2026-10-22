#include <stdio.h>
int main()
{
    int num1, num2, num3;
    float avg;

    printf("Please enter the value of num1 : ");
    scanf("%d", &num1);

    printf("Please enter the value of num2 : ");
    scanf("%d", &num2);

    printf("Please enter the value of num3 : ");
    scanf("%d", &num3);

    avg = (num1 + num2 + num3) / (float)3;

    printf("\n\n");

    printf("The avg  is : %.1f", avg);

    return 0;
}
