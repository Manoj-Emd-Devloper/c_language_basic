//wap program for copy the string from one to another string without using strcpy && strncpy
#include <stdio.h>

int main() {
    
    char s1[100];
    char s2[100];
    printf("Enter the string 1 : \n");
    scanf("%s",s1);
    
    int len = sizeof(s2)/sizeof(s2[0]);
    for(int i=0 ; i<(len-1) ; i++){
        s2[i]=s1[i];
    }
    printf("string 2 = %s",s2);
    return 0;
}
 