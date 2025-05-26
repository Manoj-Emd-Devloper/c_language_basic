// wap to create a hashing table using chaining collision method
#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

typedef struct hash
{
    int data;
    struct hash *next;
} hash_t;

// array of pointer of node
hash_t *head[TABLE_SIZE] = {NULL}, *c;

void insert();
void display();
void delete();

int main()
{
    void (*ptr[3])() = {insert, delete, display};
    int opt = 0;
    while (opt != 3)
    {
        printf("\n============================"
               "\nOperation on hash table: \n0.insert key() \n1.delete key() \n2.display key() \n3.Exit() \n"
               "Enter the operation number:");
        scanf("%d", &opt);
        if ((opt < 0) || (opt > 3))
            printf("invalid input ! press number inbetween (0-3)! \n");
        else if (opt == 3)
            break;
        else
            ptr[opt]();
    }
    if (opt == 3)
        printf("Exit!\n");
    return 0;
}

// insert the key in hash table
void insert()
{
    int element = 0;
    printf("\n===================="
           "\nhow many element need insert = ");
    scanf("%d", &element);
    do
    {
        int i, key;
        printf("\nEnter a value = ");
        scanf("%d", &key);

        i = key % TABLE_SIZE;
        printf("The value is store at %d index of (0-9) \n", i);
        hash_t *newnode = (hash_t *)malloc(sizeof(hash_t));
        newnode->data = key;
        newnode->next = NULL;

        if (head[i] == NULL)
            head[i] = newnode;
        else
        {
            c = head[i];
            while (c->next != NULL)
                c = c->next;
            c->next = newnode;
        }
        element--;
    } while (element != 0);
}

void delete()
{
    int key, i;
    hash_t *pre = NULL;
    printf("======================= \nEnter the number of delete = ");
    scanf("%d", &key);
    i = key % TABLE_SIZE;//find index where the key is  store
    if (head[i] == NULL)
    {
        printf("%d is not found\n", key);
    }
    else
    {
        pre = NULL;
        for (c = head[i]; c != NULL; c = c->next)
        {
            if (key == c->data)
            {
                printf("%d is deleted\n", c->data);
                if (pre == NULL) // If the node to be deleted is the first node
                    head[i] = c->next;
                else
                    pre->next = c->next;
                free(c);
                break;
            }
            pre = c;
        }
        if (c == NULL)
            printf("%d is not found\n", key);
        c=NULL;
    }
}

// display the all key in hash table
void display()
{
    printf("====================== \nThe key value in hash table\n");
    printf("index: \tkey: ");
    int i;
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        printf("\n%d", i);
        if (head[i] == NULL)
            continue;
        else
        {
            for (c = head[i]; c != NULL; c = c->next)
                printf("   \t%d ", c->data);
        }
    }
}