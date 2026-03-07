#include <stdio.h>
void disp();
int x = 20, *p; // global
// p=&x;
void main()
{
    register int x = 10, *p; // local
    p = &x;                  // x's addresss stored within p
    printf("The Value of X %d\n", x);
    printf("The Value of X %d\n", *p); // 10
    printf("The Address %u\n", &x);
    printf("The Address %u\n", p); // x address
    printf("The Address %u", &p);  // p address*/
    // disp();
}
void disp()
{
    printf("The Value %d\n", *p);
    printf("The Address %u\n", p);
}
