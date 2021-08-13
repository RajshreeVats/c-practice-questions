

#include<stdio.h>
#include<stdlib.h>

int main()
{
    
int *roll;
char *name;
float *cgpa;
char str[100];

roll = (int*)malloc(sizeof(int));
name = (char*)malloc(20*sizeof(char));
cgpa = (float*)malloc(sizeof(float));

printf("Enter your roll: ");
scanf("%d", roll);

printf("Enter your cgpa: ");
scanf("%f", cgpa);

printf("Enter your name: ");
fflush(stdin);
gets(str);

name = str;

printf("Your details are: %s\t\t%d\t\t%f\n", name, *roll, *cgpa);

free (roll);
free (name);
free (cgpa);

return 0;

}