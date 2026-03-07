//automatic storage class
#include<stdio.h>
void main()
{
  auto int a;//global variable by default 1
  {
    printf("Local = %d\n",a);//1
    a++;//2
    printf("Local = %d\n",a);//2
  }//outside the scope it retains 1 again
  printf("Global = %d\n",a);//1
  {
    auto int a;//local variable//1
    a++;//2
    printf("local = %d\n",a);//2
  }
  printf("Global = %d\n",a);//1
}