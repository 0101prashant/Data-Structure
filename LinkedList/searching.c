#include<stdio.h>
#include<stdlib.h>

struct node
{   
    int data;
    struct node *next;
};

int searchKey(struct node **head, int key){

    struct node *temp = *head;

    while(temp != NULL){

        if(temp->data == key){
            return 1;
        } 
        temp = temp->next;
    }

    return -1;
}



void addAtEnd(struct node **head, int val)
{   
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL;
    
    if(*head == NULL)
         *head = newNode;
    else
    {   
        struct node *lastNode = *head;

        while(lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }

        lastNode->next = newNode;
    }

}

void printLinkedList(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
         printf("%d ", temp->data);
         temp = temp->next;
    }
}

int main()
{
    struct node *head = NULL;

    addAtEnd(&head,30);
    addAtEnd(&head,50);
    addAtEnd(&head,70);

    int key;
    scanf("%d",&key);

    int result = searchKey(&head, key);

    printLinkedList(head);
    printf("\n\rSearch result:%d",result);
    return 0;
}
