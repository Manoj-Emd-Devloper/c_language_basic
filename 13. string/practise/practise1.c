//wap for compare two string without using the  strcmp
#include <stdio.h>

int fun_strcmp(char * ,char *);
int main() {
    char s1[100];
    char s2[100];
    printf("Enter the string 1 : \n");
    scanf("%s",s1);
    printf("Enter the string 2 : \n");
    scanf("%s",s2);
    
    int result = fun_strcmp(s1,s2);

    if(result < 0){
        printf("s1<s2 \n");
    }
    else if(result == 0){
        printf("s1=s2 \n");
    }
    else{
        printf("s1>s2 \n");
    }
    
}

int fun_strcmp(char *s1 ,char *s2){
    int i=0;
    while( s1[i] != '\0' && s2[i] != '\0'){
        //printf("s1[%d]=%c , s2[%d]=%c \n",i,s1[i],i,s2[i]);
        if(s1[i] != s2[i]){
            return s1[i]-s2[i];
        }
        i++;
    }

       // printf("i = %d \n",i);
    if(s1[i] == '\0' && s2[i] == '\0'){
        return 0;
    }
    else if(s1[i] != '\0' && s2[i] != '\0'){
        return s1[i]-s2[i];
    }
}
