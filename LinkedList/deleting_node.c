#include<stdio.h>
#include<stdlib.h>

struct node
{   
    int data;
    struct node *next;
};

void deleteANode(struct node **head, int key)
{     
    struct node *temp;
    
    if((*head)->data == key){
        
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    else{
        struct node  *current = *head;
        
        while(current->next != NULL){
            
            if(current->next->data == key){
                temp = current->next;
                current->next = current->next->next;
                free(temp);
                break;
            }
            else{
                current = current->next;
            }
        }
    }

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

    addAtEnd(&head,10);
    addAtEnd(&head,20);
    addAtEnd(&head,30);

    int key;
    scanf("%d",&key);

    deleteANode(&head, key);

    printLinkedList(head);

    return 0;
}
