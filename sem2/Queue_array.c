#include <stdio.h>
#include <stdlib.h>
#define size 10
int rare=-1;
int front=-1;
void enqueue();
void dequeue();
void display();
int queue[size];
int main()
{
    int ch;
    while(1)
    {
        printf("\n----QUEUE DS IMPLIMENTATION----\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Dispaly\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("Wrong choice");
        }
    }
}
void enqueue()
{
    int x;
    if(rare==size-1)
    {
        printf("Queue is overflow");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("Enter element to the queue:");
        scanf("%d",&x);
        rare=rare+1;
        queue[rare]=x;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("Queue is underflow");
    }
    else
    {
        printf("The deleted element is %d",queue[front]);
        front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is underflow");
    }
    else
    {
        printf("The elements in the queue are:");
        for(i=front;i<=rare;i++)
        {
            printf(" %d\t",queue[i]);
        }
    }
}
