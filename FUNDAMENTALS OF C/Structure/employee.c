//WAP to create a Employee salary Sheet which consist of following Information
//Name,id, basic salary,DA,TA,HRA,MA,gross salary,PF,Net salary,Designation
/*
DA=bs*5/100
TA=bs*10/100
HRA=bs*15/100
MA=bs*10/100
GS=bs+da+ta+hra+ma
PF=bs*20/100
net=gs-pf
*/
#include<stdio.h>
#include<string.h>
struct employee
{
    int id,bs,da,ta,hra,ma,gs,pf,ns,net;
    char ds[7],nm[20];
};
void main()
{
    int i,n,temp;
    printf("Enter the No of Employee = ");
    scanf("%d",&n);
    struct employee em[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d no Employee Id no = ",i+1);
        scanf("%d",&em[i].id);
        printf("Enter the %d no Employee Name = ",i+1);
        scanf("%s",&em[i].nm);
        printf("Enter the %d no Employee Basic Salary = ",i+1);
        scanf("%d",&em[i].bs);
        em[i].da=(em[i].bs*5)/100;
        em[i].ta=(em[i].bs*10)/100;
        em[i].hra=(em[i].bs*15)/100;
        em[i].ma=(em[i].bs*10)/100;
        em[i].gs=em[i].da+em[i].ta+em[i].hra+em[i].ma;
        em[i].pf=(em[i].bs*20)/100;
        em[i].net=em[i].gs-em[i].pf;
        if(em[i].bs>=0 && em[i].bs<=10000)
            strcpy(em[i].ds,"PEON");
        else if(em[i].bs>10000 && em[i].bs<=15000)
            strcpy(em[i].ds,"CHMAN");
        else if(em[i].bs>15000 && em[i].bs<=35000)
            strcpy(em[i].ds,"EMP");
        else if(em[i].bs>35000 && em[i].bs<=60000)
            strcpy(em[i].ds,"MAN.");
        else 
            strcpy(em[i].ds,"CEO");
    }
    //OUTPUT
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("ID\tNAME\tB.SAL\tDA\tTA\tHRA\tMA\tG.SAL\tPF\tNET\tDESIGNATION\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%s\n",em[i].id,em[i].nm,em[i].bs,em[i].da,em[i].ta,em[i].hra,em[i].ma,em[i].gs,em[i].pf,em[i].net,em[i].ds);
    }
    printf("--------------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<n-1;i++)
    {
        if(em[i].gs<em[i+1].gs)
        {
                temp=em[i].gs;
                em[i].gs=em[i+1].gs;
                em[i+1].gs=temp;
        }
    }
    printf("\nSorted List\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    printf("ID\tNAME\tB.SAL\tDA\tTA\tHRA\tMA\tG.SAL\tPF\tNET\tDESIGNATION\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%s\n",em[i].id,em[i].nm,em[i].bs,em[i].da,em[i].ta,em[i].hra,em[i].ma,em[i].gs,em[i].pf,em[i].net,em[i].ds);
    }
}