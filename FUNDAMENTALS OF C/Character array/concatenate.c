//WAP to concatenate 2 string
#include<stdio.h>
void main()
{
    char x[20],y[20],z[20];
    int i;
    printf("Enter the 2 String= ");
    gets(x);
    gets(y);
    for(i=0;x[i]!='\0';i++)
        z[i]=x[i];
    z[i++]=' ';
    for(int j=0;y[i]!='\0';j++,i++)
        z[i]=y[j];
    printf("The Concatenate String is = %s",z);
}