#include<stdio.h>
#include<stdlib.h>
#define size 6
int queue[size];
int front=-1;
int rear=-1;
void enqueue(int element)
{
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=element;
	}
	else if((rear+1)%size==front)
	    {
	    	printf("Queue is overflow");
		}
		else
		{
			rear=(rear+1)%size;
			queue[rear]=element;
		}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is underflow");
	}
	else if(front==rear)
	{
		printf("The deleted element is:%d",queue[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("The deleted element is:%d",queue[front]);
		front=(front+1)%size;
	}
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
	    printf("Queue is empty");
    }
    else
    {
    	printf("The elements int the Queue are:");
    	while(i<=rear)
    	{
    		printf("%d",queue[i]);
    		i=(i+1)%size;
    	}
	}
}
int main()
{
    int ch,element;
	    while(1)
    	{
	        printf("\n----MENU----\n");
	        printf("1.Insert\n2.Delete\n3.display\n4.Exit\n");
        	printf("Enter your choice from 1-4:");
        	scanf("%d",&ch);
	        switch(ch)
        	{
	        	case 1:printf("Enter the value to insert:");
		               scanf("%d",&element);
		               enqueue(element);
		               break;
    		    case 2:dequeue();
        		       break;
	            case 3:display();
		               break;
        	    case 4:exit(0);
	        	default:printf("Wrong choice");  
	        }
	    }  
	return 0;
}
