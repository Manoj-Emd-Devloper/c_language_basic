#include <stdio.h>
struct employee{
    char firstname[10];
    char lastname[10];
    int age;
    int salary;
};
int main() {
    struct employee emp[2];

    for(int i=0 ; i<2 ; i++){
        printf("Enter the firstname of employee %d : ",i);
        scanf("%s",&emp[i].firstname);
        printf("Enter the lastname of employee %d: ",i);
        scanf("%s",&emp[i].lastname);
        printf("Enter the age of employee %d: ",i);
        scanf("%d",&emp[i].age);
        printf("Enter the salary of employee %d: ",i);
        scanf("%d",&emp[i].salary);
    }

    printf("\n");

        for(int i=0 ; i<2 ; i++){
        printf("The firstname of employee %d: %s \n", i, emp[i].firstname);
        printf("The lastname of employee %d: %s \n", i, emp[i].lastname);
        printf("The age of employee %d: %d \n", i, emp[i].age);
        printf("The salary of employee %d: %d \n", i, emp[i].salary);
        printf("\n");
    }
    return 0;
}