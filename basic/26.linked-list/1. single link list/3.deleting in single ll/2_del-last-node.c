//wap to delete the last node in link list.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void add_to_end(struct node *head, int data);
void del_last(struct node *head);
int main() {
    struct node *head = NULL;
    head = (struct node*) malloc (sizeof(struct node));
    if(head == NULL){
        printf("Memory is not allocated ! \n");
        exit(1);
    }
    head -> data = 40;
    head -> link = NULL;

    add_to_end(head,90); 
    add_to_end(head,60); 

    del_last(head);

    struct node *p = head;
    int i = 1;
    while(p != NULL){
        printf("The data at node %d is %d \n", i++ , p -> data);
        p = p -> link;
    }

    free(head);
    head = NULL;
    return 0;
}


void del_last(struct node *head){

    if(head == NULL)
        printf("linked list is empty ! \n");
    
    else if(head -> link == NULL){
        free(head);
        head = NULL;
    }

    else{
        struct node *temp = head;
        struct node *temp2 = head;
        while(temp -> link != NULL){
        temp2 = temp;
        temp = temp -> link;
        }
        temp2 -> link = NULL;
        free(temp);
        temp = NULL;
    }
}

//function for add the node at end of head node
void add_to_end(struct node *head, int data){
    struct node *ptr = head;

    struct node *temp = NULL;
    temp = (struct node*) malloc(sizeof(struct node));
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