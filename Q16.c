//write a program to input three numbers and find the largest among them using if else.

#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter three number ");
    scanf ("%d%d%d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf ("%d is the the greatest",a);
    }
    else if (b>a && b>c)
    {
        printf ("%d is the greatest ",b);
    }
    else if (c>a && c>b)
    {
        printf ("%d is the greatest ",c);
    }
    return 0;
}