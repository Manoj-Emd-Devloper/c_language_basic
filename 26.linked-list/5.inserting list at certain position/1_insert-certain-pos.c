#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void *add_to_end(struct node *head , int data);
void add_at_pos(struct node *head ,int pos ,int data);

int main() {

    //head node
    struct node *head = NULL;
    head = (struct node *) malloc (sizeof(struct node));
    if(head == NULL){
        printf("memory is not allocated ! \n");
        exit(1);
    }
    head -> data = 50;
    head -> link = NULL;

    add_to_end(head,40);
    add_to_end(head,60);

    //At 3rd position insert one node
    int pos = 3 , data = 90;
    add_at_pos(head , pos , data);

    //print the node data using traversing
    struct node *p = NULL;
    p = head;
    int i = 1;
    while(p != NULL){
        printf("The data at node %d is %d \n", i++ , p -> data);
        p = p -> link;
    }

    free(head);
    head = NULL;
    return 0;
}

void *add_to_end(struct node *head , int data){
    struct node *ptr = head;

    //temp node to add the end of node
    struct node *temp = NULL;
    temp = (struct node *) malloc (sizeof(struct node));
    if(temp == NULL){
        printf("memory is not allocated ! \n");
        exit(1);
    }
    temp -> data = data;
    temp -> link = NULL;

    //run until the end of node 
    while(ptr -> link != NULL)
        ptr = ptr -> link;
    
    //at the last node link the new node at the end 
    if(ptr -> link == NULL)
        ptr -> link = temp;
    
    temp = NULL;
}

void add_at_pos(struct node *head ,int pos ,int data){
    struct node *ptr = head;

    //ptr2 node which is inserted in the list
    struct node *ptr2 = NULL;
    ptr2 =(struct node *)malloc(sizeof(struct node));
    if(ptr2==NULL){
        printf("memory is not allocated to ptr 2 \n");
        exit(1);
    }
    ptr2 -> data = data;
    ptr2 -> link = NULL;

    
    pos--;
    while(pos != 1){
        ptr = ptr -> link;
        pos--;
    }

    ptr2 -> link = ptr -> link;
    ptr -> link = ptr2;
}