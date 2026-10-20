#include <stdio.h>
int main()

{
    int number;

    scanf("%d", &number);

    if(number < 40){
        printf("you are fail");
    }
    else if(number < 80){
        printf("You are passs");
    }
    else{
        printf("You got A+");
    }

    return 0;
}


// akjon student 3 subject ar total number usar input dibe. tader avarage number kon grade e ase ta ber korte hobe.
// 80% er opore thakle A+
// 40%-80% er moddhe pass
// er niche hoile fail.

