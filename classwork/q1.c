#include <stdio.h>
int main()
{
    int num = 45;
    float cgpa = 3.61;
    double value = (float)3 / 10;
    char name = 'R';

    printf("The int number is : %d\n", num);
    printf("The float number is : %.2f\n", cgpa);
    printf("The double number is : %.16lf\n", value);
    printf("The charecter  is : %c\n", name);

    return 0;
}
