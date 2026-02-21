#include<stdio.h>
void main()
{
    char x[100];
    int i,len=0;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
        len++;
    printf("The New String is = \n");
    for(i=0;x[i]!='\0';i++)
        if(i!=len-1 && i!=0)
            printf("%c",x[i]);
}
