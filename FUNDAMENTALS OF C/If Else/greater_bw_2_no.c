//WAP to greater b/w 2 no
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the 2 No = ");
    scanf("%d%d",&a,&b);
    if (a==b)
        printf("Both are Equal");
    else if (a>b)
        printf("%d is greater than %d",a,b);
    else
        printf("%d is greater than %d",b,a);
}