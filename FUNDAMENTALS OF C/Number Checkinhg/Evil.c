//WAP to check whether a no is Evil number or not
//Evil number: A number that has an even number of 1's in its binary representation.
//Example: 3 (Binary representation is 11, which has two 1's),
//         5 (Binary representation is 101, which has two 1's)
#include <stdio.h>
void main()
{
    int n, count = 0, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(x = n; n != 0; n /= 2)
        if (n % 2 == 1)
            count++;
    printf("%d is%s an Evil number.", x, (count % 2 == 0) ? "" : " not");
} 