#include <stdio.h>

struct StudentData{
    char *stu_name;
    int stu_id;
    int stu_age;
};
int main()
{
     struct StudentData student;

     student.stu_name = "ram";
     student.stu_id = 123;
     student.stu_age = 20;

     printf("Student Name is: %s", student.stu_name);
     printf("\nStudent Id is: %d", student.stu_id);
     printf("\nStudent Age is: %d", student.stu_age);
     return 0;
}