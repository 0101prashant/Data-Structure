#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node* prev;
        struct node* next;
    };
    struct node *head, *mid, *last;

    head = malloc(sizeof(struct node));
    mid  = malloc(sizeof(struct node));
    last = malloc(sizeof(struct node));

    head->data = 10;
    mid->data = 20;
    last->data = 30;

    head->prev = NULL;
    head->next = mid;
    mid->prev = head;
    mid->next = last;
    last->prev = mid;
    last->next = NULL;
    

    struct node *temp = last;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    
    return 0;
}
