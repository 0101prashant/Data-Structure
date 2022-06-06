#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int val)
{
    
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;

    if(front == NULL && rear == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode; 
        rear = newNode;
    }
}

int dequeue()
{
    if(front == NULL){
        return -1;
    }
        
    struct node *temp = front;
    front = front->next;
    if(front == NULL)
        rear = NULL;
    int val = temp->data;
    free(temp);
    return val;
    
    
}
int main()
{
    printf("%d ",dequeue());
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());
    printf("%d ",dequeue());

    return 0;
}
