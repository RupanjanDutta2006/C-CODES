// WAP to reverse an Int array
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Range  =");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element in %d Index = ",i);
        scanf("%d",&a[i]);
    }
    printf("The Array is - ");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nThe Reversed Array is - ");
    for(int i=n-1;i>=0;i--)
    {
        printf(" %d ",a[i]);
    }
}