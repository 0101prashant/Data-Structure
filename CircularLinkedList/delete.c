#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void deleteNode(int key)
{
    if(head == NULL)
        return;
    
    if(head->data == key && head->next == head){
        free(head);
        head = NULL;
    } 
    else if(head->data == key){
        
        struct node *last = head, *temp;
        
        while(last->next != head){
            last = last->next;
        }
        
        temp = head;
        last->next = temp->next;
        head = head->next;
        free(temp);
    }
    else{
        
        struct node *current = head, *temp;
        
        while(current->next != head){
            temp = current->next;
            if(current->next->data == key){
                current->next = temp->next;
                free(temp);
                break;
            }
            current = current->next;
        }
        if(current->next == head){
            // not found
        }
        
    }
    

}

void insertAtEnd(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;

    if(head == NULL)
    {
        head = newNode;
        newNode->next = newNode;
    }
    else
    {
        struct node *temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
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
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    
    int key;
    scanf("%d",&key);

    deleteNode(key);
    printList();

    return 0;
}
