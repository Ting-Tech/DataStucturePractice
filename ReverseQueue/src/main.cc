#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000

struct Queue
{
    int front, rear;
    int queue[MAX_SIZE];
};

struct Stack
{
    int top;
    int items[MAX_SIZE];
};

void initQueue(struct Queue *q)
{
    q->rear = -1;
    q->front = -1;
}

void enqueue(struct Queue *q, int item)
{
    if (q->front == -1)
    {
        q->front = 0;
    }

    q->rear++;
    q->queue[q->rear] = item;
}

int dequeue(struct Queue *q)
{
    int item = q->queue[q->front];
    q->front++;

    if (q->front > q->rear)
    {
        q->front = q->rear = -1;
    }

    return item;
}

void printQueue(struct Queue *q)
{
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->queue[i]);
    }
    printf("\n");
}

// Stack functions
void initStack(struct Stack *s)
{
    s->top = -1;
}

void push(struct Stack *s, int item)
{
    s->top++;
    s->items[s->top] = item;
}

int pop(struct Stack *s)
{
    int item = s->items[s->top];
    s->top--;

    return item;
}

int main()
{
    struct Queue qqwqqwq;
    initQueue(&qqwqqwq);

    struct Stack s;
    initStack(&s);

    enqueue(&qqwqqwq, 1);
    enqueue(&qqwqqwq, 2);
    enqueue(&qqwqqwq, 3);
    enqueue(&qqwqqwq, 5);
    enqueue(&qqwqqwq, 6);
    enqueue(&qqwqqwq, 7);
    enqueue(&qqwqqwq, 8);
    enqueue(&qqwqqwq, 9);

    printf("Original Queue: ");
    printQueue(&qqwqqwq);

    while (qqwqqwq.front != -1)
    {
        push(&s, dequeue(&qqwqqwq));
    }

    while (s.top != -1)
    {
        enqueue(&qqwqqwq, pop(&s));
    }

    printf("Reverse Queue: ");
    printQueue(&qqwqqwq);

    return 0;
}
