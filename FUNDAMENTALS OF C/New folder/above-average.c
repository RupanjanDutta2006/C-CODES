//WAP to find out above average elements in an Int array and print
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
        s=s+a[i];
    }
    printf("The Array is - ");
     for(int i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nAbove Average of the Array is  = %f",(float)s/(float)n);
    printf("\nAbove average element is/are - ");
     for(int i=0;i<n;i++)
    {
        if (a[i] > s / n)
            printf("%d ", a[i]);
    }
}