//wap that can pass the stucture as argument of function
#include <stdio.h>
#define book_lim 2

typedef struct{
    char title[20];
    char author[20];
    int price;
}book_t;

void fun(book_t book[],int a);

int main() {
    book_t book[book_lim];
    
    for(int i=0 ; i<book_lim ; i++){
        if(i != 0)
            getchar();//wait for user input but escape in first iteration
        printf("Enter name of book %d : ",i);
        scanf("%[^\n]s",book[i].title);
        getchar();
        printf("Enter author of book %d : ",i);
        scanf("%[^\n]s",book[i].author);
        printf("Enter price of book %d : ",i);
        scanf("%d",&book[i].price);
    }

    for (int i=0 ; i<book_lim ;i++){
    printf("\n");
    fun(&book[i],i);
    }
    return 0;
}

void fun(book_t *book , int a){
    printf("The name of book %d is : %s \n", a, book -> title);
    printf("The author of book %d  is : %s \n", a, book -> author);
    printf("The price of book %d is : %d \n", a, book -> price);
}