//wap program find the last second element value in 3d array
#include <stdio.h>

int main() {
    int a[2][2][2]={
                    {
                        {1,2},{3,4}
                    },
                    {
                        {5,6},{7,8}
                    }
                    };
    int var=**(*(a+1)+1);
    printf("%d",var);
    return 0;
}