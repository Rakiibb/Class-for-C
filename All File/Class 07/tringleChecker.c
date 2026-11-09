#include <stdio.h>
int main()
{
    int a, b,c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d %d %d \n", a, b, c);

    if(a + b < c || b + c < a || a + c < b){
        printf("Not Possible");
    }

    else if(a == b && b == c){
        printf("The tringle is Equilateral \n");
    }
    else if(a == b || b == c || c ==a){
        printf("The tringle is Isosceles");
    }
    else{
        printf("The tringle is Scalene");
    }

    return 0;
}
