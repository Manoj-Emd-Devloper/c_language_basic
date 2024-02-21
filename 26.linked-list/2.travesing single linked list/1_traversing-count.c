//wap to count the node in link list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_to_node(struct node *head);

int main() {
    // head node
    struct node *head = (struct node*) malloc(sizeof(struct node));
    if(head == NULL){
        printf("memory is not allocated !");
        exit(1);
    }
    head -> data = 40;
    head -> link = NULL;

    //current node 1
    struct node *current = malloc(sizeof(struct node));
    if(current == NULL){
        printf("memory is not allocated !");
        exit(1);
    }
    current -> data = 45;
    current -> link = NULL;
    head -> link = current ; 

    //current node 2 (using same pointer)
    current = malloc (sizeof(struct node));
    current -> data =50;
    current -> link = NULL;
    head -> link -> link = current;

    count_to_node(head);

    free(head);
    return 0;
}

void count_to_node(struct node *head){
    if (head == NULL)
        printf("Linked list is empty \n");
    
    int count = 0;
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL ){
        count++;
        ptr = ptr -> link;
    }
    printf("%d",count);
}
