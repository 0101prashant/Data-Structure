#include<stdio.h>
  
#define size 3
int arr[size];

int front  = 0;
int rear   = 0;

int isQueueFull()
{
    if(rear == size)
        return 1;
    return 0;
}

void enqueue(int val)
{
    if(isQueueFull())
        return;
    
    else{
        arr[rear] = val;
        rear++;
    }
}

int isQueueEmpty()
{
    if(front == rear)
        return 1;
    
    return 0;
    
}

int dequeue()
{
    if(isQueueEmpty())
        return -1;
    else
        front++;
        return arr[front-1];   
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());

    return 0;
}
