/*Print Diagonal
I/P:1 2 3 
    4 5 6
    7 8 9 
O/P:1   
      5
        9

*/
#include<stdio.h>
void main()
{
    int i,j,r,c;
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
        //print Diagonal
        printf("The Diagonal of Matrix is = \n");
        for(i=0;i<r;i++)
        {
           for(j=0;j<c;j++)
               (i==j)?printf("%d ",a[i][j]):printf("  ");
           printf("\n");
       }
    }
    else
        printf("Row & Column No are not Equal, So not possible");
}