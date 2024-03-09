#include <stdio.h>
#include <stdlib.h>
#define Max 5

int compare_arr(const void *pa, const void *pb)
{
    const int *p1 = (int *)pa;
    const int *p2 = (int *)pb;
    return *p1 - *p2;
}
int main()
{
    int arr[Max];
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < Max; i++)
    {
        printf("Enter the number at index %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    qsort(arr, len, sizeof(int), compare_arr); // passing the function address argument to qsort function

    for (int i = 0; i < Max; i++)
    {
        printf("a[%d] = %d\r\n", i, arr[i]);
    }
    return 0;
}

//prototype of qsort
//void __cdecl qsort(void *_Base, size_t _NumOfElements, size_t _SizeOfElements, int (__cdecl *_PtFuncCompare)(const void *, const void *))