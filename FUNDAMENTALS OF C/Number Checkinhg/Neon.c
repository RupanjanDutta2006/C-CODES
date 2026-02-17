// WAP to check whether a no is Neon no or not
// Neon no: A number where the sum of the digits of its square is equal to the number itself.
// Example: 9 (9^2=81 and 8+1=9),45 (45^2=2025 and 2+0+2+5=9)
#include <stdio.h>
void main()
{
    int n, i, sum = 0, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (x = n, i = n * n; i != 0; i /= 10)
        sum += i % 10;
    printf("%d is%sa Neon number.", x, (sum == x) ? " " : " not ");
}