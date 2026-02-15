//WAP to check whether a no is Buzz no or not
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the No = ");
    scanf("%d",&a);
    if (a==0)
        printf("%d is a Neutral no",a);
    else if (a%10==7 && a%7==0)
        printf("%d is a Buzz No",a);
    else    
        printf("%d is NOt a Buzz No",a);
}