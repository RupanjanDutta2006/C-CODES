//WAP to REVERSE the string
#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the String = ");
    gets(x);
    printf("The string is = \n");
    for(i=0;x[i]!='\0';i++)
        printf("%c",x[i]);
    printf("\nReverse of the STRING is  = \n");
    for(i=i-1;i>=0;i--)
        printf("%c",x[i]);
}