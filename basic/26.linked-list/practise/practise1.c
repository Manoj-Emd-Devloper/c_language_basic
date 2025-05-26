#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *add_to_end(struct node *ptr ,int data);
void ascending(struct node *head);
void descending(struct node *head);
void print(struct node *head);

int nodes = 0;

int main() {
    int data=0;
    printf("Enter the number of node = ");
    scanf("%d",&nodes);
    if (nodes == 0)
        exit(1);
    
    struct node *head = NULL;
    head = (struct node *) malloc (sizeof(struct node));
    if(head == NULL){
        printf("Memory is not allocated to head node ! \n");
        exit(1);
    }
    printf("Enter the data at node 1 = ");
    scanf("%d", &data);
    head -> data = data;
    head -> link =NULL;

    struct node *ptr = NULL;
    ptr = head;
    for(int i=2 ; nodes>1 ; i++){
        printf("Enter the data at node %d = ",i);
        scanf("%d",&data);
        ptr = add_to_end(ptr,data);
        nodes--;
    }

    printf("\n");
    printf("Data which is entered : \n");
    print(head);

    ascending(head);

    printf("After arrange the data in ascending order : \n");
    print(head);

    printf("After arrange the data in descending order : \n");
    descending(head);
    print(head);

    free(head);
    return 0;
}

//use for to oreder the data in descending
void descending(struct node *head){
    struct node *p = NULL;
    struct node *q =NULL;
    int temp;
    if(head == NULL){
        printf("linked list is empty !");
        exit(1);
    }
    p = head;
    q = head->link; // Start q from the next node

    while(p != NULL){
        while(q != NULL){
            if (p->data < q->data){
                 temp = p->data;
                 p->data = q->data;
                 q->data = temp;
            }
            q = q->link;
        }
        p = p->link;
        if(p != NULL)
            q = p->link; // Update q for the next iteration
    }
}

void ascending(struct node *head){
    struct node *p = NULL;
    struct node *q =NULL;
    int temp;
    if(head == NULL){
        printf("linked list is empty !");
        exit(1);
    }
    p = head;
    q = head->link; // Start q from the next node

    while(p != NULL){
        while(q != NULL){
            if (p->data > q->data){
                 temp =  p->data;
                 p->data = q->data;
                 q->data = temp;
            }
            q = q->link;
        }
        p = p->link;
        if(p != NULL)
            q = p->link; // Update q for the next iteration
    }
}

//add node at end of head node
struct node *add_to_end(struct node *ptr ,int data){

    if (ptr == NULL)
        printf("Linked list is empty \n");

    struct node *temp = (struct node*)malloc(sizeof(struct node));
    if(temp == NULL){
        printf("memory is not allocated !");
        exit(1);
    }
    temp -> data = data;
    temp -> link = NULL;

    ptr -> link = temp;
    return temp;
}

//print the data in the node
void print(struct node *head){
    struct node *ptr = NULL;
    ptr = head;
    int i=1;
    while(ptr != NULL){
        printf("The data of %d node is = %d \n", i++ , ptr -> data);
        ptr = ptr -> link;
    }
    printf("\n");
}