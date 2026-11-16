#include <stdio.h>
int main()
{
    int time, alarm;

    printf("Please Input Your Wake Up Time :");
    scanf("%d", &time);


    if(time < 8){
            printf("Please, enter 1 if you has an Alarm \n Or enter 2 if you if you has no Alarm \n");
            scanf("%d", &alarm);
        if(alarm == 1){
            printf("Good Student \n");
        }
        else{
            printf("Lucky Student! \n");
        }
    }
    else{
        printf("Oops! you missed your class! \n");
    }


    return 0;
}

