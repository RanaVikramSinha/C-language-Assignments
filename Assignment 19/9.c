// 9. Write a program that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed

#include <stdio.h>
#include <string.h>

int factorial(int);

int main()
{
    char str[5][20]={"username1","username2","username3","username4","username5"};
    char username[30];

    printf("Enter the Username\n");
    fgets(username,30,stdin);
    username[strlen(username)-1]='\0';
    
    int i,a=-1;

    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],username)==0)
        a=i;
    }

    if(a!=-1)
        {
            int n,f;

            printf("Enter a number\n");
            scanf("%d",&n);

            f=factorial(n);

            printf("Factorial of %d is %d\n",n,f);
        }

        else
        printf("Error Not Valid Username\n");

    return 0;
}

int factorial(int n)
{
    if(n==0 || n==1)
    return 1;

    return n*factorial(n-1);
}