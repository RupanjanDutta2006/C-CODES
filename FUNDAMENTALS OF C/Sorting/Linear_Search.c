//WAP to search an element within an array (linear serach tech.) repeated element
#include<stdio.h>
void main()
{
    int i,n,ser,f=0,c=0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //output
    printf("Array Element = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    //checking
    printf("\nEnter the No. you want to searched for = ");
    scanf("%d",&ser);
    for(i=0;i<n;i++)
    {
       if(a[i]==ser)
       {
          f=1;
          printf("Search element %d Found at %d index\n",ser,i);
          c++;
       }
    }
    if(f==1)
      printf("%d No. of Times",c);
    else
      printf("Search element %d NOT Found ",ser);
}