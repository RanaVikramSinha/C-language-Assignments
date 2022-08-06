// 1. Write a program to print unit digit of a given number

#include <stdio.h>

int main(){
    int n;

    printf("Enter a number\n");
    scanf("%d",&n);

    n = n%10;

    printf("%d",n);

    return 0;
}