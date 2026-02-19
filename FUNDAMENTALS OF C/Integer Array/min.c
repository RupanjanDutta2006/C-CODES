//WAP to find out the minimum element in an Int array and print
#include<stdio.h>
void main()
{
    int n,b,s=0,min=0;
    printf("Enter the Range  =");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element in %d Index = ",i);
        scanf("%d",&b);
        a[i]=b;
        s=s+a[i];
    }
    printf("The Array is - ");
     for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    min = a[0];
    for(int i=1;i<n;i++)
    {
        if (a[i] < min)
         min = a[i];
    }
    printf("\nMinimum element in the Array is = %d",min);
}