//WAP to Convert day to month
#include <stdio.h>
void main()
{
    int d,m;
    printf("Enter number of days: ");
    scanf("%d", &d);
    m = d / 30;
    d= d % 30;
    printf("%d days is equal to %d month and %d days", d + m*30, m, d);
}