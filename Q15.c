//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main ()
{
    char  ch;
    int x;

    printf ("enter any number or character ");
    scanf ("%c",&ch);

    if (ch>='A' && ch <='Z')
    {
        printf ("uppercase");
    }
    else if (ch>='a' && ch <='z')
    {
        printf ("lowercase");
    }
    else if (x>=0 && x<=9)
    {
        printf ("number");
    }
    else if (ch)
    {
        printf ("special character");
    }
    return 0;
}