#include <stdio.h>
int main()
{
    int number;
    float value;
    char name;
    float mul = (float)10/3;

    printf("give me a int value : ");
    scanf("%d", &number);

    printf("give me a float value : ");
    scanf("%f", &value);

    printf("give me a charecter value : ");
    scanf(" %c", &name);

    printf("%d \n", number);
    printf("%.2f \n", value);
    printf("%.20lf \n", mul);
    printf("%c \n", name);

    return 0;
}
