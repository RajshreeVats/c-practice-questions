#include<stdio.h>
	struct player
	{
		char Name[20];
		int age;
		char dob[10];
	};
int main()
{
	int i,p,rn,c=1;
	struct player playerid[7];
	for(i=0;i<7;i++)
	{
		printf("Enter the name of the the player %d:\n",i);
		gets(playerid[i].Name);
		printf("Enter the age of the the player %d:\n",i);
		scanf("%d",&playerid[i].age);
		printf("Enter the date of birth of the the player %d:\n",i);
		gets(playerid[i].dob);
	}
	printf("Enter your roll no.:\n");
	scanf("%d",&rn);
	p=(rn%10)+20;
	printf("Sl No.             Name                Age            DOB(DD/MM/YY)  ");
	for(i=0;i<7;i++)
	{
		if(playerid[i].age>p)
		{
			printf("%d             %s               %d                 %s",c,playerid[i].Name,playerid[i].age,playerid[i].dob);
			c++;
		}
	}
}