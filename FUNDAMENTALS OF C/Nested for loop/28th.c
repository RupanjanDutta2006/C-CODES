/*
      * 
     * *
    * * *
   * * * *
    * * *
     * *
      *
*/
#include<stdio.h>
void main()
{
    int i,j,a;
    printf("Enter the range = ");
    scanf("%d",&a);
    if(a%2==0)
        printf("Please enter a odd no");
    else
    {
    for(i=1;i<=a;i+=1)
    {
        for(int p=a/2,j=1;j<=(a/2)+1;j+=1)
            (i<=p+1)?((i+j<=p+1)?printf(" "):printf("* ")):(i>p+1)?((i-(p+1)>=j)?printf(" "):printf("* ")):printf("");
        printf("\n");
    }
    }
}
//(i+j<=a || (i-((a/2))==j || i-((a/2))>j))?printf(" "):printf("* ");
//((i>)i+j<=a || (i-p==j || i-p>j))?printf(" "):printf("* ");
         //   (i+j<=a/2+1)?printf(" "):printf("* ");
        