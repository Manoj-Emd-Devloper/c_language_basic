//wap to reverse the single linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *add_to_end(struct node *ptr ,int data);
void print(struct node *head);
struct node *reverse(struct node *head);

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

    printf("reversed data : \n");
    head = reverse(head);
    print(head);

    free(head);
    return 0;
}

struct node *reverse(struct node *head){
    struct node *pre = NULL , *next=NULL;

    while(head != NULL){
    next = head -> link;
    head -> link = pre;
    pre = head;
    head = next;
    }
    head = pre;
    return head;
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