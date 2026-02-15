//WAP to find quotient and remainder of 2 no
#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter 2 no: ");
    scanf("%d%d", &a, &b);
    printf("Quotient of %d and %d is: %d\n", a, b, a/b);
    printf("Remainder of %d and %d is: %d", a, b, a%b);
}