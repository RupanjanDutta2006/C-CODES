/*WAP to print in this pattern
Input--> Zebra
Output-->Afcsb
*/
#include<stdio.h>
void main()
{
    char x[100];
    int i,len=0,k=0,sp=0;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if((x[i]>='a' && x[i]<='y') ||x[i]>='A' && x[i]<='Y')
            printf("%c",x[i]+1);
        if(x[i]=='z')
            printf("a");
        if(x[i]=='Z')
            printf("A");
    }
}