#include <stdio.h>

struct student
{
    int roll;
    int marks[5];
    char name[50];
};

int main()
{
    struct student s;
    printf("Enter details of Student :\n");
    printf("Enter roll number : ");
    scanf("%d", &s.roll);
    printf("Enter Name : ");
    scanf(" %s", s.name);
    printf("Enter marks in 5 subject : ");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &s.marks[j]);
    }
    printf("\n\nDisplaying Name, Roll and Marks of student :\n\n");
    printf("Name : \t\t%s\n", s.name);
    printf("Roll No :\t%d\n", s.roll);
    for (int j = 0; j < 5; j++)
    {
        printf("Marks in Subject %d is %d\n", j + 1, s.marks[j]);
    }
    return 0;
}