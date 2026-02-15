//WAP to check whether a no is Autopolymorphic no or not
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the No = ");
    scanf("%d",&a);
    if (a==0)
        printf("%d is a Neutral no",a);
    else if ((a*a)%10==a || (a*a)%100==a)
        printf("%d is a Autopolymorphic No",a);
    else   
        printf("%d is Not a Autopollymorphic No",a);
}