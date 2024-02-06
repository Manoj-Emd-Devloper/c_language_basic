#include <stdio.h>
int add(int,int);

int main() {
    int result;
    int (*ptr)(int,int);
    //two way to declare and initiallized a function in c

    {//mention the ampersand (&) and the dereference (*) in funtion pointer not necessary
        ptr = &add;
        result =(*ptr)(4,70);
        // result = ptr(4,70);
        printf("The addition of a+b = %d \n",result);

    }

    {
        ptr = add;
        result = ptr(30,40);
        //result = (*ptr)(30,40);
        printf("The addition of a+b = %d \n",result);
    }

    return 0;
}

int add(int a,int b){
    return a+b;
}