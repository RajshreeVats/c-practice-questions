#include <stdio.h>
struct player
{
    char Ra_name[20]; //here Ra is the shortcut of Rajshree (Ra)
    int Ra_age;
    char Ra_dob[10];
};
int display(struct player rec)
{
    static int i = 1;
    printf("sl no %d", i);
    printf("student name is %s", rec.Ra_name);
    printf("\n age is %d", rec.Ra_age);
    printf("\ndob is %s", rec.Ra_dob);
    return 0;
}

int main()
{
    struct player val[7];
    int Ra_i;
    int Ra_p = (508 % 10) + 20;
    for (Ra_i = 0; Ra_i < 7; Ra_i++)
    {

        printf("enter the name of player");
        scanf("%s", val[Rs_i].Ra_name);
        printf("enter the age of player");
        scanf("%d", &val[Rs_i].Ra_age);
        printf("enter the dob of player");
        scanf("%s", val[Rs_i].Ra_dob);
    }
    for (int i = 0; i < 7; i++)
    {

        if (val[i].Ra_age > Rs_p)
        {
            display(val[i]);
        }
    }
    return 0;
}