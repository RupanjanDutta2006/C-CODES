//WAP to compare 2 String
#include<stdio.h>
void main()
{
    char a[20],b[20];
    int i,f=0;
    printf("Enter the 2 String = ");
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0' || b[i]!='\0';i++)
        if(a[i]>=65 && a[i]<=90)
            a[i]=a[i]+32;
        if(b[i]>=65 && b[i]<=90)
            b[i]=b[i]+32;
    for(i=0;a[i]!='\0' || b[i]!='\0';i++)
        if(a[i]!=b[i])
        {
            f=1;
            break;
        }
    if(f==1)
        printf("2 string are NOT Matched");
    else
        printf("2 string are Matched");
}