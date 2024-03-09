//wap D and N as input parameters and rotates the array by D elements.
#include <stdio.h>
#define N 5

void rotateArr(int arr[], int d, int n);

int main()
{
    int d = 2;
    int arr[N]={1,2,3,4,5};
    rotateArr(arr, d, N);
    printf("%d time rotaed arr[] is : \n", d);
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void rotateArr(int arr[], int d, int n)
{
    int temp[n];
    while (d >= 1)
    {
        temp[n - 1] = arr[0];
        for (int i = n - 1; i >= 1; i--)
        {
            temp[i - 1] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
        --d;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}