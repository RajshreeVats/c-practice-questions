#include<stdio.h>
int main()
{
	int age,f=1;
	for(;f!=0;)
	{
		printf("enter the age");
		scanf("%d",&age);
		if(age>0&&age<=100)
		{
			printf("the age is a valid age");
			f=0;
		}
		else 
		{
			printf("the age is invalid\n");
			continue;
		}
	}
}