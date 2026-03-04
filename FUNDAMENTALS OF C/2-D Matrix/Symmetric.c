//Symmetric Matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,f=0;
    printf("Enter the Row and Column No = ");
    scanf("%d%d",&r,&c);
    if(r==c)
    {
        int a[r][c];
    printf("Enter the Elements for %dX%d matrix= \n",r,c);
    //input
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the Element for (%d,%d) index = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //output
    printf("The Matrix is = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    //Symmetric
    for(i=0;i<c;i++)
        for(j=0;j<r;j++)
            if(a[i][j]!=a[j][i])
            {
                f=1;
                break;
            }
    if(f==0)
        printf("it is a Symmetric Matrix");
    else
        printf("it is NOT a Symmetric Matrix");
    }
    else
        printf("1st & 2nd matrix's row and Column no are not same,so not possible");
}