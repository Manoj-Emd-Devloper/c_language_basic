//wap user can only assign the salary to employee and the manager salary he can't be assign
#include <stdio.h>

int manager(void);

struct employee{
    char *name;
    int salary;
    int age;
};

int main(){
    struct employee emp1;
    struct employee emp2;
    printf("Enter the salary of employee 1 : ");
    scanf("%d",&emp1.salary);
    printf("Enter the salary of employee 2 : ");
    scanf("%d",&emp2.salary);
    printf("The salary of employee 1 = %d \n",emp1.salary);
    printf("The salary of employee 2 = %d \n",emp2.salary);
    printf("The salary of manager = %d \n",manager());
    return 0;
}

int manager(){
    struct employee manager;
    manager.age = 27;
    if(manager.age > 30)
        manager.salary=80000;
    else
        manager.salary=30000;
        return manager.salary;
}