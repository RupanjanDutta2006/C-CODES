//WAP to check whether a no is Caprekar no or not
// Caprekar no: A number whose square can be split into two parts that add up to the original number.
// Example: 9 (9^2=81 and 8+1=9), 45 (45^2=2025 and 20+25=45), 297 (297^2=88209 and 88+209=297)
#include<stdio.h>
#include<math.h>
void main()
{
    int c=0,rem1,rem2,sq,n,x,p=1,i;
    printf("Enter the No = ");
    scanf("%d",&n);
    for(x=n; n>0; n=n/10)
        c++;
    n=x;
    sq=n*n;
    //p=pow(10,c);
    for ( i = 0; i < c; i++) 
        p= 10*p;
    rem1=sq%p;
    rem2=sq/p;
    printf("%d is%sa Caprekar no",x, (x==(rem1+rem2)) ? " " : " not ");
}