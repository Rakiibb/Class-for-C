#include <stdio.h>
int main()
{
    int time, alarm;

    printf("Please give a time, when you wake up : ");
    scanf("%d", &time);

    if(time < 1 || time > 12){
        printf("wrong time. \n");
        return 0;
    }



    if(time < 8){
        printf("Do you have an alarm? : ");
        scanf("%d", &alarm);

        if(alarm <= 0 || alarm >= 1){
            printf("wrong entry\n");
            return 0;
        }
        if(alarm == 1){
            printf("Good Student!\n");
        }
        else{
            printf("Lucky Student!\n");
        }
    }
    else{
        printf("Oops! You Missed Your Class!\n");
    }
    return 0;
}

