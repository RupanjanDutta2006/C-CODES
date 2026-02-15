//WAP to calculate age
#include<stdio.h>
void main()
{
    int yr;
    printf("Enter the Age = ");
    scanf("%d",&yr);
    if (yr<0)
        printf("Please Enter a Valid Age");
    else
    {
        if (yr>0 && yr<=6)
            printf("%d--> Infant",yr);
        else if(yr>6 && yr<=12)
            printf("%d-->Child",yr);
        else if(yr>12 && yr<=18)
            printf("%d--> Teenager",yr);
        else if (yr>18 && yr<=35)
            printf("%d--> Young Age",yr);
        else if(yr>35 && yr<=60)
            printf("%d--> Middle Aged",yr);
        else if(yr>60 && yr<=100)
            printf("%d-->Old Aged",yr);
        else
            printf("%d-->Nice Try Diddy",yr);
    }
}