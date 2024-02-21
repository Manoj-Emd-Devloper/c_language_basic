//wap to delete the first node in link list.
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

void add_to_end(struct node *head, int data);
struct node* del_first(struct node *head);
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

    head = del_first(head);//node 2 address is assign to head

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

struct node* del_first(struct node *head){
    struct node *temp = head;//temp is point to same node which head point
    head = temp -> link;//now head is point to node 2 which link to node 1
    free(temp);//delete node 1
    temp = NULL;//make temp is null pointer
    return head;
}