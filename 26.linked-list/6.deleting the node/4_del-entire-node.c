//wap for delete the delete the node at entire node
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}node_t;

void del_node(node_t **head);
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

    del_node(&head);
    if(head == NULL)
        printf("linked list is deleted successfully \n");
    
    return 0;
}

void del_node(node_t **head){
    struct node *temp = *head;
    while(temp != NULL) {
        temp = temp -> link;
        free(*head);
        *head = temp;
    }
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