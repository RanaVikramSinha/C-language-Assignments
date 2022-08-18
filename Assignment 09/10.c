// 10. C program to find all roots of a quadratic equation using switch case

#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,root1,root2,imag;

    printf("Enter a, b & c\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    d=b*b-4*a*c;

    switch(d>0)
    {
        case 1: root1=(-b+sqrt(d))/(2*a);
                root2=(-b-sqrt(d))/(2*a);

                printf("%lf and %lf : Roots are real and different\n",root1,root2);
                break;

        case 0: switch(d<0)
                {
                    case 1: root1=(-b)/(2*a);
                            root2=(-b)/(2*a);
                            imag=sqrt(-d)/(2*a);

                            printf("%lf + i*(%lf) and %lf - i*(%lf) : Roots are complex and different\n",root1,imag,root2,imag);
                            break;

                    case 0: root1=(-b)/(2*a);
                            root2=(-b)/(2*a);

                            printf("%lf and %lf : Roots are real and equal\n",root1,root2);
                            break;
                }break;        
    }

    return 0;
}