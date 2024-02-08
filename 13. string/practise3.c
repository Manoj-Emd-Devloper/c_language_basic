//wap to check given string in s2=wor is in the s1=hello world or not
//strstr used for to check the substring in second string is present in first string or not 
#include <stdio.h>

int main() {
    char s1[100];
    char s2[100];
    int result=0,count=0;
    
    printf("Enter the text : \n");
    scanf("%[^\n]%*c",s1);
    printf("the text is : %s  \n \n",s1);
    
    printf("Enter the word or character for check  : \n");
    scanf("%[^\n]%*c",s2);
    printf("the word is : %s  \n \n",s2);
    
    int j=0;
    while(s1[j] != '\0'){
        count++;
        j++;
    }
    s1[count]='\0';

    count=0;

    int i=0;
    while(s2[i] != '\0'){
        count++;
        i++;
    }
    s2[count]='\0';
    // printf("count= %d \n",count);

    
    for(int i=0 ; s2[i]!='\0' ; i++){
        for(int j=0 ; s1[j]!='\0' ; j++){
            printf("s1[%d]=%c , s2[%d]=%c \n",j,s1[j],i,s2[i]);
            if(s2[i] == s1[j] && s2[i] != '\0'){
                result++;
                printf("result= %d \n ",result);
            }
        }
    }
    

    if(result==count){
        printf("The word %s is found in text \n",s2);
    }
    else
        printf("The word %s is not found in text \n",s2);
    
    return 0;
}