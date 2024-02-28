/* STACK WITH STRUCTURE */

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node *top = NULL;

void push()
{
    int x;
    printf("Enter the value for stack:");
    scanf("%d",&x);

    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = x;
    new_node->link = top;
    top = new_node;
}

void pop()
{
    struct node *temp;
    temp = top;
    if(top == 0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d is removed from stack\n",top->data);
        top = top->link;
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = top;
    if(top == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("From top to bottom\n");
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->link;
        }
        printf("\n");  
    }
}

void peek()
{
    if(top == 0)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("Top element is %d", top->data);
    }
}

int main()
{
    int n;
    do
    { 
        printf("Operation : \n1.push \n2.pop \n3.peek \n4.display \n5.Exit \n"
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
        case 5:
            printf("Exit!\n");
            break;
        default:
            printf("Input out of condition ! \n");
            break;
        }
        printf("\n");
    } while (n != 5);

    return 0;
}