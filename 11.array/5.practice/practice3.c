//wap for find the maximum and minimum number from user input value
#include <stdio.h>
#define Max 50
int main() {
    int a[Max],count=0,max,min;
    int i=0;

    do {
        printf("Enter the number at a[%d]: \n",i);
        scanf("%d", &a[i]);
        printf("Enter the 0 for exit\n");


        if (a[i] == 0){
            count++;
            break;
        }

        count++;
        i++;

    } while (i < Max);

    max=min=a[0];//initial take max and min at first index then compare that with other
    //printf("max and min at initial = %d %d \n",max,min);
    for(int i=1; i<count ; ++i){
            if(a[i]>max){
                max=a[i];
                printf("Max value is = %d \n",max);
            }
            else if(a[i]<min){
                min=a[i];
                printf("Min value is = %d \n",min);
            }
    }
    printf("Min value is = %d \n",min);
    printf("Max value is = %d \n",max);
    return 0;
}