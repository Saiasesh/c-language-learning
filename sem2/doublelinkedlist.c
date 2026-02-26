#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
//#include<process.h>
struct node
{
	int data;
	struct node *right;
	struct node *left;
}
*head=NULL,*temp1,*temp2,*temp3;
int main()
{
	int ch;
	void insert_beg();
	void insert_end();
	int insert_pos();
	void display();
	void delete_beg();
	void delete_end();
	int delete_pos();
	while(1)
	{
		printf("\n\n----DOUBLE LINKED LIST MENU----\n");
		printf("1.Insert\n2.Display\n3.Delete\n4.Exit");
		printf("\nEnter your choice from(1-4):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n---INSERT MENU----\n");
				printf("1.Insert at beginning\n2.Insert at end\n3.Insert at a specific position\n4.Exit");
				printf("\nEnter your choice from(1-4):");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						insert_beg();
						break;
					case 2:
						insert_end();
						break;
					case 3:
						insert_pos();
						break;
				    case 4:
				    	exit(0);
				    default:printf("Wrong choice");
				}
					break;
			case 2:
				display();
				break;
			case 3:
				printf("\n---DELETE MENU----\n");
				printf("1.Delete at beginning\n2.Delete at end\n3.Delete at a specific position\n4.Exit");
				printf("\nEnter your choice from(1-4):");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						delete_beg();
						break;
					case 2:
						delete_end();
						break;
					case 3:
						delete_pos();
						break;
				    case 4:
				    	exit(0);
				    default:printf("Wrong choice");
				}
					break;
			case 4:
				exit(0);
			default:printf("Wrong choice");
		}
	}
}
void insert_beg()
{
	int num;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&num);
	temp1->data=num;
	if(head==NULL)
	{
		temp1->left=NULL;
		temp1->right=NULL;
		head=temp1;
	}
	else
	{
		temp2=head;
		temp1->left=NULL;
		temp1->right=temp2;
		head=temp1;
		temp2->left=temp1;
	}
}
void insert_end()
{
	int num;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&num);
	temp1->data=num;
	temp1->right=NULL;
	if(head==NULL)
	{
		head=temp1;
	}
	else
	{
		temp2=head;
		while(temp2->right!=NULL)
		{
			temp2=temp2->right;
		}
		 temp2->right=temp1;
		 temp1->left=temp2; 
	}
}
int insert_pos()
{
	int i,num,pos;
	if(head==NULL){
	
	printf("List is empty");
	return 0;
	}
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&num);
	printf("Enter position to insert:");
	scanf("%d",&pos);
	temp1->data=num;
	temp2=head;
	for(i=1;i<pos-1;i++)
	{
		if(temp2->right==NULL)
		{
			printf("There are less elements");
			return 0;
		}
		temp3=temp2;
		temp2=temp2->right;
	}
		temp3->right=temp1;
		temp1->right=temp2;
		temp1->left=temp3;
		temp2->left=temp1;
		return 0;	
}
void display()
{
	if(head==NULL)
	{
		printf("The list is empty");
	}
	else
	{
	    temp1=head;
	    printf("The linked list is:");
	    while(temp1!=NULL)
	    {
		    printf("%d->",temp1->data);
		    temp1=temp1->right;
	    }
    }
}
void delete_beg()
{
	if(head==NULL)
	{
		printf("The list is empty");
	}
	else
	{
		temp1=head;
		head=head->right;
		printf("Deleted element is %d",temp1->data);
		free(temp1);
		head->left=NULL;
	}
}
void delete_end()
{
	if(head==NULL)
	{
		printf("List is empty");
	}
	else
	{
		temp2=head;
		while(temp2->right->right!=NULL)
		{
			temp2=temp2->right;
		}
			temp1=temp2->right;
			temp2->right=NULL;
			printf("The deleted element is %d",temp1->data);
			free(temp1);
	}
}
int delete_pos()
{
	int i,pos;
	if(head==NULL)
	{
		printf("The list is empty");	
	    return 0;
	}
	printf("Enter position to delete:");
	scanf("%d",&pos);
	temp2=head;
	for(i=1;i<pos-1;i++)
	{
		if(temp1->right==NULL)
		{
			printf("There are less elements");
		    return 0;
		}
		temp3=temp2;
		temp2=temp2->right;
	}
	temp1=temp2->right;
	temp3->right=temp1;
	temp1->left=temp3;
	printf("The deleted element is %d",temp2->data);
	free(temp2);
	return 0;
}
