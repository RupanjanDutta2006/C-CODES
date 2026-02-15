//WAP to check whether a no is Positive or not
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the No = ");
    scanf("%d",&a);
    if (a==0)
        printf("%d is a Neutral no",a);
    else if(a>0)
        printf("%d is a Positive No",a);
    else
        printf("%d is a Negative no",a);
}