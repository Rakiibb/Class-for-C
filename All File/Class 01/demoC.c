#include <stdio.h>

int main()
{
    int num1 = 34;
    int num2 = 45;
    int sum, sub, mul;
    float div;

    float value = (float)10/3;

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float)num1 / num2;


    // for int %d
    // for float %f
    // for char %c
    // for string %s
    //Test


    printf("%d \n", sum);
    printf("%d \n", sub);
    printf("%d \n", mul);
    printf("%f \n", div);
    printf("%.15lf \n", value);



    return 0;
}
