#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 6

struct queue
{
  int front, rear;
  int items[MAX_SIZE];
};

typedef struct queue QUEUE;

void enqueue(int element, QUEUE* qptr)
{
  if (qptr->rear==MAX_SIZE - 1) {
      printf("queue full\n");
      return;
    }
  qptr->rear+=1;
  qptr->items[qptr->rear] = element;
}

void display(QUEUE* qptr)
{
  int i;
  printf ("contents are\n");
  for (i = qptr->front; i <= qptr->rear; i++) {
    printf ("%d ", qptr->items[i]);
  }
}

void dequeue(QUEUE* qptr)
{
  if (qptr->front > qptr->rear)
    {
      printf("queue empty\n");
      return;
    }
  printf("element deleted is %d\n", qptr->items[qptr->front]);
  qptr->front += 1;
  if (qptr->front > qptr->rear)
    {
      qptr->front = 0;
      qptr->rear = -1;
    }
}

int main(void)
{
  QUEUE q;
  q.front = 0;
  q.rear = -1;
  int choice;
  int item;
  for (;;) {
    printf("1. insert 2. delete 3. display 4.exit\n");
    scanf("%d", &choice);
    
    switch(choice) {
	
	case 1:
	  
	  printf("enter the element to be inserted\n");
	  scanf("%d", &item);
	  enqueue(item,&q);
	  break;
	  
	case 2:
	  
	  dequeue(&q);
	  break;
	
	case 3:
	  
	  display(&q);
	  break;
	  
	case 4:
	  exit(0);
	}           /*end switch*/
  }				/*end for */
}				/*end main */

/* reset front and rear if queue gets empty after deletion*/
