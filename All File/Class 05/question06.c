#include <stdio.h>
int main()
{
    // britter khetrofol = pie r squre
    // britter porisima = 2 pie r

    static float pie = 3.1416;

    float r, area, circumference;

    printf("Plese enter the radious of a circle : ");
    scanf("%f", &r);

    area = pie*r*r;
    circumference = 2*pie*r;


    printf("The area of the circle is : %f\n", area);
    printf("The circumference of \t the circle is :%f\n", circumference);

    return 0;
}
