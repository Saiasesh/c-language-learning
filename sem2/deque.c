#include<sdtio.h>
#define MAX 5   
int deque[MAX]
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
int insertfront(int key)
{
    if(isfull()){
        printf("Queue is overfull");
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
    deqeu[front]=key;
    printf("%d is inserted at front\n",key);
}
