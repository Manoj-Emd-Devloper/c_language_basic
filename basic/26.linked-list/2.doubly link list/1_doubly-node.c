//wap to create a node of doubly link list
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node_t *pre;
    int data;
    struct node_t *next;
}node_t;

int main(){
    int data = 0;
    printf("Enter the number = ");
    scanf("%d",&data);

    node_t *head = (node_t *)malloc(sizeof(node_t));
    if(head == NULL){
        printf("Memory is not allocated to haed ! \n");
        exit(1);
    }

    head -> pre = NULL;
    head -> data = data;
    head -> next = NULL;

    printf("The data at node is = %d \n", head->data);
    return 0;
}

