// WAP to check whether a no is Circular Prime no or not
// Circular Prime no: A prime number that remains prime under all rotations of its digits.
// Example: 197 (197, 971, 719 are all prime)
#include <stdio.h>
void main()
{
    int n, i, flag = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        if (!isPrime(temp))
        {
            flag = 1;
            break;
        }
        temp /= 10;
    }
    printf("%d is%sa Circular Prime number.", n, (flag == 0) ? " " : " not ");
}