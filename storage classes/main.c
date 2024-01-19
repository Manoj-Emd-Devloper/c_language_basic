#include<stdio.h>

void file1_myfun1(void);

int mainprivateData;

int main(){
    
    mainprivateData=100;
    
    printf("mainPrivateData=%d \n", mainprivateData);

    file1_myfun1();

    printf("mainPrivateData=%d \n", mainprivateData);

    return 0;
}

static void change_system_time(int system_time){
    printf("the system time is %d \n",system_time);
}