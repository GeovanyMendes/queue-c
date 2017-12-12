
#ifndef QUEUE_H
#define QUEUE_H

typedef struct vertex vertex;
typedef struct queue queue;

//creates a empty queue
queue *createQueue();

//puts a vertex wich contains a integer element at the queue
void enqueue(queue *q,int data);

//removes the first vertex of the queue
int dequeue(queue *q);

//shows wich element is at the begining of the queue
void queueBegining(queue *q);

//returns 1 if queue is empty or 0 otherwise
int emptyQueue(queue *q);

//returns the number of elements in the queue
int queueSize(queue *q);

#endif /* QUEUE_H */

