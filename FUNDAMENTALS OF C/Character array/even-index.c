/*WAP to print the even index
*/
#include<stdio.h>
void main()
{
    char x[100];
    int i,len=0,k=0,sp=0;
    printf("Enter the String = ");
    gets(x);
    printf("The output will be = ");
    for(i=0;x[i]!='\0';i++)
        if(i%2==0)
            printf("%c",x[i]);
}