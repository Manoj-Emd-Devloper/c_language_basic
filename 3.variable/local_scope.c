#include<stdio.h>

//global scope
 int myscore=1000;//variable defination

/*this is a function prototype of myfun1*/
void myfun1(void);

int main(){
    //local scope variable
    
    {
     //local scope under the another local scope
      int myscore=900;
    }
    
    printf("myscore=%d \n",myscore);
    
    //this is a function call 
    myfun1();
    printf("myfun1's myscore=%d \n",myscore);
    
    return 0;
}

/*this is function defination*/
void myfun1(void){
myscore=700;
}