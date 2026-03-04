#include<stdio.h>
void main()
{
    int  r,c,total=1,i,j;
    printf("Enter the No of Row and Column = ");
    scanf("%d%d",&r,&c);
    int a[r][c],firstcol=0,lastcol=c-1,toprow=0,buttomrow=r-1;
    printf("Enter the Element for %d times = \n",r*c);
    while(total <= r*c)
    {   
        // left → right
        for(i = firstcol,j = toprow; i <= lastcol && total <= r*c; i++, total++)
            scanf("%d", &a[j][i]);
        toprow++;
        // top → bottom
        for(i = toprow,j = lastcol; i <= buttomrow && total <= r*c; i++, total++)
            scanf("%d", &a[i][j]);
        lastcol--;
        // right → left
        for(i = lastcol,j = buttomrow; i >= firstcol && total <= r*c; i--, total++)
            scanf("%d", &a[j][i]);
        buttomrow--;
        // bottom → top
        for(i = buttomrow, j = firstcol; i >= toprow && total <= r*c; i--, total++)
            scanf("%d", &a[i][j]);
        firstcol++;    
    }
    printf("Spiral matrix Is = \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}
