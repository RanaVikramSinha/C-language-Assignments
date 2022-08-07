/* 9. Write a program to find the greatest among three given numbers. 
Print number once if the greatest number appears two or three times. */

#include <stdio.h>

int main()
{
    int n1,n2,n3;

    printf("Enter a number of n1,n2 and n3\n");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>=n2 && n1>=n3)
    printf("%d is greatest among %d, %d and %d\n",n1,n1,n2,n3);

    else
    if(n2>=n1 && n2>=n3)
    printf("%d is greatest among %d, %d and %d\n",n2,n1,n2,n3);

    else
    // if(n3>=n1 && n3>=n2)
    printf("%d is greatest among %d, %d and %d\n",n3,n1,n2,n3);
    
    return 0;
}