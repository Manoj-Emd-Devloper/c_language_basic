//wap to create a node of doubly link list
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *pre;
    int data;
    struct node *next;
}node_t;

node_t* insert_node_end(node_t *ptr , int data);
void print(node_t *head);

int main(){
    int nodes = 0;
    int data = 0;
    printf("Enter the number of nodes = ");
    scanf("%d",&nodes);

    if(nodes == 0){
        exit(1);
    }
    
    node_t *head = NULL;
    printf("Enter the number of 1 node = ");
    scanf("%d",&data);
    head = insert_node_end(head,data);

    node_t *ptr = head;
    for(int i=2 ; nodes>1 ; i++)
    if(head != NULL){
        printf("Enter the number of %d node = ",i);
        scanf("%d",&data);
        ptr = insert_node_end(ptr , data);
        nodes--;
    }
    printf("\n");
    printf("Data which is entered : \n");
    print(head);
    return 0;
}

//insert the node at end of the link list
node_t* insert_node_end(node_t *ptr, int data){
    node_t *temp = (node_t *)malloc(sizeof(node_t));
    if(temp == NULL){
        printf("Memory is not allocated to haed ! \n");
        exit(1);
    }

    temp -> pre = NULL;
    temp -> data = data;
    temp -> next = NULL;

    if(ptr == NULL) //for first node or head node
        ptr = temp;
    else if(ptr != NULL)//for add new node to the end of link list
        ptr -> next = temp;
        temp -> pre = ptr;
        ptr = temp;
        temp = NULL;
    return ptr;
}

//print the data of nodes
void print(node_t *head){
    node_t *ptr = NULL;
    ptr = head;
    for(int i=1 ; ptr!= NULL ; i++){
        printf("The data of %d node is = %d \n", i, ptr -> data);
        ptr = ptr -> next;
    }
    printf("\n");
}