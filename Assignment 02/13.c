/* 13. Write a program to take a three-digit number from the user 
and rotate its digits by one position towards the right. */

#include <stdio.h>

int main(){
    int n,n1,n2,n3;

    printf("Enter a three-digit number\n");
    scanf("%d",&n);

    n1 = (n%10)*100;
    n2 = n/10;
    n3 = n1 + n2;

    printf ("%d",n3);
    return 0;
}