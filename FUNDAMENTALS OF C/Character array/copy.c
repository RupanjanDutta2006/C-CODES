//WAP to copy string from to another
#include<stdio.h>
void main()
{
    char a[20],x[20];
    int i;
    printf("Enter the String - ");
    gets(a);
    printf("The string is  = %s\n",a);
    printf("Copied string will be = ");
    for(i=0;a[i]!='\0';i++)
    {
        x[i]=a[i];
        printf("%c",x[i]);
    }
    
}