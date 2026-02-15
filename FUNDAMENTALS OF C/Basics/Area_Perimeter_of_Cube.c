//WAP to calculate area and perimeter of a Cube
#include <stdio.h>
void main()
{
    int s;
    printf("Enter side of cube: ");
    scanf("%d", &s);
    printf("Area of cube is: %d\n", 6*s*s);
    printf("Perimeter of cube is: %d", 12*s);
}
