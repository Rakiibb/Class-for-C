#include <stdio.h>
int main()
{
    int value;
    scanf("%d", &value);

    if(value < 0 || value >=20){
        printf("please enter number 1 to 20");
        return 0;
    }

    for(int i = 1; i <= value; i++){
        for(int j = 1; j <= i; j++){
            if(j % 2){
                printf("%d",1);
            }
            else{
                printf("%d",0);
            }
        }
        printf("\n");
    }

    for(int i = value-1; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            if(j % 2){
                printf("%d",1);
            }
            else{
                printf("%d",0);
            }
        }
        printf("\n");
    }
    return 0;
}
