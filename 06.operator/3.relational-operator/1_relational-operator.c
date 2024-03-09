#include <stdio.h>

int main() {
    int a,b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);

    if(a==b){
        printf("a is equal to b \n");
    }
    else if(a!=b){
        printf("a is not equal to b \n");
    }
    else{
        printf("no relation a and b \n");
    }

    if(a<b){
        printf("a are less than b \n");
    }
    else if(a>b){
        printf("a are greter than b \n");
    }
    else{
        printf("no greater and less than relation between a and b \n");
    }

    if(a<=b){
        printf("a are less than or equal to b \n");
    }
    else{
        printf("no comapare and equal to relation between a and d \n");
    }

    if(a>=b){
        printf("a are greater than or equal to b \n");
    }
    else{
        printf("no comapare and equal to relation between a and d \n");
    }

    getchar();
    return 0;
}