//In variable argument we can multiple argument by using ellipse(...) and number of argument 
#include <stdio.h>
#include <stdarg.h>

int sum (int len, ...);

int main() {
    printf("sum = %d \n", sum(2,5,4));//passing two argument
    printf("sum = %d \n", sum(5,5,4,4,8,9));//passing five argument
    return 0;
}

int sum(int len, ...){
    int sum = 0 ;
    va_list list;//va_list is type of varible in function define in stdarg header file.

    va_start(list,len);//var_start is macros use for intiallize the argument list with the int parameter.

    for(int i=0 ; i<len ; i++){
        
        sum += va_arg(list,int);
        //va_arg is macro and by using va_list variable access the each elment in argument list. every time it's call it give next integer
    }
    
    va_end(list);//va_end use for to clean memory which assign to the va_list variable.
    return sum;
}