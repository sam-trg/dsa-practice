#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 3

typedef struct {
    int tos;
    int items[MAX_SIZE];
} Stack;
Stack *stack;
void display() {
    int i;
    for(i=0;i<=stack->tos;i++) {
        printf("%d ",stack->items[i]);
    }
    printf("\n");
}

void push(int item) {
    if(stack->tos==MAX_SIZE-1) printf("Stack overflow\n");
    else{stack->tos+=1;stack->items[stack->tos] = item;}
}

void pop() {
    if(stack->tos==-1) printf("Stack underflow\n");
    else{printf("Popped %d\n", stack->items[stack->tos]);stack->tos-=1;}
}

int main()
{
    stack = (Stack*)malloc(sizeof(Stack));
    stack->tos=-1;
    
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    
    free(stack);
    return 0;
}
