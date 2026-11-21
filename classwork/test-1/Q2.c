#include <stdio.h>
int main()
{
    int l,r;
    scanf("%d %d", &l, &r);

    if(l <= 1 || r <= 1 || 1000 <= r || 1000 <= l){
        printf("please use the range 2 to 999");
        return 0;
    }
    int result = -1;

    if(l > r){
        printf("L is must be Smaller then R");
        return 0;
    }


    for(l; l<=r; l++){
            int count = 0;

        for(int i = 2; i<=l; i++){
            if(l % i != 0){
                count++;
            }
        }

        if(count == (l - 2)){
            printf("%d ", l);
            result = 0;

        }

    }
    if(result != 0){
        printf("%d", result);
    }


    return 0;
}
