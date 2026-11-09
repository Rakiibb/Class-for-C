
#include <stdio.h>
int main()
{
    //int n; //5
    //scanf("%d", &n);

    for(int i = 1; i <= 9; i++){
        for(int k =  9-1; k >= i; k--){
            printf(" ");
        }
        for(int j = 1; j <= i; j++){
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}
