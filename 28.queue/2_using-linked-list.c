/* Queue WITH STRUCTURE */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue();
void dequeue();
void display();
void peek();
void isEmpty();

int main()
{
    int n;
    do
    {
        printf("Operation : \n1.enqueue() \n2.dequeue() \n3.peek() \n4.display() \n5.isempty() \n6.Exit() \n"
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
            printf("Exit!\n");
            break;
        default:
            printf("Input out of condition ! \n");
            break;
        }
        printf("\n");
    } while (n != 6);
    return 0;
}

void enqueue()
{
    int x;
    printf("Enter the value for Queue:");
    scanf("%d", &x);

    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->link = NULL;

    if (front == NULL && rear == NULL)
        front = rear = new_node;

    else
    {
        rear->link = new_node;
        rear = new_node;
    }
}

void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        printf("%d is removed from Queue\n", front->data);
        front = rear = NULL;
    }
    else
    {
        printf("%d is removed from Queue\n", front->data);
        front = front->link;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty !\n");
    }
    else
    {
        temp = front;
        printf("From top to bottom\n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

void peek()
{
    if (front == NULL)
    {
        printf("Queue is empty ! \n");
    }
    else
    {
        printf("front element is %d \n", front->data);
    }
}

void isEmpty()
{
    if (front == NULL && rear == NULL)
        printf("Queue is empty ! \n");
    else
        printf("Queue is not empty ! \n");
}