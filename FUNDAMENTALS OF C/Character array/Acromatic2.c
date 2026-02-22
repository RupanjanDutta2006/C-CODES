/*WAP to print acromatic string
Input--> Rupanjan Kumar Dutta
Output-->R.K. Dutta
*/
#include<stdio.h>
void main()
{
    char x[100];
    int i,len=0,k=0,sp=0;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
        if(x[i]==' ')
            sp++;
    printf("The Acromatic String is = %c",(x[0]>=65 && x[0]<=90)?x[0]:x[0]-32);
    for(i=0;x[i]!='\0';i++)
          if(x[i]==' ')
            {
                printf(". %c",(x[i+1]>=65 && x[i+1]<=90)?x[i+1]:x[i+1]-32);
                k++;
                if(k==1)
                    continue;
                 else
                    break;
            }
    for(i=i+2;x[i]!='\0';i++)
        printf("%c",(x[i]>='a' && x[i]<='z')?x[i]:x[i]+32);
}
