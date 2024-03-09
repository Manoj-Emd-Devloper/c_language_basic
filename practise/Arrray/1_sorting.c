//wap to order the array in asending order
#include <stdio.h>
#define Max 5
int main()
{
    int arr[Max];
    for (int i = 0; i < Max; i++)
    {
        printf("Enter the number %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < Max; i++)
    {
        for (int j = i+1; j < Max; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < Max; i++)
    {
        printf("a[%d]=%d\r\n", i, arr[i]);
    }
    return 0;
}