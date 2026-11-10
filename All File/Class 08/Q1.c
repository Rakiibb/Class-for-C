// there are 3 typs of loop
// 1. for loop
// 2. while loop
//  3.do while loop

#include <stdio.h>
int main()
{

    // for loop

    for(int i = 0; i < 5; i++){
        printf("This is for loop\n");
    }

    int j = 0;
    while(j < 5){
        printf("This is while loop\n");
        j++;
    }
    int k = 0;
    do{
        printf("This is do while loop\n");
        k++;
    }
    while(k < 5 );
    return 0;
}
