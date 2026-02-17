// WAP to check whether a no is Perfect no or not
//  Perfect no: A number that is equal to the sum of its proper divisors.
//  Example: 6 (1+2+3=6), 28 (1+2+4+7+14=28)
#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    printf("%d is%sa Perfect number.", n, (sum == n) ? " " : " not ");
}