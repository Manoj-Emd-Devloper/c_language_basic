//wap of single link list with the three node
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data1;
    struct node *link;
};

int main() {
    // head node
    struct node *head = (struct node*) malloc(sizeof(struct node));
    if(head == NULL){
        printf("memory is not allocated !");
        exit(1);
    }
    head -> data1 = 40;
    head -> link = NULL;

    //current node 1
    struct node *current = malloc(sizeof(struct node));
    if(head == NULL){
        printf("memory is not allocated !");
        exit(1);
    }
    current -> data1 = 45;
    current -> link = NULL;
    head -> link = current ; 

    //current node 2 (using same pointer)
    current = malloc (sizeof(struct node));
    current -> data1 =50;
    current -> link = NULL;
    head -> link -> link = current;
    
    printf("head data = %d \n", head -> data1);
    printf("head link = %p \n", head -> link);
    printf("current node 1 data = %d \n", head -> link -> data1);
    printf("current node 1 link  = %p \n", head -> link -> link);
    printf("current node 2 data = %d \n", head -> link -> link -> data1);
    printf("current node 2 link = %p \n", current -> link);

    free(head);
    free(current);
    return 0;
}