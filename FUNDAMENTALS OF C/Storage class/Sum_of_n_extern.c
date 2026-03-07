// wap to print the sum of n natural no. 1- n =sum
#include <stdio.h>
extern int i;
extern int s;
void main()
{
    int n;
    printf("Enter the No.=");
    scanf("%d", &n);
    for (; i <= n; i++)
    {
        if (i == n)
            printf("%d  ", i);
        else
            printf("%d + ", i);
        s = s + i;
    }
    printf("= %d", s);
}
int i = 1, s = 0;