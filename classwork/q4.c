#include <stdio.h>
int main()
{
    int id;
    float cgpa;
    char grade[2];

    printf("Please enter your ID : ");
    scanf("%d", &id);
    printf("Please enter your CGPA : ");
    scanf("%f", &cgpa);
    printf("Please enter your Grade : ");
    scanf("%s", &grade);

    printf("\n \n");

    printf("Your ID is : %d\n", id);
    printf("Your CGPA is : %f\n", cgpa);
    printf("Your Grade is : %s\n", grade);

    return 0;
}
