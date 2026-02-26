/*
   4
   3 3
   2 2 2 
   1 1 1 1 
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=4;i>=1;i-=1)
    {
        for(j=4;j>=i;j-=1)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}