// found an prime number;
#include <stdio.h>
int main()
{
    int n, count;
    scanf("%d", &n);

    for(int i = 2; i < n; i++){
        if(n % i != 0 ){
            count++;
            //printf("%d\n", count);
        }
    }
    if(count == (n-2)){
        printf("This is prime number");
    }
    else{
        printf("Not prime number");
    }

    return 0;
}
