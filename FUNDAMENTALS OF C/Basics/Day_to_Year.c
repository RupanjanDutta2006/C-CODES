//WAP to convert day to year
#include <stdio.h>
void main()
{
    int d, y;
    printf("Enter number of days: ");
    scanf("%d", &d);
    y = d / 365;
    d = d % 365;
    printf("%d days is equal to %d year and %d days", d + y*365, y, d);
}
