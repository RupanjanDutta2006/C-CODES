/*
    - - - * 
    - - * *
    - * * *
    * * * *
*/
#include<stdio.h>
void main()
{
    int i,j,a;
    printf("Enter the range = ");
    scanf("%d",&a);
    for(i=1;i<=a;i+=1)
    {
        for(j=1;j<=a;j+=1)
            (i+j<=a)?printf(" "):printf("* ");
        printf("\n");
    }
}