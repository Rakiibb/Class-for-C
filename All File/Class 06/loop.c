#include <stdio.h>
int main()
{
    // there are 3 types of loop
        // 1. for loop
        // 2. while loop
        // 3. do while loop

        int totalNumber = 0;
    for(int i = 1; i <= 5; i++){
        totalNumber = totalNumber + i;
    }


    printf("Total number is : %d", totalNumber);
    return 0;
}
