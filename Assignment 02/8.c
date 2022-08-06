// 8. Write a program to check whether the given number is even or odd using a bitwise operator.

#include <stdio.h>

int main(){
    int a;

    printf("Enter a number\n");
    scanf("%d",&a);

    a=a&1;

    if(a==1)
    {
        printf("Odd\n");
    }
    else{
        printf("Even\n");
    }
    return 0;
}