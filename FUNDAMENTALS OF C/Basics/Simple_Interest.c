//WAP to calculate Simple Interest
#include <stdio.h>
void main()
{
    float p, r, t, si;
    printf("Enter principal amount, rate of interest and time in years: ");
    scanf("%f%f%f", &p, &r, &t);
    si = (p * r * t) / 100;
    printf("Simple Interest is: %.2f", si);
}
