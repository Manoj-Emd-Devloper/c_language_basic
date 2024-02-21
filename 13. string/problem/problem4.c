#include<stdio.h>
void fun1(char *s1, char *s2);
void fun2(char **s1, char **s2);

int main () {
    char *str1 = "Hi", *str2 = "Bye";
    fun1(str1, str2);//here we passing the value not refference of pointer variable
    printf("%s %s ", str1, str2);

    fun2(&str1, &str2);//here we passing the refference of pointer variable
    printf("%s %s ", str1, str2);
    return 0;
}

void fun1(char *s1, char *s2) {
    char *tmp;
    tmp = s1;
    s1 = s2;
    s2 = tmp;
    }
    
void fun2(char **s1, char **s2) {
    char *tmp;
    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
    }