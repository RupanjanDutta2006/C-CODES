//WAP to to take input within a array & print
#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the String = ");
    gets(x);
    printf("The String is  = %s",x);
    puts(x);
    for(i=0;x[i]!='\0';i++)
        printf("%c",x[i]);
}