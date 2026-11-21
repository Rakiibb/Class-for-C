#include <stdio.h>
int main()
{
    int n, totalEven = 0, totalOdd = 0;
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            totalEven = totalEven + i;
        }
        else{
            totalOdd = totalOdd + i;
        }
    }

    printf("Sum of Even Numbers = %d\n", totalEven);
    printf("Sum of Odd Numbers = %d\n", totalOdd);
    return 0;
}
