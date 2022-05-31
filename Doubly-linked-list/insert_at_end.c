#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void insertAtEnd(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    
    newNode->data = val;
    
    if(head == NULL){
        newNode->prev = NULL;
        newNode->next = NULL;
        head = newNode;
    }
    else{
        
        struct node *lastNode = malloc(sizeof(struct node));
        
        lastNode = head;
        
        while(lastNode->next != NULL){
            lastNode = lastNode->next;
        }
        
        newNode->next = NULL;
        lastNode->next = newNode;
        newNode->prev = lastNode;
        
        
    }
    
}

void printList()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    insertAtEnd(20);
    insertAtEnd(40);
    insertAtEnd(30);
    insertAtEnd(100);

    printList();

    return 0;
}
