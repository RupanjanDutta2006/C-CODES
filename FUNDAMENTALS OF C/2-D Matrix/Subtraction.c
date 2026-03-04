//Matrix Subtraction
#include<stdio.h>
void main()
{
    int i,j,r1,c1,r2,c2;
    printf("Enter the Row and Column No for 1st & 2nd Matrix= ");
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(r1==r2 && c1==c2)
    {
        int a[r1][c1],b[r2][c2];
        printf("Enter the Elements for %dX%d matrix= \n",r1,c1);
        //input
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("Enter the Element for (%d,%d) index = ",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the Elements for %dX%d matrix= \n",r2,c2);
        //input
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("Enter the Element for (%d,%d) index = ",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        //output
        printf("The 1st Matrix is = \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d ",a[i][j]);
            printf("\n");
        }
        printf("The 2nd Matrix is = \n");
        for(i=0;i<r2;i++)   
        { 
            for(j=0;j<c2;j++)
                printf("%d ",b[i][j]);
            printf("\n");
        }
        //Subtraction
        printf("The Resultant Matrix is = \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d ",a[i][j]-b[i][j]);
            printf("\n");
        }
    }
    else
        printf("1st & 2nd matrix's row and Column no are not same,so not possible");
}