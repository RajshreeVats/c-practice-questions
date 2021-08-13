#include<stdio.h>
int main()
{
	int a=0,n;
	printf("enter the number of rows");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(a++%2==0)
			printf("1");
			else 
			printf("0");
		}
		printf("\n");
	}
}