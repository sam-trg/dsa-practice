/* queue */
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 3

struct Queue {
    int items[MAX_SIZE];
    int* front;
    int* rear;
};
typedef struct Queue* QUEUE;
QUEUE queue;



int main() {
    queue = (QUEUE)malloc(sizeof(QUEUE));
    //front and rear
    queue->items[0] = 1;
    queue->items[1] = 2;
    queue->items[2] = 3;
    printf("%d %d %d", queue->items[0],queue->items[1],queue->items[2]);
}

