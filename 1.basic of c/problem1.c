/*1.comment out the #include <stdio.h>
 2.remove the semicolon after the printf
 3.remove int type from main
 4.instead of 0 write value at return
 5.instead of 0 write character with single quote at return
 6.remove semicolon after return
 */
#include <stdio.h>

int main() {
    printf("Hello world!\n");
    return 0;
}

/*Answer:-
ans 1:- error of declaration of function 'printf'
    4 |     printf("Hello world!\n");
ans 2:- error: expected ';' before 'return'
ans 3:- error of return type defaults to 'int'
ans 4:- no error with output hello world
ans 5:- no error with output hello world
ans 6:- error of expected ';' before '}' token
*/