#include <stdio.h>
int area(int lenth, int bredth);
int main() {
    
    int a,b,c;
    printf("Enter a number of a : ");
    scanf("%d",&a);
    printf("Enter a number of b : ");
    scanf("%d",&b);

    c=area(a,b);
    printf("The area of a rectangular is = %d \n",c);

    a=10,b=20;
    c=area(a,b);
    printf("if length = 10 and bredth = 20 The area of a rectangular is = %d \n",c);

    return 0;
}

int area(int lenth, int bredth){
    int area;
    area=lenth*bredth;
    return area;
}