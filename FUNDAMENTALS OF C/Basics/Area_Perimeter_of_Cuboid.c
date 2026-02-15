//WAP to calculate area and perimeter of Cuboid 
#include <stdio.h>
void main()
{
    int l, b, h;
    printf("Enter length, breadth and height of cuboid: ");
    scanf("%d%d%d", &l, &b, &h);
    printf("Area of cuboid is: %d\n", 2*(l*b + b*h + h*l));
    printf("Perimeter of cuboid is: %d", 4*(l+b+h));
}