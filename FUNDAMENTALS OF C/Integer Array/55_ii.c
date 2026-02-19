//55 ii
#include<stdio.h>
#include<stdlib.h>
void main()
{
int *a,n,i,key,flag=0;
printf("Enter the number of elements=");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("Found at position %d",i+1);
flag=1;
break;
}
}
if(flag==0)
printf("Not Found");
free(a);
}
