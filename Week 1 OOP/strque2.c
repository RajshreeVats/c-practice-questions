#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float marks[5];
    char name[50];
    float total;
    float percentage;
};

void calc(struct student s[], int n)
{
    printf("\n\nDisplaying Total Marks and Percentage\n\n");

    for (int i = 0; i < n; i++)
    {
        float sum = 0;
        for (int j = 0; j < 5; j++)
            sum += s[i].marks[j];
        s[i].total = sum;
        s[i].percentage= sum / 5;

        printf("Name : %s\tRoll No : %d\tTotal marks : %.2f\t Percentage : %.2f", s[i].name, s[i].roll, s[i].total, s[i].percentage);
        printf("\n");
    }
}

void display_roll(struct student s[], int n, int roll_no)
{
    int check= 0;
    for (int i = 0; i < n; i++)
    {
        if (roll_no== s[i].roll)
        {
            check = 1;
            printf("Name - %s\n", s[i].name);
            printf("Roll No. - %d\n", s[i].roll);
            for (int j = 0; j < 5; j++)
            {
                printf("Marks in %d subject is %.2f\n", j + 1, s[i].marks[j]);
            }
            printf("Total marks - %.2f\n", s[i].total);
            printf("Percentage - %.2f\n", s[i].percentage);
        }
    }
    if (check == 0)
        printf("Roll Number not found\n");
}

void display_find(struct student s[], int n, int upper, int lower)
{
    for (int i = 0; i < n; i++)
    {
        if (s[i].percentage >= lower &&s[i].percentage <= upper)
        {
            printf("Name : %s\n", s[i].name);
            printf("Roll No : %d\n", s[i].roll);
            for (int j = 0; j < 5; j++)
            {
                printf("Marks of subject - %d : %.2f\n", j + 1, s[j].marks);
            }
            printf("Total marks : %.2f\n",s[i].total);
            printf("Percentage : %.2f\n",s[i].percentage);
            printf("\n");
        }
    }
}

void sorting(struct student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i;
        for (int j = 0; j < 5; j++)
        {
            if (s[j].total < s[min].total)
            {
                min = j;
            }
        }
        if (min != i)
        {
        struct student temp;
        temp = s[i]; 
        s[i] = s[min];
        s[min] = temp;
        }
    }
    printf("\n\nDisplaying after SORTING\n\n");
    for( int i = 0; i < 5; i++)
    {
        printf("Name : %s\n",s[i].name);
        printf("Roll No : %d\n",s[i].roll);
        for (int j = 0; j< 5; j++)
        {
            printf("Marks in Subject %d is %.2f\n",j+1,s[i].marks[j]);
        }
        printf("Total Marks : %.2f\n",s[i].total);
        printf("Percentage : %.2f\n",s[i].percentage);
        printf("\n");
    }
}


int main()
{
    int n;
    int roll_no;
    float upper, lower;
    printf("Enter number of Students : ");
    scanf("%d", &n);
    printf("\n");
    struct student s[n];
    for ( int i = 0; i < 5; i++)
    {

        printf("Enter details of Student %d:\n\n", i + 1);
        printf("Enter roll number : ");
        scanf("%d", &s[i].roll);
        printf("Enter Name : ");
        scanf(" %s", s[i].name);
        printf("Enter marks in 5 subject : \n");
        for ( int j = 0; j < 5; j++)
        {
            printf("Subject %d : ", j + 1);
            scanf("%f", &s[i].marks[j]);
        }
        printf("\n");
    }
    calc(s, n);
    printf("\n\nEnter a roll number - ");
    scanf("%d", &roll_no);
    printf("\n\n");
    display_roll(s, n, roll_no);
    printf("\n\nEnter upper limit of percentage- \n");
    scanf("%f", &upper);
    printf("Enter lower limit of percentage- \n");
    scanf("%f", &lower);
    printf("\n\n");
    display_find(s, n, upper, lower);
    sorting(s, n);
    return 0;
}