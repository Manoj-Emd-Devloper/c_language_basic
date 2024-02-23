//wap of single link list with the two node
#include <stdio.h>
#include<stdlib.h>

struct node {
    int data1;
    struct node *link;
};

int main() {
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *current = (struct node*)malloc(sizeof(struct node));

    if(head == NULL || current == NULL){
        printf("memory is not allocated !");
        exit(1);
    }

    head -> data1 = 40;
    head -> link = NULL;

    current -> data1 = 45;
    current -> link = NULL;
    head -> link = current;

    printf("head -> data1 = %d\n",head -> data1);
    printf("current -> data1 = %d\n",head -> link -> data1);
    printf("current = %p \n",current);
    printf("head -> link = %p \n",head -> link);

    free(head);
    free(current);
    return 0;
}