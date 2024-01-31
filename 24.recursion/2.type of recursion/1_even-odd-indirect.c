/*wap which use indirect recursion method to do odd number add by 1 
  and for even number subract to by 1*/
#include<stdio.h>

void odd();
void even();

int n=1;

int main(){
    odd();
}

void odd(){
    if(n<=10){
        printf("%d ",n+1);
        n++;
        even();
    }
        return;
}

void even(){
    if(n<=10){
        printf("%d ",n-1);
        n++;
        odd();
    }
        return;
}
