#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 3
//malking program menu drivcen using do whiole
typedef struct {
    int tos;// making this a pointer and keeping track
    int items[MAX_SIZE];
} Stack;

void display(Stack* s) {
    int i;
    for(i=0;i<MAX_SIZE;i++) { //max_size hardcoidng
        printf("%d ",s->items[i]);
    }
}
// adding push and pop functionaliuty
void push(Stack* s, int item) {
    s.items->item;
}

int main()
{
    Stack *stack = (Stack*)malloc(sizeof(Stack));
    int mitems[3] = {1,2,3}; 
    stack->items[0]=mitems[0];
    stack->items[1]=mitems[1];
    stack->items[2]=mitems[2];
    display(stack);
    printf("Hello World");
    
    free(stack);
    return 0;
}
