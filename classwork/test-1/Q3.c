#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);

    int small = (a>b)? b:a;
    int gsd = 1;

    for(int i = 2; i <= small; i++){
        if(a % i == 0 && b % i == 0){
            gsd = i;
        }
    }
    printf("%d", gsd);
    return 0;
}
