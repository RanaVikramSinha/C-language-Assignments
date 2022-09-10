// 10. Create an authentication system. It should be menu driven.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[5][2][50]={{"rana","123"},{"vikram","231"},{"sinha","321"},{"raja","666"},{"babu","777"}};
    int i,flag=0;

    char username[20],password[20];

    printf("Enter the Username\n");
    fgets(username,20,stdin);
    username[strlen(username)-1]='\0';

    printf("Enter the Password\n");
    fgets(password,20,stdin);
    password[strlen(password)-1]='\0';

    for(i=0;i<5;i++)
    {
        if(strcmp(str[i][0],username)==0 && strcmp(str[i][1],password)==0)
        {
            printf("Valid Username and Password\n");
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("Not Valid Username or Password\n");
    }
    return 0;
}