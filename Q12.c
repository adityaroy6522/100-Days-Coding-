//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
#include <complex.h>
#include <math.h>

int main() {
    int n;
    printf("enter number n ");
    scanf("%d", &n);
    double complex z = cpow(n, 0.5);   // √(-1)
    printf("Result = %.2f + %.2fi\n", creal(z), cimag(z));
    return 0;


    
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