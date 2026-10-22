#include <stdio.h>
int main()

{
    int a;
    float b;
    char c;
    float sifat = 10.00/3;

    printf("give here a int value: ");
    scanf("%d", &a);

    printf("five here a float value: ");
    scanf("%f", &b);

    printf("give here a character value: ");
    scanf(" %c", &c);

    printf("\n \n \n");

    printf("This is a integer value : %d \n", a);
    printf("This is a float value : %f \n", b);
    printf("This is a double value : %lf \n", sifat);
    printf("THis is a charecter value : %c \n", c);


    return 0;
}

