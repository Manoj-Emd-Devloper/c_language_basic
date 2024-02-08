#include <stdio.h>

struct value{
    int x;
    int y;
    int z;
};

int main() {
    
    //following are designated intiallizer to use for assign value to any object element
    struct value a = { .y = 20 , .x = 30 , .z=40};
    printf( " The x = %d , y = %d , z = %d \n", a.x , a.y , a.z );
    return 0;
}