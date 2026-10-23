// if else
// switch case


#include <stdio.h>
int main()

{
    int mark = 40;

    if(mark >= 80){
        printf("This is true");
        if(mark >= 100){
            printf("This is true");
        }
        else{
            printf("This is false");
        }
    }
    else{
        printf("This is false");
    }

    return 0;
}
