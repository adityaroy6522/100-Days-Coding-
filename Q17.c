//write a program to find the roots of Quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b,c,d,x1,x2;
    printf ("enter three cofficient of x^2 = ");
    scanf ("%f",&a);
    printf ("enter three cofficient of x = ");
    scanf ("%f",&b);
    printf ("enter the constant = ");
    scanf ("%f",&c);

    d=b*b-4*a*c;
    x1=(-b + sqrt(d) ) / (2*a);
    x2=(-b - sqrt(d) ) / (2*a);

    if (d>0)
    {
        printf ("roots are real and different :%f %f",x1,x2);
    }
    else if (d==0)
    {
        printf ("roots are real and same :%f ",x1);
    }
    else if (d<0)
    {
        printf ("roots are complex");
    }
    return 0;
}