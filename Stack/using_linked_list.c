#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push(int val)
{
    
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;

    newNode->next = head;
    head = newNode;
}

int pop()
{
    if(head == NULL){
        return -1;
    }
    struct node *temp = head;
    
    head = head->next;
    int data = temp->data;
    free(temp);
    return data;
    
}

int main()
{
    push(90);
    push(80);
    push(70);
    printf("%d ",pop());
    printf("%d ",pop());
    push(60);
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());

    return 0;
}
