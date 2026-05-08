#include <stdio.h>
#include <stdlib.h>
# define size 5
int top=-1,inp_array[size];
void push();
void pop();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("\n--Operations performed by STACKS--\n");
        printf("1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("Enter your choice from(1-4):");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default: printf("Wrong choice");
        }
    }
}
void push()
{
    int x;
    if(top==size-1)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter the element to inserted in the stack:");
        scanf("%d",&x);
        top=top+1;
        inp_array[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nPopped element:%d",inp_array[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nThe elements in the stack:\n");
        for(i=top;i>=0;i--)
        printf("%d\n",inp_array[i]);
    }
}
