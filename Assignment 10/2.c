// 2. Write a function to calculate simple interest. (TSRS)

#include <stdio.h>

double simpleInterest(double,double,double);

int main()
{
    double p,r,t,si;

    printf("Enter the value of p, r and t\n");
    scanf("%lf %lf %lf",&p,&r,&t);

    si=simpleInterest(p,r,t);

    printf("Simple Interest is %lf\n",si);

    return 0;
}

double simpleInterest(double p,double r,double t)
{
    return (p*r*t)/100;
}