#include<stdio.h>
#define Max 50
int main(void){
    int a[Max],b[Max],len,temp;
    printf("Enter the length of array = ");
    scanf("%d",&len);

    for(int i = 0; i < len ; i++)
    {
        printf("Enter the value at index %d: ",i);
        scanf("%d", &a[i]);
    }

    printf("You Entered a Array:\n");
    for (int i = 0; i < len ; i++)
    {
        printf("%d ", a[i]);
    }


    printf("\nThe right shifted value = \n");
    int last = a[len-1];
    int j=0;
    
    for(int i = 1; i<len;i++){
        int var =a[i-1];
        b[i]=var;
    }
    
    b[0] = last;

    for(int i=0 ; i < len ;i++){
        printf("%d ",b[i]);
    }
    
    return 0;
}