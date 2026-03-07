#include<stdio.h>
#include<conio.h>
void disp();//DECLARATION
void main()
{
  disp();//CALLING
 //static disp();6
 getch();
}
void disp()//DEFINITION
{
  static int i;//global
  {
     static int i=1;//local
     printf("Local %d\n",i);
     i++;
     printf("Local %d\n",i);
  }
   printf("Global %d\n",i);
   i++;
   printf("Global %d\n",i);
}