//Transpose of a Matrix
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the Row and Column No = ");
    scanf("%d%d",&r,&c);
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
    //Transpose
    printf("The Transpose Matrix is = \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",a[j][i]);
        printf("\n");
    }
}