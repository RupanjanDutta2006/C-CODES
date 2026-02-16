//WAP to check whether a no is Abundant no or not
// Abundant no: A number for which the sum of its proper divisors is greater than the number itself.
// Example: 12 (1+2+3+4+6=16 > 12), 18 (1+2+3+6+9=21 > 18), 20 (1+2+4+5+10=22 > 20)
#include <stdio.h>
void main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    printf("%d is%san Abundant number.", n, (sum > n) ? " " : " not ");
}