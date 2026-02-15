//WAP to calculate area and perimeter of circle
#include <stdio.h>
void main()
{
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Area of circle is: %.2f\n", 3.14*r*r);
    printf("Perimeter of circle is: %.2f", 2*3.14*r);
}
