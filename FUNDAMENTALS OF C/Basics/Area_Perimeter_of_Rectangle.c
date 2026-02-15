//WAP to calculate area and perimeter of rectangle
#include <stdio.h>
void main()
{
    int l, b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d%d", &l, &b);
    printf("Area of rectangle is: %d\n", l*b);
    printf("Perimeter of rectangle is: %d", 2*(l+b));
}