//alternate letter caps(Vul)
/*
   input --> boys don't cry are not they?
   output-->BoYs DoN't CrY aRe NoT tHeY?
*/
#include<stdio.h>
void main()
{
    char x[20];
    int i,j,len=0;
    printf("Enter the String = ");
    gets(x);
    printf("String = %s\n",x);
    printf("String will be = \n");
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]==' ')
         {
            printf("%c",x[i]);
            len=i+1;
            continue;
         }
        if(len%2==1)
            //if(x[len]>=97 && x[len]<=122)
                printf("%c",x[len]-32); 
        else
                printf("%c",x[len]);
        len++;
    }
  
    printf("\n%s",x);    
}
/*
        if(x[i]==' ')
          {
             if(x[i-1]>=65 && x[i-1]<=90)
               continue;
          }
        else if(i%2==0)
        {
            if(x[i]>=97 && x[i]<=122)
               x[i]=x[i]-32;
        }*/