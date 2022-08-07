/* Write a program to check whether roots of a given quadratic equation are 
real & distinct, real & equal or imaginary roots*/

#include <stdio.h>

int main()
{
    double a,b,c,d;

    printf("Enter a number of a, b and c\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = (b*b)-(4*a*c);

    if(d>0)
    printf("Roots are real and distinct\n");

    else
    if(d==0)
    printf("Roots are real and equal\n");

    else
    printf("Roots are real and imaginary\n");

    return 0;
}