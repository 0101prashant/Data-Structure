#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void addAtBegning(int val)
{
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}


void printListData()
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
     addAtBegning(30);
     addAtBegning(35);
     addAtBegning(40);
     printListData();

     return 0;
}
