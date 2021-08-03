#include<stdio.h>
#include<string.h>
int main()
{
	printf("enter the string");
	char str[100];
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			printf("%c",str[i]);
		}
    }
    
}