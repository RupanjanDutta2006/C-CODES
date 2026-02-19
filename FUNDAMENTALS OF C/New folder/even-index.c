//WAP to print the even index elements in an Int array
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
    printf("\nEven index element in the Array is = ");
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            printf("%d ",a[i]);
    }
    //printf("\nMaximum element in the Array is = %d",max);
}