#include <stdio.h>
int main()
{
    int n, h = 0;
    scanf("%d", &n);

    int number[n] ={};

    for(int i = 0; i < n; i++){
        scanf("%d", &number[i]);
    }

    h = number[0];
    for(int i = 0; i < n; i++){
        printf("%d  ", number[i]);

        if(h > number[i]){
            h = number[i];
        }
    }
    printf("largest value is : %d", h);
    return 0;
}


