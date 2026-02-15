//WAP to implement Queue using Array
#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int queue_array[MAX],front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
    int choice;
    printf("Queue operations using array\n");
    printf("----------MENU----------\n");
    while(1)
    {
        printf("----------------------------------\n");
        printf("1.Enqueue  2.Dequeue  3.Display  4.Exit\n");
        printf("----------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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
void enqueue()
{
    int add;
    if(rear==MAX-1)
    {
        printf("Queue is Full!!!Insertion not possible\n");
        return;
    }
    else
    {
        if(front==-1)
            front=0;
        printf("Enter the value to be enqueued: ");
        scanf("%d",&add);
        rear++;
        queue_array[rear]=add;
        printf("Value %d enqueued successfully\n",add);
        display();
    }
}
void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Queue Underflow!!!Deletion not possible\n");
        return;
    }
    else
    {
        printf("Value %d dequeued successfully\n",queue_array[front]);
        front++;
        display();
    }
}
void display()
{
    int i;
    if(front==-1 || front>rear)
    {
        printf("Queue is empty!!!\n");
        return;
    }
    else
    {
        printf("Queue elements are: ");
        for(i=front;i<=rear;i++)
            printf("%d ",queue_array[i]);
        printf("\n");
    }
}