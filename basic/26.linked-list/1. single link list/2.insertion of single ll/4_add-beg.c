//wap to add the node to beginning of link list
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *add_to_beg(struct node *head , int data);

int main() {
    //head node
    struct node *head = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head -> data = 50;
    head -> link = NULL;

    //ptr node
    struct node *ptr = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = 40;
    ptr -> link = NULL;
    head -> link = ptr;

    //data of node which add to beginning
    int data = 30;
    head = add_to_beg(head,data);//passing the value of variable

    ptr=head;
    int i=1;

    //print the data of node in sequence
    while(ptr != NULL){
        printf("Data at node %d is = %d \n", i++, ptr->data);
        ptr = ptr -> link;
    }
    return 0;
}

struct node *add_to_beg(struct node *head , int data){
    //create ptr node
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> link = NULL;

    ptr -> link = head;
    head = ptr;
    return head;
}