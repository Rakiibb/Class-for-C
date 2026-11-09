// authentication system build. where usarName == 321 and password == 12345123.
// Build an auth system that verify the user is real or fake.

#include <stdio.h>
int main()
{
    int realPass = 12345123;
    int realUsarName = 321;


    int pass;
    int usarName;

    printf("Enter your User Name : ");
    scanf("%d", &usarName);



    if(realUsarName == usarName){
            printf("Enter your Password : ");
            scanf("%d", &pass);
        if(realPass == pass){
            printf("Login Successfull");
        }
        else{
            printf("Wrong Password");
        }
    }
    else{
        printf("Please select 1 if your id is created by number \n please slect 2 if id is created by email\n");
        int number;
        scanf("%d",&number);

    if(number < 1 || number > 2){
        printf("Enter a valid digit");
    }
    else
    {
        printf("Forget pass");
    }

    }



    return 0;
}
