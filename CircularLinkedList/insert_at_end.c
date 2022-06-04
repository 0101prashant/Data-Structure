#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtend(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    
    if(head == NULL){
        newNode->next = newNode;
        head = newNode;
    }
    else{
        struct node *endnode = head;
        
        while(endnode->next != head){
            endnode = endnode->next;
        }
        
        endnode->next = newNode;
        newNode->next = head;
        
    }
    
}

void printList()
{
    if(head == NULL)
        return;

    struct node *temp = head;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;

    }while(temp != head);

}

int main()
{
    insertAtend(10);
    insertAtend(20);
    insertAtend(30);
    insertAtend(40);

    printList();

    return 0;
}
