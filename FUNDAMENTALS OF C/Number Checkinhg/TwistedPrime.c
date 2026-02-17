// WAP to check whether a no is Twisted prime or not
// Twisted prime no: A prime number whose reverse is also a prime number.
// Example: (13,31), (17,71), (37,73), (79,97), (107,701)
#include <stdio.h>
void main()
{
    int a, rem, x, i, c1 = 0, c2 = 0, s = 0;
    printf("Enter the no = ");
    scanf("%d", &a);
    for (x = a; x != 0; x /= 10)
        s = s * 10 + x % 10;
    x = a;
    for (i = 2; i < a; i++)
        if (a % i == 0)
        {
            c1++;
            break;
        }
    for (i = 2; i < s; i++)
        if (s % i == 0)
        {
            c2++;
            break;
        }
    printf("%d is%sa Twisted Prime No", a, (c1 == 0 && c2 == 0) ? " " : " not ");
}