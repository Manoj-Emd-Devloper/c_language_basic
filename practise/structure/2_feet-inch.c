// wap to
#include <stdio.h>
typedef struct distance
{
    int feet;
    int inch;
} dis_t;

int add_dis(dis_t d1, dis_t d2);

int main()
{
    dis_t d1, d2;
    printf("Enter the distance1 feet and inch = ");
    scanf("%d %d", &d1.feet, &d1.inch);
    printf("Enter the distance2 feet and inch = ");
    scanf("%d %d", &d2.feet, &d2.inch);
    add_dis(d1, d2);
    return 0;
}

int add_dis(dis_t d1, dis_t d2)
{
    dis_t d3;
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;

    d3.feet = d3.feet + d3.inch / 12;
    d3.inch = d3.inch % 12;
    printf("The total distance is = %d %d \n", d3.feet, d3.inch);
}