//WAP to calculate area and perimeter of Square
#include <stdio.h>
void main()
{
    int s;
    printf("Enter side of square: ");
    scanf("%d", &s);
    printf("Area of square is: %d\n", s*s);
    printf("Perimeter of square is: %d", 4*s);
}