// 3. Write a program to print the first N natural numbers in reverse order

#include <stdio.h>

int main()
{
    int i;

    printf("Enter a number\n");
    scanf("%d",&i);

    while(i>0)
    {
        printf("%d\n",i);
        i--;
    }
    return 0;
}