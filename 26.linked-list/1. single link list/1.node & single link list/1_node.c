//wap to crete a node of link-list
#include <stdio.h>
#include <stdlib.h>

//self referencial structure
struct node{
    int data1;
    struct node *link;//This pointer is point to the same type of structure (i.e. typecasting)
};


int main() {
    struct node *head = NULL;
    head = (struct node *) malloc (sizeof(struct node));//malloc is allocate the memory and address of that memory assign to pointer
    
    if(head == NULL){
        printf("memory is not allocated !");
        exit(1);
    }
    head -> data1 = 40;
    head -> link = NULL;

    printf("data 1 = %d \n",head -> data1);
    printf("head address = %p \n",head);
    
    free(head);
    return 0;
}
//here is dynamic memory is allocated for reduce memory wastage
//we allocated memory by malloc and these memory address is stored in pointer
//now we can store the data in these memory by using pointer