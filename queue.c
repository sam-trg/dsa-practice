/* queue
| |<-(MAX_SIZE-1)th index
|5|<- rear, on addition rear+=1 items[rear]=item
|9|
|6|<- front, on deletion, front+=1
|_|
initially, front=rear=-1. on first insertion, front =0. on rest, rear+=1, on rest deletions, front+=1

front ______________________ rear
  <-  _10__2__7__89__789__4_  <-
conditions: intitialize front and rear to -1
on each addition, check if rear!=max_size-1 rear+=1, add to queue[rear],
on each deletion, check if front!=-1 (underflow), else front -=1

*/
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

void display() {
    int i;
    for(i=*(queue->front);i<=*(queue->rear);i++) {
        printf("%d ", queue->items[i]);
    }
}

void enqueue(int item) {
    while(*(queue->front)==*(queue->rear)) {
        if(*(queue->front)==-1) {
            *(queue->front)=0;
            *(queue->rear)+=1;
            queue->items[*(queue->rear)]=item;
            break;
        }
        printf("Queue overflow\n");
        return;
    *(queue->rear)+=1;
    queue->items[*(queue->rear)]=item;
    }
}

int main() {
    queue = (QUEUE)malloc(sizeof(QUEUE));
    queue->front = (int*)malloc(sizeof(int));
    queue->rear = (int*)malloc(sizeof(int));
    enqueue(4);
    enqueue(5);
    enqueue(6);
    display();
}
