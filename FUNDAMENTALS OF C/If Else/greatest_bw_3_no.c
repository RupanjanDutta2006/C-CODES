//WAP to greatest_bw_3_no
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the 3 No = ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && b==c)
        printf("1st no %d is Greatest than Both 2nd and 3rd no",a);
    else if (a>b && a>c)
        printf("1st no %d is Greatest than %d and %d",a,b,c);
    else if (b>a && a==c)
        printf("2nd no %d is Greatest than Both 1st and 3rd no",b);
    else if (b>a && b>c)
        printf("2nd no %d is Greatest than %d and %d",b,a,c);
    else if (c>a && a==b)
        printf("3rd no %d is Greatest than Both 1st and 2nd no",c);
    else if (c>a && c>b)
        printf("3rd no %d is Greatest than %d and %d",c,a,b);
    //
    if (a<b && b==c)
        printf("1st no %d is Smallest than Both 2nd and 3rd no",a);
    else if (a<b && a<c)
        printf("1st no %d is Smallest than %d and %d",a,b,c);
    else if (b<a && a==c)
        printf("2nd no %d is Smallest than Both 1st and 3rd no",b);
    else if (b<a && b<c)
        printf("2nd no %d is Smallest than %d and %d",b,a,c);
    else if (c<a && a==b)
        printf("3rd no %d is Smallest than Both 1st and 2nd no",c);
    else if (c<a && c<b)
        printf("3rd no %d is Smallest than %d and %d",c,a,b);
    else
        printf("3 no are Equal");
}