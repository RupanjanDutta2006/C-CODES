//WAP to print the Phone Bill
#include<stdio.h>
void main()
{ 
    int a,r;
    printf("Enter the Unit = ");
    scanf("%d",&a);
    if (a<=0)
        printf("Please Enter a Valid Unit");
    else
    {
        if (a>0 && a<=100)
            r=a*1.5;
        else if (a>100 && a<=200)
            r=(a-100)*3.5+150;
        else if (a>200 && a<=400)
            r=(a-200)*5.5+500;
        else if (a>400 && a<=600)
            r=(a-400)*7.5+1600;
        else if(a>600 && a<=800)
            r=(a-600)*10.5+3100;
        else
            r=(a-800)*12.5+5200;
    }
    printf("Unit = %d\nBill Price = %dRs/-unit",a,r);
}