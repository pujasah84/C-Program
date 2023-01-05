#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_QUEUE_SIZE 3 

struct Queue {
  int data[MAX_QUEUE_SIZE];
  int head;
  int tail;
  int size;
};
void initialize(struct Queue *q) {
  q->head = 0;
  q->tail = 0;
  q->size = 0;
}

void enqueue(struct Queue *q, int value) {
  if (q->size == MAX_QUEUE_SIZE) {
    printf("Error: queue is full\n");
  } else {
    q->data[q->tail] = value;
    q->size++;
    if (q->tail == MAX_QUEUE_SIZE-1 ) {
      q->tail = MAX_QUEUE_SIZE;
    } else {
      q->tail++;
    }
  }
}

int dequeue(struct Queue *q) {
  if (q->size == 0) {
    printf("Error: queue is empty\n");
    return -1;
  } else {
    int value = q->data[q->head];
    q->size--;
    if (q->head == MAX_QUEUE_SIZE - 1) {
      q->head = 0;
    } else {
      q->head++;
    }
    return value;
  }
}

void display(struct Queue *q) {
  printf("Queue: ");
  for (int i = q->head; i < q->tail; i++) {
    printf("%d ", q->data[i]);
  }
  printf("\n");
}

int main() {
  struct Queue q;
  int choice,data;
  initialize(&q);
  while (1){
	  	printf("Enter 1 for enqueue 2 for dequeue and 3 for display: ");
	  	scanf("%d",&choice);
	  	switch (choice) {
		  case 1:
		  	printf("Enter value :");
		  	scanf("%d",&data);
		  	enqueue(&q,data);
			system("cls");		  
		  	break;
		  case 2:
		  	system("cls");
			dequeue(&q);
			
			break ;
		  case 3:
		  	system("cls");
		  	display(&q);
		  	break;
		  default:
		  	return 0;
		
		}
 	
  }
  
}

