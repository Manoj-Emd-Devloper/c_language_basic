//wap for check the year is leap year or not
#include <stdio.h>

int main() {
    int year;
    printf("Enter the Year = ");
    scanf("%d",&year);

    if(year%400==0 || year%4==0)
        printf("The year is a leap year ! \n");
    else if(year%100==0)
        printf("The year is a not a leap year ! \n");
    else
        printf("The year is a not a leap year ! \n");
    return 0;
}