//wap to crate a binary tree
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left, *right;
} node_t;

node_t *create(int level);
void preorder(node_t *root);
void inorder(node_t *root);
void postorder(node_t *root);

int main() {
    node_t *root = NULL;
    printf("Binary Tree Creation\n");
    printf("====================\n");
    root = create(0);
    printf("==================== \nTraversal in preorder: \n");
    preorder(root);
    printf("\n==================== \nTraversal in inorder: \n");
    inorder(root);
    printf("\n==================== \nTraversal in postorder: \n");
    postorder(root);
    printf("\n====================");
    return 0;
}

//create a binary tree
node_t *create(int level) {
    node_t *newnode = (node_t *)malloc(sizeof(node_t));
    if (newnode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int x = 0;
    printf("Enter the element number / Enter -1 for no node = ");
    scanf("%d", &x);
    if (x == -1)
        return NULL;
    newnode->data = x;

    printf("\nFor left node of %d at level %d: \n", x, level);
    newnode->left = create(level + 1);
    printf("\nFor right node of %d at level %d: \n", x, level);
    newnode->right = create(level + 1);
    return newnode;
}

//print the node in tree in preorder
void preorder(node_t *root){
    if(root == NULL)
        return;
    printf("%d ",root -> data);
    preorder(root->left);
    preorder(root->right);
}

//print the node in tree in inorder
void inorder(node_t *root){
    if(root == NULL)
        return;
    inorder(root->left);
    printf("%d ",root -> data);
    inorder(root->right);
}

//print the node in tree in postorder
void postorder(node_t *root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root -> data);
}