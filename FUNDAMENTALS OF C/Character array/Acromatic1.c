/*WAP to print acromatic string
Input--> Rupanjan Dutta
Output-->R. Dutta
*/
#include<stdio.h>
void main()
{
    char x[100];
    int i,len=0;
    printf("Enter the String = ");
    gets(x);
    printf("The Acromatic String is = %c.",(x[0]>=65 && x[0]<=90)?x[0]:x[0]-32);
    for(i=1;x[i]!='\0';i++)
        if(x[i]==' ')
        {
            printf(" %c",(x[i+1]>=65 && x[i+1]<=90)?x[i+1]:x[i+1]-32);
            break;
        }
    for(i=i+2;x[i]!='\0';i++)
        printf("%c",(x[i]>='a' && x[i]<='z')?x[i]:x[i]+32);
}
