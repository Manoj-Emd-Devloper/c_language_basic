#include <stdio.h>

int main() {
    int a,i;
    printf("How many time you want to print the message =");
    scanf("%d",&a);
    i=1;
    while(i<=a){
        printf("%d time printed hello world! \n",i);
        i++;
    }
    return 0;
}