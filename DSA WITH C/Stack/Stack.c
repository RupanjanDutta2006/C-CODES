//WAP to implement Stack using Array
#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
void push();
void pop();
void display();
int stack[SIZE],top=-1;
int value,choice;
void main()
{
    printf("Stack operations using array\n");
    printf("----------MENU----------\n");
    while(1)
    {
        printf("----------------------------------\n");
        printf("1.Push  2.Pop  3.Display  4.Exit\n");
        printf("----------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}  
void push()
{
    if(top==SIZE-1)
    {
        printf("Stack Overflow!!!Insertion not possible\n");
        return;
    }
    else
    {
        printf("Enter the value to be pushed: ");
        scanf("%d",&value);
        top++;
        stack[top]=value;
        printf("Value %d pushed successfully\n",value);
        display();
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow!!!Deletion not possible\n");
        return;
    }
    else
    {
        value=stack[top];
        top--;
        printf("Value %d popped successfully\n",value);
        display();
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("Stack is Empty!!!\n");
        return;
    }
    else
    {
        printf("Stack elements are: \n");
        for(i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}