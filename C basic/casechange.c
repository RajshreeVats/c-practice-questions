#include<stdio.h>
#include<string.h>
int main()
{
	printf("enter the 1st string");
	char str[100];
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65&&str[i]<=90)
		str[i]+=32;
		else if(str[i]>=97&&str[i]<=122)
		str[i]-=32;
    }
    printf("the new string is \n");
    
    puts(str);
    
}