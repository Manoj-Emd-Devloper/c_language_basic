#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

typedef struct student
{
    int sem;
    char class;
    char name[20];
    int roll_num;
    struct student *next;
} student_t;

void student_entry(student_t **head);
void display_all_students(const student_t *head);
void display_student(const student_t *head, int roll_num);
void delete_student(student_t **head, int roll_num);
void free_list(student_t *head);

int main()
{
    student_t *head = NULL;
    int opt;
    do
    {
        printf("============================="
               "\nStudent Data Entry : \n1. Insert student data \n2. Delete student data \n3. Display all student data \n4. Display specific student data \n5. Exit \n"
               "Enter the number:");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            student_entry(&head);
            break;
        case 2:
            printf("Enter the roll number of the student to delete: ");
            int roll_num;
            scanf("%d", &roll_num);
            delete_student(&head, roll_num);
            break;
        case 3:
            display_all_students(head);
            break;
        case 4:
            printf("Enter the roll number of the student to display: ");
            scanf("%d", &roll_num);
            display_student(head, roll_num);
            break;
        case 5:
            printf("Exit!\n");
            break;
        default:
            printf("Input out of condition ! \n");
            break;
        }
        printf("===========================\n");
    } while (opt != 5);

    free_list(head);

    return 0;
}

void student_entry(student_t **head)
{
    printf("============================="
           "\nEntry of new Student : \n");
    student_t *new_student = (student_t *)malloc(sizeof(student_t));
    if (new_student == NULL)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    printf("Enter the name: ");
    getchar();
    scanf("%[^\n]s", new_student->name);
    printf("Enter the roll number: ");
    scanf("%d", &new_student->roll_num);
    printf("Enter the semester: ");
    scanf("%d", &new_student->sem);
    printf("Enter the class: ");
    getchar();
    scanf(" %c", &new_student->class);
    new_student->next = NULL;

    if (*head == NULL)
    {
        *head = new_student;
    }
    else
    {
        student_t *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_student;
    }
}

void display_all_students(const student_t *head)
{
    if (head == NULL)
    {
        printf("No students registered.\n");
        return;
    }
    printf("============================="
           "\nAll Student details:\n");
    const student_t *current = head;
    printf("Name:    \tRoll number: \tSemester: \tClass: \n");
    while (current != NULL)
    {
        printf("%.13s \t\t%d \t\t%d \t\t%c\n", current->name, current->roll_num, current->sem, current->class);
        current = current->next;
    }
}

void display_student(const student_t *head, int roll_num)
{
    const student_t *current = head;
    int found = 0;
    while (current != NULL)
    {
        if (current->roll_num == roll_num)
        {
            printf("============================="
                   "\nStudent details:\n");
            printf("Name: %s\n", current->name);
            printf("Roll number: %d\n", current->roll_num);
            printf("Semester: %d\n", current->sem);
            printf("Class: %c\n", current->class);
            found = 1;
            break;
        }
        current = current->next;
    }
    if (!found)
    {
        printf("Student with roll number %d not found!\n", roll_num);
    }
}

void delete_student(student_t **head, int roll_num)
{
    student_t *current = *head;
    student_t *prev = NULL;

    while (current != NULL && current->roll_num != roll_num)
    {
        prev = current;
        current = current->next;
    }

    if (current == NULL)
    {
        printf("Student with roll number %d not found!\n", roll_num);
        return;
    }

    if (prev == NULL)
    {
        *head = current->next;
    }
    else
    {
        prev->next = current->next;
    }

    printf("Student with roll number %d deleted.\n", roll_num);
    free(current);
}

void free_list(student_t *head)
{
    student_t *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
