#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;
void insert(int);
void deleteNode();
void display();
int main()
{
	int ch,value;
	while(1)
	{
	    printf("\n----MENU----\n");
	    printf("1.Insert\n2.Delete\n3.display\n4.Exit\n");
    	printf("Enter your choice from 1-4:");
    	scanf("%d",&ch);
	    switch(ch)
    	{
	    	case 1:printf("Enter the value to insert:");
		           scanf("%d",&value);
		           insert(value);
		           break;
		    case 2:deleteNode();
    		       break;
	        case 3:display();
		           break;
    	    case 4:exit(0);
	    	default:printf("Wrong choice");  
	    }
	}
}
void insert(int value)
{
	struct node *newNode;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=value;
	newNode->next=NULL;
	if(front==NULL)
	{
		front=rear=newNode;
	}
	else
	{
		rear->next=newNode;
		rear=newNode;
	}
}
void deleteNode()
{
	if(front==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		struct node *temp=front;
		front=front->next;
		printf("The deleted element is:%d",temp->data);
		free(temp);
	}
}
void display()
{
	if(front==NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		struct node *temp=front;
		printf("The elements in the Queue are:");
		while(temp->next!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("%d->NULL",temp->data);
	}
}
