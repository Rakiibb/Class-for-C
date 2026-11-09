#include <stdio.h>
int main()
{
    int unit, bill = 0;
    printf("Please enter the unit  Number : ");
    scanf("%d", &unit);

    if(unit < 0){
        printf("Please enter a valid number");
        return 0;
    }

    if(unit <= 50){
        bill = unit * 3;
    }
    else if(unit <= 100){
        bill = (50 * 3) + (unit - 50) * 5;
    }
    else if(unit <= 200){
        bill = (50 * 3) + (50 * 5) + (unit -100) * 7;
    }
    else if(unit > 200){
        bill = (50 * 3) + (50 * 5) + (100 * 7) + (unit - 200) * 10;
    }

    printf("The bill is : %d", bill);


    return 0;
}
