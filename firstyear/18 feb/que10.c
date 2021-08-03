#include<stdio.h>
int main()
{
	int n,a=1;
	printf("enter the number of rows");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		a=1;
		for(int j=n-1-i;j>=0;j--)
		{
			printf(" ");
		}
		for(int j=1;j<i;j++)
		{
			printf("%d",j);
		}
		if(i!=1)
		{
		
		for(int k=i-2;k>0;k--)
		{
			printf("%d",k);
		}}
		printf("\n");
	}
}