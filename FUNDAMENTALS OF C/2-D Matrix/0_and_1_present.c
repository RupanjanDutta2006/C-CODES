//HOW many 0 and 1 is Present in a Matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,o=0,z=0;
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
        {
            printf("%d ",a[i][j]);
            if(a[i][j]==1)
                o++;
            else if(a[i][j]==0)
                z++;
        }
        printf("\n");
    }
    printf("No of 1 = %d\nNo of 0 = %d",o,z);
}