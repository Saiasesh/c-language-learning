#include<stdio.h>
#define MAX 5   
int deque[MAX];
int front = -1;
int rear = -1;
int isfull()
{
    return((front == 0 && rear == MAX-1) || (front == rear+1));
}
int isempty()
{
    return(front == -1);
}
void insertfront(int key)
{
    if(isfull()){
        printf("Queue is overflow\n");
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else if(front==0){
        front=MAX-1;
    }
    else{
        front=front-1;
    }
    deque[front]=key;
    printf("%d is inserted at front\n",key);
}
void insertrear(int key)
{
    if(isfull()){
        printf("Queue is overflow\n");
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else if(rear==MAX-1){
        rear=0;
    }
    else {
        rear=rear+1;
    }
    deque[rear]=key;
    printf("%d is inserted at rear\n",key);
}
void deletefront()
{
    if(isempty()){
        printf("Queue is Underflow\n");
        return;
    }
    printf("%d is deleted from front\n",deque[front]);
    if(front==rear){
        front=rear=-1;
    }
    else if(front==MAX-1){
        front=0;
    }
    else{
        front=front+1;
    }
}
void deleterear()
{
    if(isempty()){
        printf("Queue is Underflow\n");
        return;
    }
    printf("%d is deleted from rear\n",deque[rear]);
    if(front==rear){
        front=rear=-1;
    }
    else if(rear==0){
        rear=MAX-1;
    }
    else{
        rear=rear-1;
    }
}
void display()
{
    int i;
    if(isempty()){
        printf("Queue is Underflow\n");
        return;
    }
    printf("Deque elements are:");
    i=front;
    while(1){
        printf("%d\t",deque[i]);
        if(i==rear)
        break;
        i=(i+1)%MAX;
    }
    printf("\n");
}
int main()
{
    insertrear(10);
    insertrear(20);
    insertrear(30);
    insertfront(40);
    insertfront(50);
    display();
    deletefront();
    deleterear();
    display();
    return 0;
}
