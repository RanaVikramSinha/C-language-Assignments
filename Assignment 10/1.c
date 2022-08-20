// 1. Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>

double area(double);

int main()
{
    double a,r;

    printf("Enter the radius of circle\n");
    scanf("%lf",&r);

    a=area(r);

    printf("Area of a circle is %lf\n",a);
    return 0;
}

double area(double r)
{
    return r*r*3.14;
}