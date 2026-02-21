//WAP to calculate the length of the string
#include<stdio.h>
void main()
{
    char x[20];
    int i,c=0;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
        if(x[i]!=' ')
            c++;
        //printf("%c",x[i]);
    printf("The length of the STRING is = %d\nThe String is = %s",c,x);
}