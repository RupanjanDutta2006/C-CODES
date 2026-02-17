//WAP to check whether a given no is Twin prime or not.
// Twin prime no: A pair of prime numbers that have a difference of two and both numbers are prime.
// Example: (3,5), (5,7), (11,13), (17,19), (29,31)
#include <stdio.h>
void main()
{
    int a, b, i, flag1 = 0, flag2 = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i = 2; i <= a / 2; i++)
        if (a % i == 0)
        {
            flag1 = 1;
            break;
        }
    for (i = 2; i <= b / 2; i++)
        if (b % i == 0)
        {
            flag2 = 1;
            break;
        }
    if (flag1 == 0 && flag2 == 0 && ((b - a) == 2 || (a - b) == 2))
        printf("The numbers are twin primes.");
    else
        printf("The numbers are not twin primes.");
}