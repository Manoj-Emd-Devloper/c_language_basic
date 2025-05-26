// wap implement the stack using the array
#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push();
void pop();
void display();
void peek();
void isEmpty();
void isFull();

int main()
{
    int n;
    do
    { 
        printf("Operation : \n1.push \n2.pop \n3.peek \n4.display \n5.isempty() \n6.isfull() \n7.Exit \n"
               "Enter the number:");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5: isEmpty();
                break;
        case 6: isFull();
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

// insert the element in the stack
void push()
{
    if (top == N - 1)
    {
        printf("stack is overflow you can't insert data ! \n");
    }
    else
    {
        int x;
        printf("Enter the number = ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
    printf("The data in stack is = %d \n", stack[top]);
}

// remove element from the stack
void pop()
{
    if (top == -1)
        printf("Stack is underflow you can't delete the data \n");
    else
    {
        int temp;
        printf("The pop number = %d \n", stack[top]);
        temp = stack[top];
        top--;
    }
}

// return top element in stack
void peek()
{
    if (top == -1)
        printf("Stack is underflow\n");
    else
    {
        printf("The top number in stack = %d \n", stack[top]);
    }
}

// print the element in the stack
void display()
{
    if (top == -1)
        printf("The stack is empty ! \n");
    else
    {
        printf("The data in the stack : \n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}


void isEmpty()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack is not empty\n");
    }
}

 
void isFull()
{
    if (top == N -1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Stack is not full\n");

    }
}