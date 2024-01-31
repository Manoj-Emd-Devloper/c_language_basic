#include<stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(void){
    int operator;
    int a,b,plus,minus,multiplication,divison;
    printf("For 1 = addition , 2 = subtraction ,3 = multiplication , 4 = divison \n");
    printf("Enter number for operation between two operation =");
    scanf("%d",&operator);
    printf("Enter the number a =");
    scanf("%d",&a);
    printf("Enter the number b =");
    scanf("%d",&b);
    
    switch(operator){
        case 1: {   plus = add(a,b);
                    printf("addition of a and b = %d \n",plus);
                    break;
                }
        case 2: {   minus=sub(a,b);
                    printf("subtraction of a and b = %d \n",minus);
                    break;
                }
        case 3: {   multiplication=mul(a,b);
                    printf("multiplication of a and b = %d \n",multiplication);
                    break;
                }
        case 4: {   divison=div(a,b);
                    printf("divison of a and b = %d \n",divison);
                    break;
                }
    }
}

int add(int x , int y){
    return x+y;
}
int sub(int x , int y){
    return x-y;
}
int mul(int x , int y){
    return x*y;
}
int div(int x , int y){
    return x/y;
}