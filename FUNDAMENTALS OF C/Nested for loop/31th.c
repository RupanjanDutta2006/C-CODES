///question no 31
/*
1 
1 2 1 
1 2 3 2 1 
1 2 3 4 3 2 1 
*/
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d ",j);
        for(k=i-1;k>=1;k--)
            printf("%d ",k);
        printf("\n");
    }
}