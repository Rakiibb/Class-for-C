#include <stdio.h>
int main()
{
    int number;
    float cgpa;
    float value = (float)10 / 3;
    char alphabet;
    char name[50];


    printf("Please add an int number : ");
    scanf("%d", &number);

    printf("Please add an float number : ");
    scanf("%f", &cgpa);

    printf("Please enter a charecter : ");
    scanf(" %c", &alphabet);

    printf("Please enter a name or string : ");
    scanf("%s", &name);

    printf("\n \n");

    printf("your int number is : %d\n", number);
    printf("Your float number is : %.2f\n", cgpa);
    printf("Your double / long float is : %.16lf\n", value);
    printf("Your charecter is : %c\n", alphabet);
    printf("Your name or string is : %s\n", name);

    return 0;
}
