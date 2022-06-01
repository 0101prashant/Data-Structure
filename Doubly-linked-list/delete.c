#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* prev;
    struct node* next;
};

void deleteNode(struct node **head, int key)
{
    if(head == NULL)
        return;
    
    struct node *temp = *head;
    
    while(temp->next != NULL && temp->data != key){
        
        temp = temp->next;
    }
    
    if(temp == NULL){
        //key not found
        return;
    }
    else if(temp == *head){
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
    }
    else if(temp->next == NULL){
        temp->prev->next = NULL;
        free(temp);
    }
    else{
        
        (temp->prev)->next = temp->next;
        (temp->next)->prev = temp->prev;
        
        free(temp);
    }
    
    
}

//Don't change the below code
void addFirst(struct node **head, int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;

    if(*head == NULL)
    {
        newNode->next = NULL;
        newNode->prev = NULL;
        *head = newNode;
    }
    else
    {
        newNode->prev = NULL;
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}

void printList(struct node* head)
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
    struct node *head = NULL;

    addFirst(&head,10);
    addFirst(&head,20);
    addFirst(&head,30);
    addFirst(&head,40);

    int key;
    scanf("%d",&key);

    deleteNode(&head, key);
    printList(head);

    return 0;
}
