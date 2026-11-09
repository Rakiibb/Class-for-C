#include <stdio.h>
int main()
{
    int amount, withdrawl, rest = 0;
    scanf("%d %d", &amount, &withdrawl);

    if(amount < 0 || withdrawl < 0 || amount < withdrawl){
        printf("wrong entry");
        return 0;
    }

    if(withdrawl % 500 == 0){
        printf("Withdraw Successfull \n");
        rest = amount - withdrawl;
        printf("Your new balance is %d", rest);
    }
    else
    {
        printf("please select 500 or 1000 note");
    }

    return 0;
}
