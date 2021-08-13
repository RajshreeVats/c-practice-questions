#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks[5];
};

int main() {
    struct student s[5];
    printf("Enter name: ");
    scanf("%s", &s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    for(int i=0;i<5;i++) {
        scanf("%d", &s.marks[i]);
    }

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    
    printf("marks: ");
    for(int i=0;i<5;i++) {
      printf("%d\n", s.marks[i]);  
    }
    

    return 0;
}