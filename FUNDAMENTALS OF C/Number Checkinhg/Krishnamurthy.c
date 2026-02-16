// WAP to check whether a no is Krishnamurthy no or not
// Krishnamurthy no: A number where the sum of the factorials of its digits equals the number itself.
// Example: 145 (1! + 4! + 5! = 1 + 24 + 120 = 145)
#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
void main()
{
    int n, i, sum = 0, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (x = n; n != 0; n /= 10)
        sum += factorial(n % 10);
    printf("%d is%sa Krishnamurthy number.", x, (sum == x) ? " " : " not ");
}