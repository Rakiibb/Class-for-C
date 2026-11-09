#include <stdio.h>
int main()
{
    int month;
    scanf("%d",&month);

    /*if(month < 1 || month > 15){
        printf("the value is not correcet. please enter 1 -15");
        return 0;
    }*/

    switch(month)
    {
    case 1:
        printf("30 days");
        break;

        case 2:
        printf("28 days");
        break;

        case 3:
        printf("30 days");
        break;

        case 4:
        printf("31 days");
        break;

        case 5:
        printf("30 days");
        break;

        case 6:
        printf("31 days");
        break;

        case 7:
        printf("30 days");
        break;

        case 8:
        printf("31 days");
        break;

        case 9:
        printf("30 days");
        break;

        case 10:
        printf("31 days");
        break;

        case 11:
        printf("30 days");
        break;

        case 12:
        printf("31 days");
        break;

        default:
            printf("No month exist");
            break;
    }
    return 0;
}
