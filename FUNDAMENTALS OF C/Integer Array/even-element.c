//WAP to print the even elements in an Int array
#include<stdio.h>
void main()
{
    int n,b,i;
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
     for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nEven elements in the Array are = ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            printf("%d ",a[i]);
    }
    //printf("\nMaximum element in the Array is = %d",max);
}