#include <stdio.h>
int main ()
{
    int n;
    printf ("enter a number ");
    scanf ("%d",&n);
    if (n>0)
    {
        printf ("positive");
    }
    if (n<0)
    {
        printf ("negative");
    }
    if (n==0)
    {
        printf ("either positive nor negitive");
    }
    return 0;
}