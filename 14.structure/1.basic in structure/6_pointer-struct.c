#include <stdio.h>
struct value{
    int x;
    int y;
    int z;
};

int main() {
    struct value a={10,20,30};
    struct value *ptr = &a;
    printf(" x = %d , y = %d , z = %d \n", ptr->x , ptr->y, ptr->z);
    // ptr->x equivalent to (*ptr).x  => (*&a).x => a.x 
    return 0;
}