#include<stdio.h>
int main()
{
	int n;
	char ch;
	printf("ente the number of rows");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		ch=65;
		for(int j=0;j<=i;j++)
		{
			printf("%c",ch++);
		}
		printf("\n");
	}
}