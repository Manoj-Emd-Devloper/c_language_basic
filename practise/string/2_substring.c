#include <stdio.h>
#include <string.h>

int substring(const char *str1 , const char *str2){
    int len1 = sizeof(str1)/sizeof(str1[0]);
    int len2 = sizeof(str2)/sizeof(str2[0]);
    
    while(str1[len1]!='\0'){
        while(*str1 && *str2 && *str1==*str2){
            str1++;
            str2++;
        }
        if(!*str2){
            return 1;
        }
        str1++;
    }
}

int main()
{   
    char str1[20];
    printf("Enter the string = ");
    scanf("%[^\n]s",str1);
    char str2[10]="ell";
    printf("Enter the substring = ");
    getchar();
    scanf("%[^\n]s",str2);
    int result=0;
    
    result=substring(str1,str2);
    
    if(result==1)
        printf("======================== \n\"%s\" is substring of \"%s\" string \r\n",str2,str1);
    else
        printf("======================== \n%s is not substring of %s string\r\n",str2,str1);
    
    return 0;
}
