#include <stdio.h>

int main() {
    int a;
    printf("Enter the number of a =");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("value of a is 1 \n");
            break;
        case 2:
            printf("value of a is 2 \n");
            break;
        case 3:
            printf("value of a is 3 \n");
            break;
        case 4:
            printf("value of a is 4 \n");
            break;
        default:
            printf("value of a is greater than 4\n");
            break;
    }
    return 0;
}