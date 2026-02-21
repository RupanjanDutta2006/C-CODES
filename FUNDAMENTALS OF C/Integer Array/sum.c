//WAP to print the sum of the elements in an Int array
#include<stdio.h>
void main()
{
    int n,b,s=0;
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
        s=s+a[i];
    }
    printf("\nSum = %d",s);
}