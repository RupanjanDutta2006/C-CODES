//WAP to add, Subtract, Multiply, Divide and Remainder of 2 no
#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter 2 no: ");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);
}