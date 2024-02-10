#include<stdio.h>

void myfun1(void);

//global scope
 int myscore=1000;


int main(){
    //local scope
      int myscore=200;
      { //nested local scope 
        int myscore=900;
        printf("nested myscore = %d \n",myscore);
      }

    printf("main myscore = %d \n",myscore);
    myfun1();
    return 0;
  }

  void myfun1(void){
      printf("myfun1 myscore = %d \n",myscore);//take value from global variable
    }