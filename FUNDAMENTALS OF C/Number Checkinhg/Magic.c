// WAP to check whether a no is Magic no or not
// Magic no: A number where the sum of its digits, when repeatedly added until a single digit is obtained, equals 1.
// Example: 28 (2+8=10, then 1+0=1), 19 (1+9=10, then 1+0=1)
#include <stdio.h>
void main()
{
    int n, i, sum = 0, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (x = n; n != 0; n /= 10)
        sum += n % 10;
    while (sum > 9)
        sum = sum / 10 + sum % 10;
    printf("%d is%sa Magic number.", x, (sum == 1) ? " " : " not ");
}