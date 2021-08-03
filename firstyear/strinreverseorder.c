#include<stdio.h>
#include<string.h>
int length(char ch[200])
{
	int ctr;
		for(int i=0;ch[i]!='\0';i++)
	{
		ctr++;
	}
	return ctr;
}
int main()
{
	printf("enter the string");
	char str[100],str2[100];
	gets(str);
	int l;
	l=length(str);
	for(int i=0;str[i]!='\0';i++)
	{
		str2[l-i]=str[i];
    }
   printf("the reverse string is \n");
   puts(str2);
}
