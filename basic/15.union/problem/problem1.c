//wap for the store to create a data of items

#include <stdio.h>
#pragma pack(1)//use pragma for avoid memory wastage in structure datatype

typedef struct {
    double price; //8byte
    //union are use to share same memory location of member and allocate the maximum size among the member
    union{

        struct{
            char *author;//4byte
            char *title;//4byte
            int num_pg;//4byte
        }book;

        struct {
            char *color;//4byte
            int size;//4byte
        }shirt;

    }item;

}store_t;

int main() {
    store_t obj_book;
    obj_book.price = 120;
    obj_book . item . book . author = "dennis rechhie";
    obj_book . item . book . title = "C laguage";
    obj_book . item . book . num_pg = 500;

    printf("The size of whole structure is = %ld \n" , sizeof(obj_book));
    printf("The price of book = %.2f \n", obj_book. price);
    printf("The Author of book = %s \n", obj_book . item . book . author);
    printf("The Title of book = %s \n", obj_book . item . book . title );
    printf("The number of page of book = %d \n", obj_book . item . book . num_pg );
    return 0;
}