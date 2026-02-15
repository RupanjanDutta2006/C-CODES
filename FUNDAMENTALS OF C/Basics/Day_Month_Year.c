//WAP to make conversion of day to month and year
#include <stdio.h>
void main()
{
    int d, m, y;
    printf("Enter number of days: ");
    scanf("%d", &d);
    y = d / 365;
    d = d % 365;
    m = d / 30;
    d = d % 30;
    printf("%d days is equal to %d year, %d month and %d days", d + m*30 + y*365, y, m, d);
}