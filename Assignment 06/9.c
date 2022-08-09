// 9. Write a program to calculate LCM of two numbers

#include <stdio.h>

int main()
{
    int i,n1,n2;

    printf("Enter a number 1 and number 2\n");
    scanf("%d %d",&n1,&n2);

    for(i=1;i<=n1*n2;i++)
    {
        if(i%n1==0 && i%n2==0)
        {
            break;
        }
    }

    printf("LCM of %d and %d is %d\n",n1,n2,i);

    return 0;
}