#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 6

struct queue
{
  int front, rear;
  int items[MAX_SIZE];
};

typedef struct queue QUEUE;
QUEUE* q;

void enqueue(int element)
{
  if (q->rear==MAX_SIZE - 1) {
      printf("queue full\n");
      return;
    }
  q->rear+=1;
  q->items[q->rear] = element;
}

void display()
{
  int i;
  printf ("contents are\n");
  for (i = q->front; i <= q->rear; i++) {
    printf ("%d ", q->items[i]);
  }
}

void dequeue()
{
  if (q->front > q->rear)
    {
      printf("queue empty\n");
      return;
    }
  printf("element deleted is %d\n", q->items[q->front]);
  q->front += 1;
  if (q->front > q->rear)/* reset front and rear if queue gets empty after deletion*/
    {
      q->front = 0;
      q->rear = -1;
    }
}

int main(void)
{
  q = (QUEUE*)malloc(sizeof(QUEUE));
  q->front = 0;
  q->rear = -1;
  int choice;
  int item;
  for (;;) {
    printf("1. insert 2. delete 3. display 4.exit\n");
    scanf("%d", &choice);
    
    switch(choice) {
	
	case 1:
	  
	  printf("enter the element to be inserted\n");
	  scanf("%d", &item);
	  enqueue(item);
	  break;
	  
	case 2:
	  
	  dequeue();
	  break;
	
	case 3:
	  
	  display();
	  break;
	  
	case 4:
	  exit(0);
	}           /*end switch*/
  }				/*end for */
}				/*end main */
