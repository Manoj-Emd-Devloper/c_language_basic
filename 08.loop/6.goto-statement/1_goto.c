#include <stdio.h>

int main() {
    int a =10;
    
    loop : do {
                
                if(a==16){
                    a = a + 1 ;
                    goto loop; 
                    }

                printf("value of a = %d \n",a);
                
                a++;
            }while(a<20);
    return 0;
}