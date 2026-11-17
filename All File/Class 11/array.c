#include <stdio.h>
int main()
{
    int number[20] = {2,4,6,2,7,3,6,5};

    for(int i = 0; i < 20; i++){
            if(number[i]){
                printf("%d\n", number[i]);
            }

    }

    return 0;
}
