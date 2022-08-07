/* 17. Write a program which takes the length of the sides of a triangle as an input. 
Display whether the triangle is valid or not. */

#include <stdio.h>

int main()
{
    double s1,s2,s3;

    printf("Enter a number of side 1, side 2 and side 3\n");
    scanf("%lf %lf %lf",&s1,&s2,&s3);

    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
    printf("Triangle is valid\n");

    else
    printf("Triangle is not valid");

    return 0;
}