#include<stdio.h>

void myfun1(void);


int main(){
    
    myfun1();

    myfun1();

    myfun1();

    myfun1();

    return 0;
}

void myfun1(void){
    static int count = 0;
    
    count = count +1;

    printf("this is function executed %d time(s) \n",count);
}