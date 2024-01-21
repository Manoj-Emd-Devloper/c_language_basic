#include <stdio.h>
void equal(int c, int d);
void compare1(int e, int f);
void comapare2(int g,int h);
void compare3(int i,int j);

int main() {
    int a,b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);

    equal(a,b);
    compare1(a,b);
    comapare2(a,b);
    compare3(a,b);
    getchar();
    return 0;
}

void equal(int c, int d){
    if(c==d){
        printf("a is equal to b \n");
    }
    else if(c!=d){
        printf("a is not equal to b \n");
    }
    else{
        printf("no relation a and b \n");
    }
}

void compare1(int e, int f){
    if(e<f){
        printf("a are less than b \n");
    }
    else if(e>f){
        printf("a are greter than b \n");
    }
    else{
        printf("no greater and less than relation between a and b \n");
    }
}

void comapare2(int g,int h){
    if(g<=h){
        printf("a are less than or equal to b");
    }
    else{
        printf("no comapare and equal to relation between a and d \n");
    }
}

void compare3(int i,int j){
    if(i>=j){
        printf("a are greater than or equal to b");
    }
    else{
        printf("no comapare and equal to relation between a and d \n");
    }
}