// wap of queue using array
#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void display();
void peek();
void isEmpty();
void isFull();

int main()
{
    int n;
    do
    {
        printf("Operation : \n1.enqueue() \n2.dequeue() \n3.peek() \n4.display() \n5.isempty() \n6.isfull() \n7.Exit() \n"
               "Enter the operation number:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            isFull();
            break;
        case 7:
            printf("Exit!\n");
            break;
        default:
            printf("Input out of condition ! \n");
            break;
        }
        printf("\n");
    } while (n != 7);
    return 0;
}

// insert the element in the queue
void enqueue()
{
    int x;
    printf("Enter push number = ");
    scanf("%d", &x);

    if (rear == (N - 1))
        printf("Queue is overflow ! \n");

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
        printf("The push number is = %d \n", queue[rear]);
    }
    else
    {
        rear++;
        queue[rear] = x;
        printf("The push number is = %d \n", queue[rear]);
    }
}

// remove element from the queue
void dequeue()
{
    if (front == -1 && rear == -1)
        printf("Queue is underflow ! \n");
    else if (front == rear)
    {
        printf("%d is dequeued \n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("%d is dequeued \n", queue[front]);
        front++;
    }
}

// print the element in the queue
void display()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty ! \n");
    for (int i = front; i < (rear + 1); i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

// return top element in queue
void peek()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty ! \n");
    else
        printf("The front number = %d ", queue[front]);
}

void isEmpty()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty ! \n");
    else
        printf("Queue is not empty ! \n");
}

void isFull()
{
    if (rear == (N - 1))
        printf("Queue is full ! \n");
    else
        printf("Queue is not full ! \n");
}