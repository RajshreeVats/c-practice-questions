#include<stdio.h>
#include<string.h>
int main()
{
	printf("enter the string");
	char str[100],ch;
	gets(str);
	printf("\n enter the character");
	scanf("%c",&ch);
	int ctr=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		ctr++;
	}
	printf("the no of times the character appeared is %d",ctr);
}