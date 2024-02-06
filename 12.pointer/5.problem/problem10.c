#include <stdio.h>

int main() {
    char a[2][3]={{'a','b','c'},
                   {'d','e','f'}};
    char b[3][2];
    char *p=*b;
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<3 ; j++){
            *(p + 2*j + i) = a [i][j];
        }
    }
    return 0;
}