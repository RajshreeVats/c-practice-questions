#include <stdio.h>
#include <stdlib.h>

struct data
{

    int *roll;
    char *name;
    float *cgpa;    
};

int main()
{

    struct data *f;

    char str[100];

    f->roll = (int *)malloc(sizeof(int));
    f->name = (char *)malloc(20 * sizeof(char));
    f->cgpa = (float *)malloc(sizeof(float));

    for (int i = 0; i <= 78; i++)
    {
        printf("Enter your roll number: ");
        scanf("%d", f->roll);

        printf("Enter your cgpa: ");
        scanf("%f", f->cgpa);

        printf("Enter your name: ");
        fflush(stdin);
        gets(str);

        f -> name = str;

        printf("Your details are: %s\t\t%d\t\t%f\n", f->name, *(f->roll), *(f->cgpa));
    }

    free(f);

    return 0;
}