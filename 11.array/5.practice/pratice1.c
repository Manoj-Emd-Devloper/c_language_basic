//wap for calculted the avarage of user input value
#include <stdio.h>
#define Max 100

int main() {
    int a[Max], sum = 0, count = 0, i = 0;
    float avg;

    do {
        printf("Enter the number (Enter 0 to exit): \n");
        scanf("%d", &a[i]);

        if (a[i] == 0)
            break;

        count++;
        i++;

    } while (i < Max);

    for (int j = 0; j < count; j++) {
        sum += a[j];
    }
    printf("you have enter the number %d times \n",count);
    printf("The sum is = %d \n",sum);
    avg = sum / (float)count;

    printf("The average of the all numbers is: %f\n", avg);
    return 0;
}
