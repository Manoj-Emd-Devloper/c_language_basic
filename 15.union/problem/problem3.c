//wap to find the area of rectangular by coordinates
#include <stdio.h>
int fun();

struct point{
    int x;
    int y;
};

struct rectangular{
    struct point lower_right;
    struct point upper_left;
};

int main() {
    struct rectangular r;
    int result;
    printf("Enter the upper left coordinate : \n");
    scanf("%d %d", &r .upper_left .x , &r .upper_left .y);
    printf("Enter the lower right coordinate : \n");
    scanf("%d %d", &r .lower_right .x , &r .lower_right .y);

    result = fun(r);
    printf("The are of rectangular is %d \n", result);
    return 0;
}

int fun(struct rectangular r){
    int length,breadth;
    length = (r .lower_right .x) - (r .upper_left .x) ;
    breadth = (r .upper_left .y) - (r .lower_right .y) ;
    printf("The length = %d and breadth = %d \n", length ,breadth);
    return length*breadth;
}