#include <stdio.h>
int add(int b[],int n);
int main() {
    int a[]={10,2,0,5,4,6,8};
    int len = sizeof(a)/sizeof(a[0]);
    int var=add(a,len);
    printf("The sum of the is = %d",var);
    return 0;
}
//in add(a,len) a is passing the address of 1st element and in the function b is use as pointer using array
int add(int b[],int n){
    int sum=0,i;
    for(i=0;i<n;i++){
        sum+=b[i];
    }
    return sum;
}