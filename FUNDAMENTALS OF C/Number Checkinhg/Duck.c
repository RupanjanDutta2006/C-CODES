//WAP to check whether a no is Duck no or not
// Duck no: A number that has at least one zero in it, but no zero should be present at the beginning of the number.
// Example: 102, 203, 450, 6007 
#include <stdio.h>
void main()
{
    int n, rem, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (; n != 0; n /= 10)
        if (n % 10 == 0)
        {
            flag = 1;
            break;
        }
    printf("The number is%sa Duck number.", (flag == 1) ? " " : " not ");
}