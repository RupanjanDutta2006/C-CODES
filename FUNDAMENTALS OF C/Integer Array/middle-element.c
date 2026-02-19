//WAP to print the middle element(s) in an Int array
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
    if(n%2==1)
        printf("\nMiddle element in the Array is = %d",a[n/2]);
    else
        printf("\nMiddle elements in the Array are = %d and %d",a[(n/2)-1],a[n/2]);
}