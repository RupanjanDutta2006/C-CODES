// WAP to check whether a no is Pronic no or not
// Pronic no: A number that is the product of two consecutive integers.
// Example: 6 (2*3=6), 12 (3*4=12)
#include <stdio.h>
void main()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
        if (i * (i + 1) == n)
        {
            flag = 1;
            break;
        }
    printf("%d is%sa Pronic number.", n, (flag == 1) ? " " : " not ");
}