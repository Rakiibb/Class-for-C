#include <stdio.h>
int main()
{
    // truty value & falsy value
    // truthy value (0 chara kono kicho jodi thake), 1, true
    // falsy value (0) (null) (undefine) (false)
    int number[10] = {};

    for(int i = 0; i < 10; i++){
        scanf("%d", &number[i]);
    }

    for(int i = 0; i < 10; i++){
            if(number[i]){
                printf("%d\n", number[i]);
            }

    }

    return 0;
}
