//wap to add the node to end of previous node in link list without traversing for less time complexity
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *add_to_end(struct node *head ,int data);

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    
    if(head == NULL){
        printf("memory is not allocated !");
        exit(1);
    }

    head -> data = 40;
    head -> link = NULL;

    //create a pointer that point to different node address
    struct node *ptr = NULL;
    ptr = head;
    ptr = add_to_end(ptr,67);
    ptr = add_to_end(ptr,88);
    ptr = add_to_end(ptr,98);
    
    //travesing the link list for print the data
    ptr = head;
    int i=1;
    while(ptr != NULL){
        printf("The data of %d node is = %d \n", i++ , ptr -> data);
        ptr = ptr -> link;
    }

    free(head);

    return 0;
}

struct node *add_to_end(struct node *ptr ,int data){

    if (ptr == NULL)
        printf("Linked list is empty \n");

    //create a temporary node and add to it the end of previous node
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("memory is not allocated !");
        exit(1);
    }
    temp -> data = data;
    temp -> link = NULL;

    //update the previous node link value
    ptr -> link = temp;
    return temp;//return address to temporary to previous node
}