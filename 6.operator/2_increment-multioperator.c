#include <stdio.h>

int main() {

    int a,b,c,d,e,f;
    printf("Enter the number 1 = ");
    scanf("%d",&a);
    c=d=e=a;
    f=b;
    printf("Enter the number 2 = ");
    scanf("%d",&b);
    printf("a+++b= %d \n",a+++b);
    printf("a++ +b= %d \n",c++ +b);
    printf("a + ++b= %d \n",d + ++b);
    //printf("a+++++b= %d \n",e+++++f); //show error
    
    getchar();
    return 0;
}

