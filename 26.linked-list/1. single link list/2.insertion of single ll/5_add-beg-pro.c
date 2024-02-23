#include <stdio.h>
#include <stdlib.h>


//self referntial struct for link list
struct node {
    int data;
    struct node *link;
};

void add_beg(struct node **head , int data);

int main() {

    //head node
    struct node *head = NULL; 
    head = (struct node *) malloc (sizeof(struct node));
    if(head == NULL)
        printf("memory is not allocated to head! \n");
    head -> data = 90;
    head -> link = NULL;
    
    //ptr node
    struct node *ptr = NULL;
    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
        printf("memory is not allocated to ptr! \n");
    ptr -> data = 70;
    ptr -> link = NULL;
    
    //assign the address contain by ptr to head link
    head -> link = ptr;

    // printf("Before the add to the node \n");
    // ptr = head;
    // char i = 1;
    // while(ptr != NULL){
    //     printf("The data at node %d is = %d \n",i++, ptr->data);
    //     ptr = ptr -> link;
    // }

    printf("after the add node to the beginning of node \n");
    int data = 3;
    add_beg(&head,data); // passing the reference of head to function add_beg

    //print the data of link list
    ptr = head;
    char j = 1;
    while(ptr != NULL){
        printf("The data at node %d is = %d \n",j++, ptr->data);
        ptr = ptr -> link;
    }
    return 0;
}

void add_beg(struct node **head , int data){
    //ptr node 2
    struct node *ptr = NULL;
    ptr = (struct node *) malloc (sizeof (struct node));
    ptr -> data = data;
    ptr -> link = NULL;

    ptr -> link = *head;
    *head = ptr;
}