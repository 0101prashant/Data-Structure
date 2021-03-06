#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;

    if(head == NULL)
    {   
        newNode->next = newNode;
        head = newNode;
    }
    else{
        
        struct node *temp = head;
        
        while(temp->next != head){
            temp = temp->next;
        }
        
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
        
    }
   
}

void printList()
{
    struct node *temp = head;

    do
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != head);
    
}

int main()
{
    addFirst(100);
    addFirst(200);
    addFirst(300);
    
    printList();
}
