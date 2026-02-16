//WAP to check whether a no is Co prime or not.
// Co prime no: GCD of two numbers is 1
// Example: 8 and 15 , 14 and 25, 35 and 64, 17 and 20, 9 and 28,4 and 5
#include <stdio.h>
void main()
{
    int a, b, i, gcd = 1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a && i <= b; i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;
    printf("%d and %d are%sa prime number.", a, b, (gcd == 1) ? " " : " not ");
}   