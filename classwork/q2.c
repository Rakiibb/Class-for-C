#include <stdio.h>
int main()
{
    int num;
    float cgpa;
    double value;
    char name;

    printf("Please enter an int number : ");
    scanf("%d", &num);
    printf("Please enter a float number : ");
    scanf("%f", &cgpa);
    printf("Please enter a double or long float number : ");
    scanf("%lf", &value);
    printf("Please enter a charecter : ");
    scanf(" %c", &name);

    printf("\n \n");

    printf("The int number is : %d\n", num);
    printf("The float number is : %.2f\n", cgpa);
    printf("The double number is : %.16lf\n", value);
    printf("The charecter  is : %c\n", name);

    return 0;
}

