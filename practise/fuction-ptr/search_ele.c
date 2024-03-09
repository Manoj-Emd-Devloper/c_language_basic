//wap program to search element in array
#include <stdio.h>
#include <stdbool.h>
#define Max 5

bool compare(const void *pa, const void *pb)
{
    return (*(int *)pa == *(int *)pb);
}

int search(void *ptr, int len, int n, void *p, bool (*compare)(const void *x, const void *y))
{
    for (int i = 0; i < len; i++)
    {
        if (compare(ptr + i * n, p))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[Max];
    int len = sizeof(arr) / sizeof(arr[0]);
    int i, x;
    for (int i = 0; i < Max; i++)
    {
        printf("Enter the number at a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want search = ");
    scanf("%d", &x);
    i = search(arr, len, sizeof(arr[0]), &x, compare);
    if(i==-1)
    printf("Element is not found!");
    else
    printf("The number found at index = %d\r\n", i);
    return 0;
}