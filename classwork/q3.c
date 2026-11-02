#include <stdio.h>
int main()
{
    int num1, num2, num3;
    float avg;

    printf("Please input 3 number : ");
    scanf("%d %d %d", &num1, &num2, &num3);

    avg = (num1 + num2 + num3) / (float)3;

    printf("\n \n");
    printf("The avarage number is : %f", avg);

    return 0;
}
