#include <stdio.h>

int main() {
    
    {
    //case 1 when q=p , the memory address of both pointer variable is same 
    int i=5 , j=10 ;
    int *p=&i,*q=&j;
    q=p;
    printf("The value of i at pointer p=%d and q=%d \n",*p,*q);
    }

    {
    //case 2 when q=p are not same as *q =*p , the  value of *p store in *q
    int i=5 , j=10 ;
    int *p=&i,*q=&j;
    *p=*q;
    printf("The value of i at pointer p=%d and q=%d \n",*p,*q);
    }
    return 0;
}