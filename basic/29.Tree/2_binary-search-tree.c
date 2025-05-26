#include <stdio.h>
#include <stdlib.h>

typedef struct nodes
{
    int data;
    struct nodes *left, *right;
} node_t;

node_t *create(int x);
node_t *insertion(node_t *roots, int x);
void preorder(node_t *root);
void inorder(node_t *root);

int main()
{
    node_t *root = NULL;
    int x = 0;
    int i = 1;
    printf("==================== \nBinary search tree \n(Enter 0 for no next node) \n");
    printf("Enter the %d node number = ", i);
    scanf("%d", &x);
    root = create(x);

    node_t *nodes = NULL;
    nodes = root;
    x = 0;
    do
    {
        printf("Enter the %d node number= ", ++i);
        scanf("%d", &x);
        nodes = insertion(nodes, x);
    } while (x != 0);

    printf("\n==================== \nTraversal in inorder(left -> root -> right): \n");
    inorder(root);

    printf("\n==================== \nTraversal in preorder(root -> left -> right): \n");
    preorder(root);

    return 0;
}

// for creating the root
node_t *create(int x)
{
    node_t *node = (node_t *)malloc(sizeof(node_t));
    if (node == NULL)
    {
        printf("Memory is not allocated ! \n");
        exit(1);
    }

    if (x == 0)
        return NULL;
    node->data = x;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// insert the according the rule of bst(small number at left side and big number at right side of parent node)
node_t *insertion(node_t *roots, int x)
{
    if (x == 0)
        return NULL;
    if (roots == NULL)
    {
        return create(x);
    }
    if (x < (roots->data))
        (roots->left) = insertion((roots->left), x);
    else if (x > (roots->data))
        (roots->right) = insertion((roots->right), x);
    return roots;
}

// print the node in tree in inorder
void inorder(node_t *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// print the node in tree in preorder
void preorder(node_t *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}