//WAP to take input in a Int array and print
#include<stdio.h>
void main()
{
    int n,b;
    printf("Enter the Range  =");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element in %d Index = ",i);
        scanf("%d",&b);
        a[i]=b;
    }
    printf("The Array is - ");
     for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}