#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *a, *b, *c;
    
    a = malloc(sizeof(struct node));
    b = malloc(sizeof(struct node));
    c = malloc(sizeof(struct node));

    a->data = 30;
    b->data = 50;
    c->data = 70;

    a->next = b;
    b->next = c;
    c->next = a;

    struct node *temp = a;
    
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }while(temp != a);

    return 0;
}
