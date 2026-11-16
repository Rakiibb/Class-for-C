#include <stdio.h>
int main()
{
    int n, factorial = 1;
    scanf("%d", &n);

    if(n < 0){
        printf("Please enter a positive number \n");
    }

    else{
        for(int i = 1; i <= n; i++){
        factorial = factorial * i;
    }

    printf("the value of %d factorial is : %d", n, factorial);
    }

    return 0;
}
