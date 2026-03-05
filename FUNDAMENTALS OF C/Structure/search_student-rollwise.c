//WAP to create a student structure of n no. of student & search a student record roll no. wise
#include<stdio.h>
struct student
{
   int roll_no,C,DE,BE,t,avg;
   char nm[20],grd;
};
void main()
{
  int i,n,r,f=0;
  printf("Enter the No. of Student = ");
  scanf("%d",&n);
  struct student s[n];
  //input
  for(i=0;i<n;i++)
  {
    printf("Enter the Roll No. = ");
    scanf("%d",&s[i].roll_no);
    printf("Enter the Name = ");
    scanf("%s",&s[i].nm);
    printf("Enter the C marks = ");
    scanf("%d",&s[i].C);
    printf("Enter the DE marks = ");
    scanf("%d",&s[i].DE);
    printf("Enter the BE marks = ");
    scanf("%d",&s[i].BE);
    s[i].t=s[i].C+s[i].DE+s[i].BE;
    s[i].avg=s[i].t/3;
    if(s[i].avg>=0 && s[i].avg<=40)
       s[i].grd='D';
    else if(s[i].avg>40 && s[i].avg<=60)
       s[i].grd='C';
    else if(s[i].avg>60 && s[i].avg<=80)
       s[i].grd='B';
    else if(s[i].avg>80 && s[i].avg<=90)
       s[i].grd='A';
    else
       s[i].grd='O';
  }
  //output
  printf("--------------------------------------------------------------------------------\n");
  printf("Roll\tName\tC\tDE\tBE\tTotal\tAvg\tGrade\n");
  printf("--------------------------------------------------------------------------------\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%c\n",s[i].roll_no,s[i].nm,s[i].C,s[i].DE,s[i].BE,s[i].t,s[i].avg,s[i].grd);
  }
  printf("Enter the Roll No. you want to search for = ");
  scanf("%d",&r);
  for(i=0;i<n;i++)
  {
    if(s[i].roll_no==r)
      {
       printf("--------------------------------------------------------------------------------\n");
       printf("Roll\tName\tC\tDE\tBE\tTotal\tAvg\tGrade\n");
       printf("--------------------------------------------------------------------------------\n");
       printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%c\n",s[i].roll_no,s[i].nm,s[i].C,s[i].DE,s[i].BE,s[i].t,s[i].avg,s[i].grd);
       f=1;
       break;
      }
  }
  if(f==0)
    printf("Record Not Found");
}