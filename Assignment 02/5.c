// 5. Write a program to input a three-digit number and display the sum of the digits.

#include <stdio.h>

int main(){
    int n,n1,n2,n3,sum;

    printf("Enter a three-digit number\n");
    scanf("%d",&n);

    n1=n/100;
    n2=(n-(n1*100))/10;
    n3=n%10;

    sum=n1+n2+n3;

    printf("Sum of the digits is %d\n",sum);

    return 0;
}