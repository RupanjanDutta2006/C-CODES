// WAP to check whether a no is Spy no or not
// Spy no: A number where the sum of its digits equals the product of its digits.
// Example: 123 (1+2+3=6 and 1*2*3=6), 22 (2+2=4 and 2*2=4)
#include <stdio.h>
void main()
{
    int n, i, sum = 0, product = 1, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (x = n; n != 0; n /= 10)
        sum += n % 10;
    for (n = x; n != 0; n /= 10)
        product *= n % 10;
    printf("%d is%sa Spy number.", x, (sum == product) ? " " : " not ");
}