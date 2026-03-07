// wap to print the factorial of a no.
#include <stdio.h>
extern int i;
extern int f;
extern int n;
void main()
{
    int n;
    printf("Enter the No.=");
    scanf("%d", &n);
    for (; i <= n; i++)
        f = f * i;
    printf("The Factorial of %d is %d", n, f);
}
int i = 1, f = 1;
