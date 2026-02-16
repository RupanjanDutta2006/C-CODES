// WAP to check whether a no is Disarium no or not
// Disarium no: A number where the sum of its digits raised to the power of their respective positions equals the number itself.
// Example: 135 (1^1 + 3^2 + 5^3 = 1 + 9 + 125 = 135), 89 (8^1 + 9^2 = 8 + 81 = 89)
#include <stdio.h>
#include <math.h>
void main()
{
    int n, i, sum = 0, c = 0, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (x = n; n != 0; n /= 10)
        c++;
    for (n = x, i = n; i != 0; i /= 10)
        sum += pow(i % 10, c--);
    printf("%d is%sa Disarium number.", x, (sum == x) ? " " : " not ");
}