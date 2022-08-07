/* 11. Write a program to take marks of 5 subjects from the user. 
Assume marks are given out of 100 and passing marks is 33. 
Now display whether the candidate passed the examination or failed.*/

#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5;

    printf("Enter a marks of English, Physics, Chemistry, Maths, Hindi out of 100 marks\n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    
    if(s1>100 && s2>100 && s3>100 && s4>100 && s5>100 || s1<0 && s2<0 && s3<0 && s4<0 && s5<0)
    printf("Please enter a marks of subjects in range of 0 to 100\n");
    
    else
    if(s1>=33 && s2>=33 && s3>=33 && s4>=33 && s5>=33)
    printf("The candidate PASSED the examination\n");

    else
    printf("The candidate FAILED the examination\n");
    return 0;
}