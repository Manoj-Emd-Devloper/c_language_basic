#include <stdio.h>

int main() {
    int a[][3]={1,2,3,4,5,6};
    int (*ptr)[3]=a;//take the pointer to the whole array
    printf("The pointer address at 1st array is %p \n",ptr);
    printf("The value at (*ptr)[1]= %d \n",(*ptr)[1]);
    printf("The value at (*ptr)[2]= %d \n",(*ptr)[2]);
    
    /* In 2d array 
    (*ptr)[1] --> *(*ptr+1)
    (*ptr)[2] --> *(*ptr+2)
    */

    ++ptr;//pointer move to 2nd array 1st element address
    printf("The pointer address at 2nd array is %p \n",ptr);
    printf("The value at (*ptr)[1]= %d \n",(*ptr)[1]);
    printf("The value at (*ptr)[2]= %d \n",(*ptr)[2]);
    return 0;
}