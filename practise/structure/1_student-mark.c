//wap to calculate the percentage of subject mark of student
#include <stdio.h>
typedef struct student
{
    char name[30];
    int Mark[5];
    int total;
    float per;
} student_t;

int main()
{
    student_t std;
    printf("============================== "
           "\n(\"The percentage calculator\") \n");
    printf("Enter the name of student = ");
    scanf("%[^\n]%*c", std.name);

    std.total = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the mark of subject %d = ", i + 1);
        scanf("%d", &std.Mark[i]);
        std.total += std.Mark[i];
    }
    
    printf("=============================="
           "\nThe name of student = %s \n",
           std.name);
    printf("Total Mark = %d \n", std.total);
    std.per = (float)(std.total / (float)5);
    printf("The percentage of student = %.2f"
           "\n==============================",std.per);
    return 0;
}