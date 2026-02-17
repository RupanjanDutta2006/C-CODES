//WAP to check whether a no is prime or not.
// prime no: 2,3,5,7,11,13
#include <stdio.h>
void main()
{
    int n, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++)
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    printf("%d is%sa prime number.", n, (flag == 0) ? " " : " not ");
}