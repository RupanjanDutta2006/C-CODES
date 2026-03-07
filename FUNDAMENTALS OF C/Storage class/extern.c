#include <stdio.h>
extern int x;
extern float y;
void main()
{
    printf("%d\n", x);
    x++;
    printf("%d\n", x);
    printf("%.2f\n", y);
}
int x = 10;
float y = 5.55555;