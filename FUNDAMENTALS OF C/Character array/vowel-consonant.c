//WAP to concatenate 2 string
#include<stdio.h>
void main()
{
    char x[20],v[20],c[20];
    int i,j,k;
    printf("Enter the String= ");
    gets(x);
    printf("Enter the String = %s\n",x);
    for(i=0;x[i]!='\0';i++)
        if(x[i]>=65 && x[i]<=90)
            x[i]=x[i]+32;
    for(j=0,k=0,i=0;x[i]!='\0';i++)
        (x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u') ? (v[k++]=x[i]) : (c[j++]=x[i]);
    v[k]='\0';
    c[j]='\0';
    printf("Vowel = %s\nConsonant = %s",v,c);
}