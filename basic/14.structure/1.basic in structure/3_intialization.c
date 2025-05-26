#include <stdio.h>

//typedet is use for to create new datatype to old datatype
typedef struct car{   // <- old datatype (not necessary to mention or not )
    char engine[50];
    char fual_type[10];
    int fual_tank_cap;
    int seating_cap;
    float city_mileage;
}car_t;// <- this is new datatype

int main() {
    car_t c1={"DDis engine","diesel",37,5,19.74};
    car_t c2={"Kappa","Petrol",22,8,14.5};
    printf("The name of engine of car1 is %s \n",c1.engine);
    printf("The size of seating capacity of car2 is %d \n",c2.seating_cap);
    printf("The fual type of engine of car1 is %s \n",c1.fual_type);
    
    return 0;
}