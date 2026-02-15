//WAP to check whether a year is Leap year or not
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the Year = ");
    scanf("%d",&a);
    if ((a%400==0) || ((a%4==0) && (a%100!=0)))
        printf("%d is a Leap Year",a);
    else
        printf("%d is NOT a Leap Year",a);
}