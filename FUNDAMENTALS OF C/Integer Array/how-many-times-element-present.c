//WAP to count how many times an element is present in an array
#include<stdio.h>
void main()
{
    int n,count=0,b;
    printf("Enter the Range  =");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element in %d Index = ",i);
        scanf("%d",&a[i]);
    }   
    printf("Enter the element to count = ");
    scanf("%d",&b);
    for(int i=0;i<n;i++)
    {
        if(a[i]==b)
            count++;
    }
    printf("The element %d is present %d times in the array.",b,count);
}