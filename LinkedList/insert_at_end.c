#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertAtEnd(int value){

    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
    }
    else{
        struct node *lastNode = head;

        while ( lastNode->next != NULL)
        {
            lastNode = lastNode->next;
        }   
        lastNode->next = newNode;
    }
}

void printNodes(){
    struct node * printNode = head;
    while (printNode != NULL)
    {
       printf("%d ", printNode->data);
       printNode = printNode->next;
    }
}

void main(){
    insertAtEnd(90);
    insertAtEnd(70);
    insertAtEnd(30);
    insertAtEnd(10);
    printNodes();
}
