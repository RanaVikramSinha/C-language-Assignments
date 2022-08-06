// 6. Write a program which takes a character as an input and displays its ASCII code.

#include <stdio.h>

int main(){
    char a;

    printf("Enter a character\n");
    scanf("%c",&a);

    printf("%c ASCII Code is %d\n",a,a);
    return 0;
}