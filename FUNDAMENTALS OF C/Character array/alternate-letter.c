#include<stdio.h>
void main()
{
    char x[100];
    int i;
    printf("Enter the String = ");
    gets(x);
    printf("The Alternate letters are = \n");
    for(i=0;x[i]!='\0';i++)
        if(i%2==1)
            printf("%c",x[i]);
}
