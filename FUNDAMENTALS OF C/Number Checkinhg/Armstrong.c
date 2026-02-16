// WAP to check whether a no is Armstrong no or not
//  Armstrong no: A number that is equal to the sum of its digits raised to the power of the number of digits.
//  Example: 153 (1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153), 9474 (9^4 + 4^4 + 7^4 + 4^4 = 6561 + 256 + 2401 + 256 = 9474)
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
        sum += pow(i % 10, c);
    printf("%d is%san Armstrong number.", x, (sum == x) ? " " : " not ");
}