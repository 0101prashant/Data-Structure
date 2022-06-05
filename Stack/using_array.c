#include<stdio.h>

#define size 5
int stack[size];
int top = -1;

int isStackFull()
{
    if(top == size - 1)
        return 1;
    return 0;
}

void push(int val)
{
    if(isStackFull())
        return;
    else{
        top++;
        stack[top] = val;
    } 
}

int isStackEmpty()
{
    if(top == -1){
        return 1;
    }
    
    return 0;
    
    
}

int pop()
{
    if(isStackEmpty())
        return -1;
    
    top--;
    return stack[top+1];
        
}

int main()
{
    push(40);
    push(50);
    push(60);
    push(70);
    printf("%d ",pop());
    push(80);
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());

    return 0;
}
