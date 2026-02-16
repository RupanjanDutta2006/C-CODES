//WAP to check whether a no is Harshad no or not 
// Harshad no: A number that is divisible by the sum of its digits.
// Example: 18 (1+8=9 and 18 is divisible by 9), 21 (2+1=3 and 21 is divisible by 3), 45 (4+5=9 and 45 is divisible by 9)
#include <stdio.h>  
void main()  
{  
    int n, sum = 0, temp, rem;  
    printf("Enter a number: ");  
    scanf("%d", &n);  
    for(temp = n; temp != 0; temp /= 10)  
        sum += temp % 10;   
    printf("%d is a Harshad number.", n, (n % sum == 0) ? " " : " not ");  
}