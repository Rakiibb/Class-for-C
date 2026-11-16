#include <stdio.h>
int main()
{
    int num, count = 0;
    scanf("%d", &num);

    if(num < 0){
        printf("Please enter a positive number \n");
        return 0;
    }


    for(int i = 1; i <= num; i++){
        if(num % i != 0){
            count++;
        }
    }
    if(count == (num -2)){
        printf("This number %d is prime number", num);
    }
    else{
        printf("This number %d is not a prime number", num);
    }

    return 0;
}
