//wap to move the last node to the front of node
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node_t;

void mov_front(node_t **head);
void add_to_end(node_t *head, int data);
void print(node_t *head);

int main() {
    node_t *head = (node_t *)malloc(sizeof(node_t));
    if(head==NULL){
        printf("Memory is not allocated ! \n");
        exit(1);
    }
    head -> data = 50;
    head -> link = NULL;

    node_t *ptr = NULL;
    ptr = head;
    add_to_end(ptr,20);
    add_to_end(ptr,40);
    printf("The data at the node : \n");
    print(head);

    mov_front(&head);
    printf("After move last at front the data at the node : \n");
    print(head);

    free(head);
    return 0;
}

//code for moving the last node to move the first
void mov_front(node_t **head){
    node_t *p = *head , *q = NULL;
    while(p -> link != NULL){
        q = p;
        p = p -> link;
    }
    q -> link = NULL;
    p -> link = *head;
    *head = p;
}

//function for add the node at end of head node
void add_to_end(node_t *head, int data){
    node_t *ptr = head;

    node_t *temp = NULL;
    temp = (node_t *) malloc(sizeof(node_t));
    if(temp == NULL){
        printf("memory is not allocated to temp ! \n");
        exit(1);
    }
    temp -> data = data;
    temp -> link = NULL;

    while(ptr -> link != NULL)
        ptr = ptr -> link;
    
    if(ptr -> link == NULL)
        ptr -> link = temp;

    temp = NULL;
}

//printing the node data
void print(node_t *head){
    node_t *ptr;
    ptr = head;
    int i=1;
    while(ptr != NULL){
        printf("The data of %d node is = %d \n", i++ , ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}