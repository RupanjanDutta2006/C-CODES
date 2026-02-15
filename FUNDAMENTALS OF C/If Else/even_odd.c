//WAP to check whether a no is Even or not
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the No = ");
    scanf("%d",&a);
    if (a==0)
        printf("%d is a Neutral no",a);
    else if (a%2==0)
        printf("%d is a Even no",a);
    else    
        printf("%d is a Odd no",a);
}