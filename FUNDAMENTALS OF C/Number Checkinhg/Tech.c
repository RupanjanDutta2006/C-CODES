// WAP to check whether a number is Tech number or not
#include <stdio.h>
#include <math.h>

int main()
{
    int a, x, rem1, rem2, s, c = 0, p=1;

    printf("Enter the No = ");
    scanf("%d", &a);

    x = a;

    // Count digits
    while (x != 0)
    {
        c++;
        x = x / 10;
    }

    // Check even number of digits
    if (c % 2 != 0)
    {
        printf("%d is not a Tech No.", a);
        return 0;
    }

    // Calculate 10^(c/2)
    p = pow(10, c / 2);

    rem1 = a / p;
    rem2 = a % p;

    s = rem1 + rem2;

    if (s * s == a)
        printf("%d is a Tech No.", a);
    else
        printf("%d is not a Tech No.", a);

    return 0;
}
