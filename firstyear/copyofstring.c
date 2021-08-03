#include<stdio.h>
#include<string.h>
int main()
{
	printf("enter the string");
	char str[100],ch[100];
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		ch[i]=str[i];
	}
printf("the copied string is \n");
puts(ch);
}