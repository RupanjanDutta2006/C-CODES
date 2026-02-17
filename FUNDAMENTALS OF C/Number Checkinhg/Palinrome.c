// WAP to check whether a given no is a palindrome or not.
// 121 reverse=121 palindrome
#include <stdio.h>
void main()
{
    int n, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (temp = n; n != 0; n /= 10)
        sum = sum * 10 + n % 10;
    printf("The number is%sa palindrome.", (sum == temp) ? " " : " not ");
}