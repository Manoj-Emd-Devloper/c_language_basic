#include <stdio.h>
struct node_t{
    int data1;
    int data2;
    struct node_t *link;
};

int main() {
    struct node_t ob1;
    struct node_t ob2;

    ob1.link = NULL;
    ob1.data1=10;
    ob1.data2=20;

    ob2.link = NULL;
    ob2.data1=30;
    ob2.data2=40;

    ob1.link = &ob2;

    printf("The of data 1 is = %d \n", ob1.link -> data1);
    return 0;
}