//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter first side of triange ");
    scanf ("%d",&a);
    printf ("enter second side of triange ");
    scanf ("%d",&b);
    printf ("enter third side of triange ");
    scanf ("%d",&c);

    if (a+b>c && b+c>a && c+a>b)
    {
        if (a==b && b==c && c==a)
        {
            printf ("equilateral triangle");
        }
        else if ((a==b || b==c || c==a) )
        {
        printf("isoceles triangle");
        }
        else 
        {
            printf ("scalene triangle");
        }
    }
    else 
    {
        printf ("not a valid triangle ");
    }
    return 0;
}